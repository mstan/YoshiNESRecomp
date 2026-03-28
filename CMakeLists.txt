cmake_minimum_required(VERSION 3.20)
project(YoshiRecomp C)

set(CMAKE_C_STANDARD 11)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)
include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

add_executable(YoshiRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    generated/yoshi_full.c
    generated/yoshi_dispatch.c
)

target_include_directories(YoshiRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(YoshiRecomp PRIVATE ${SDL2_LIBRARIES})

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
