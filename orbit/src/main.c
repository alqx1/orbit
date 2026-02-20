#include <raylib.h>

#define WINDOW_HEIGHT 400
#define WINDOW_WIDTH 400

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "title");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
}
