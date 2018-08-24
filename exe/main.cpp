#include "ImageReader.h"

#include <iostream>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    showImage(argv);
}