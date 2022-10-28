#include "../lib/raylib.h"
#include "../lib/raymath.h"

int main()
{
    InitWindow(1080, 720, "Template");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}