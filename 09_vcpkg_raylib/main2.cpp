/********************************************************************************  ***********  
 * *  *   raylib [textures] example - Image loading and drawing on it  
 * *  *   NOTE: Images are loaded in CPU memory (RAM); textures are loaded in GPU   memory (VRAM)  
 * *  *   This example has been created using raylib 1.4 (www.raylib.com)  
 * *   raylib is licensed under an unmodified zlib/libpng license (View raylib.h   for details)  
 * *  *   Copyright (c) 2016 Ramon Santamaria (@raysan5)  
 * *  *********************************************************************************  ***********/
#include "raylib.h"
int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "raylib [textures] example - image drawing");
    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    Image cat = LoadImage("../resources/cat.png");
    // Load image in CPU memory (RAM)
    // ImageCrop(&cat, (Rectangle){10, 10, cat.width-25, cat.height -25});       // Crop an image piece
    ImageFlipHorizontal(&cat);                            // Flip cropped image horizontally
    ImageRotateCW(&cat);
    ImageResizeNN(&cat, 80, 80);                            // Resize flipped-cropped image
    Image parrots = LoadImage("../resources/parrot.png"); // Load image in CPU memory (RAM)
    ImageResize(&parrots, parrots.width * 1.5, parrots.height * 1.5);
    // Draw one image over the other with a scaling of 1.5f
    ImageDraw(&parrots, cat, (Rectangle){20, 20, cat.width + 4, cat.height + 4}, (Rectangle){300, 40, cat.width * 1.5, cat.height * 1.5}, BLUE);
    ImageCrop(&parrots, (Rectangle){20, 20, parrots.width - 10, parrots.height - 10}); // Crop resulting imageUnloadImage(cat);
    // Unload image from RAM
    Texture2D texture = LoadTextureFromImage(parrots); // Image converted to texture, uploaded to GPU memory (VRAM)
    UnloadImage(parrots);                              // Once image has been converted to texture and uploaded to VRAM, it can be unloaded from RAM
    SetTargetFPS(60);
    //---------------------------------------------------------------------------------------
    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(texture, screenWidth / 3 - texture.width / 3, screenHeight / 3 - texture.height / 3 - 40, WHITE);
        DrawRectangleLines(screenWidth / 3 - texture.width / 3, screenHeight / 3 - texture.height / 3 - 40, texture.width, texture.height, DARKGRAY);
        DrawText("We are drawing only one texture from various images   composed!", 240, 350, 10, DARKGRAY);
        DrawText("Source images have been cropped, scaled, flipped and   copied one over the other.", 190, 370, 10, DARKGRAY);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }
    // De-Initialization//------------------------------------------------------------------
    UnloadTexture(texture); // Texture unloading
    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
    return 0;
}