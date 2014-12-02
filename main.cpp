#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main(int argc, char **argv)
{
    Mat image=imread("../../images/lena.jpg");
    namedWindow("test",CV_WINDOW_AUTOSIZE);
    imshow("test",image);
    waitKey(0);
    return 0;
}