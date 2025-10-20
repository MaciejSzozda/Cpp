#include "image.h"

int main()
{
    Image image;
    image.load("obrazek.ppm");
    image.add_watermark();
    image.save_as("x.ppm");
    return 0;
}
