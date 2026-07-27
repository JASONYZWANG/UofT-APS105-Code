// Define this only in *one* .cpp file before including stb_image.h
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include <iostream>
#include <vector>
#include <string>

// The structure definition
struct pixel {
    double I_Red;
    double I_Green;
    double I_Blue;
    double Inner_temperature;

    double O_Red;
    double O_Green;
    double O_Blue;
    double Outer_temperature;

    double heat_loss;

    int severity;
};

int main() {
    // 1. Image paths (Make sure stb_image.h and the images are in the right directory)
    const char* inner_path = "inner_wall.jpg";
    const char* outer_path = "outer_wall.jpg";

    int width1, height1, channels1;
    int width2, height2, channels2;

    // Load images. Force 3 channels (RGB) to ensure consistent data alignment
    unsigned char *inner_img = stbi_load(inner_path, &width1, &height1, &channels1, 3);
    unsigned char *outer_img = stbi_load(outer_path, &width2, &height2, &channels2, 3);

    // Error handling
    if (!inner_img || !outer_img) {
        std::cerr << "Error: Could not load one or both images." << std::endl;
        if (inner_img) stbi_image_free(inner_img);
        if (outer_img) stbi_image_free(outer_img);
        return -1;
    }

    // Ensure both images cover the same area
    if (width1 != width2 || height1 != height2) {
        std::cerr << "Error: Image dimensions do not match." << std::endl;
        stbi_image_free(inner_img);
        stbi_image_free(outer_img);
        return -1;
    }

    // 2. Create the 2D array of structs using std::vector
    std::vector<std::vector<pixel>> pixel_data(height1, std::vector<pixel>(width1));

    // 3 & 4. Extract RGB and populate the struct
    for (int y = 0; y < height1; ++y) {
        for (int x = 0; x < width1; ++x) {
            
            // Calculate 1D index for the current pixel (3 channels per pixel)
            int index = (y * width1 + x) * 3;

            // Populate Inner RGB (stb_image loads as R, G, B)
            pixel_data[y][x].I_Red   = static_cast<double>(inner_img[index]);
            pixel_data[y][x].I_Green = static_cast<double>(inner_img[index + 1]);
            pixel_data[y][x].I_Blue  = static_cast<double>(inner_img[index + 2]);

            // Populate Outer RGB
            pixel_data[y][x].O_Red   = static_cast<double>(outer_img[index]);
            pixel_data[y][x].O_Green = static_cast<double>(outer_img[index + 1]);
            pixel_data[y][x].O_Blue  = static_cast<double>(outer_img[index + 2]);
            
            // Initialize remaining fields
            pixel_data[y][x].Inner_temperature = 0.0;
            pixel_data[y][x].Outer_temperature = 0.0;
            pixel_data[y][x].heat_loss = 0.0;
            pixel_data[y][x].severity = 0;
        }
    }

    std::cout << "Successfully extracted RGB data!" << std::endl;

    // Free the image memory allocated by stb_image
    stbi_image_free(inner_img);
    stbi_image_free(outer_img);

    return 0;
}