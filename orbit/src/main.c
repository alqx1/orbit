#include <raylib.h>
#include <stddef.h>
#include "planet.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720

int main() {
    struct planet p = {
        .mass = 1.f,
        .radius = 40.f,
        .position = {.x = 200, .y = 200},
        .velocity = {0},
    };

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Orbit");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        render_planet(&p);

        EndDrawing();
    }

    CloseWindow();
}
