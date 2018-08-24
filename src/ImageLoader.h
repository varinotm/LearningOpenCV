#include <opencv2\opencv.hpp>

using namespace cv;

bool showImage(char* imagePath[])
{
    Mat image;
    image = imread(imagePath[1], 1);

    if (!image.data)
    {
        printf("No image data \n");
        return false;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);

    waitKey(0);

    return true;
}