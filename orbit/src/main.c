#include <raylib.h>

#include <structs.h>

#define WINDOW_HEIGHT 400
#define WINDOW_WIDTH 400

void update();
void render();

int main() {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Orbit");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        

        EndDrawing();
    }

    CloseWindow();
}
