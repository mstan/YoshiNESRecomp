/*
 * Yoshi semantic profile for NESRecomp's opt-in screen diorama.
 *
 * The puzzle well is structural geometry. Characters, eggs, and other
 * readable pieces are reconstructed from OAM as upright sprite cards.
 */
#include "game_voxel.h"

#include "nes_runtime.h"
#include "voxel_screen_profile.h"

static NesVoxelScreenState s_voxel;

static int yoshi_scene_visible(const uint32_t *framebuffer,
                               int stride, void *user) {
    int hits = 0;
    int source_x = g_widescreen_left;
    (void)user;

    /* Active play has a nearly continuous green left edge at x=68 from
     * y=32 to y=204. Color-selecting the edge avoids mistaking the title
     * page's large white field for the puzzle well. */
    for (int y = 32; y <= 204; y++) {
        uint32_t color = framebuffer[y * stride + source_x + 68];
        unsigned r = (color >> 16) & 0xFFu;
        unsigned g = (color >> 8) & 0xFFu;
        unsigned b = color & 0xFFu;
        if (g > r + 16u && g > b + 16u)
            hits++;
    }
    return hits >= 100;
}

static float yoshi_tile_height(const NesVoxelScreenSample *sample,
                               void *user) {
    int x = sample->tile_x;
    int y = sample->tile_y;
    (void)user;
    if (sample->non_background_pixels < 4) return 0.0f;

    /* The black/green border encloses the recessed playfield. Only the rim is
     * raised; the checkerboard wallpaper, score panels, and playfield art
     * remain painted surfaces. */
    if (y >= 4 && y <= 25 && (x == 8 || x == 22))
        return 9.0f;
    if (x >= 8 && x <= 22 && (y == 4 || y == 25))
        return 9.0f;
    if (y >= 5 && y <= 24 && (x == 9 || x == 21) &&
        sample->non_background_pixels >= 14)
        return 4.0f;
    return 0.0f;
}

static const NesVoxelScreenProfile s_profile = {
    "Yoshi puzzle-table diorama",
    0, 240, 0, 0, 85,
    30, -15, 0, 95, 125,
    0xFF181884u, 0xFF3636A8u,
    yoshi_scene_visible,
    yoshi_tile_height,
    0
};

void game_voxel_set_mod_enabled(int enabled) {
    nes_voxel_screen_set_enabled(&s_voxel, enabled);
}

void game_voxel_configure_mod(int pitch, int yaw, int roll,
                              int zoom_percent, int sprite_scale_percent) {
    nes_voxel_screen_configure(&s_voxel, pitch, yaw, roll,
                               zoom_percent, sprite_scale_percent);
}

void game_voxel_handle_event(const SDL_Event *event) {
    nes_voxel_screen_handle_event(&s_voxel, event);
}

void game_voxel_init(void) {
    nes_voxel_screen_init(&s_voxel, &s_profile);
}

void game_voxel_update(void) {
    nes_voxel_screen_update(&s_voxel, &s_profile);
}

void game_voxel_post_render(uint32_t *framebuffer) {
    nes_voxel_screen_post_render(&s_voxel, &s_profile, framebuffer);
}
