#include <raylib.h>
#include <stddef.h>
#include "planet.h"
#include "utils/vector_utils.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define FPS 60

#define TIMESTEP 1.f / FPS

int main() {
    struct planet p1 = {
        .mass = 2000.f,
        .radius = 20.f,
        .position = {.x = 200, .y = 200},
        .velocity = {.x = 30, .y = 0},
        .immovable = false,
    };

    struct planet p2 = {
        .mass = 2000.f,
        .radius = 20.f,
        .position = {.x = 600, .y = 200},
        .velocity = {.x = -30, .y = 40},
        .immovable = false,
    };

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Orbit");
    SetTargetFPS(60);

    float buffer = 0.f;
    while (!WindowShouldClose()) {
        float dt = GetFrameTime();
        buffer += dt;

        while (buffer >= TIMESTEP) {
            buffer -= TIMESTEP;

            Vector2 f12 = calculate_gravitational_force(&p1, &p2);
            Vector2 f21 = negate(f12);
            apply_force(&p1, f12, TIMESTEP);
            apply_force(&p2, f21, TIMESTEP);
            update_planet(&p1, TIMESTEP);
            update_planet(&p2, TIMESTEP);
        }

        BeginDrawing();
        ClearBackground(BLACK);

        render_planet(&p1);
        render_planet(&p2);

        EndDrawing();
    }

    CloseWindow();
}
