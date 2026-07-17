cmake_minimum_required(VERSION 3.20)
project(YoshiRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

# ---- Nestopia Oracle (optional) ----
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" ON)
set(NESTOPIA_DIR "${CMAKE_SOURCE_DIR}/nestopia-core")

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

add_executable(YoshiRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    nes_snapshot.c
    verify_mode.c
    generated/yoshi_full.c
    generated/yoshi_dispatch.c
)

target_include_directories(YoshiRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(YoshiRecomp PRIVATE ${SDL2_LIBRARIES})

# Temporary: enable stack tracking for title-screen follower investigation.
# Remove once root cause of $0248 reset is found.
target_compile_definitions(YoshiRecomp PRIVATE RECOMP_STACK_TRACKING)

if(ENABLE_NESTOPIA_ORACLE)
    target_link_libraries(YoshiRecomp PRIVATE nestopia_core)
    target_compile_definitions(YoshiRecomp PRIVATE ENABLE_NESTOPIA_ORACLE)
endif()

if(WIN32)
    target_link_libraries(YoshiRecomp PRIVATE ws2_32)
    add_custom_command(TARGET YoshiRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${NESRECOMP_ROOT}/runner/external/SDL2/lib/x64/SDL2.dll"
            "$<TARGET_FILE_DIR:YoshiRecomp>"
    )
endif()

if(MSVC)
    target_compile_options(YoshiRecomp PRIVATE /W3 /WX-)
    target_compile_options(YoshiRecomp PRIVATE /wd4102)
endif()

# ---- Pre-boot GUI launcher (recomp-ui / Dear ImGui) ----
include(${CMAKE_SOURCE_DIR}/recomp-ui/recomp_ui.cmake)
recomp_target_launcher_ui(YoshiRecomp BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)
