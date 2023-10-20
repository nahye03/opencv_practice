#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

void MaskOp1();
void MaskOp2();

int main(){
    // MaskOp1();
    MaskOp2();
}

void MaskOp1(){
    Mat src = imread("../images/airplane.bmp", IMREAD_COLOR);
    Mat mask = imread("../images/mask_plane.bmp", IMREAD_GRAYSCALE);
    Mat dst = imread("../images/field.bmp", IMREAD_COLOR);

    if (src.empty() || mask.empty() || dst.empty()){
        cerr << "image load failed!" << endl;
        return;
    }

    // copyTo(src, dst, mask);
    src.copyTo(dst, mask);

    imshow("src", src);
    imshow("dst", dst);
    imshow("mask", mask);

    waitKey();
    destroyAllWindows();

}

void MaskOp2(){
    Mat src = imread("../images/cat.bmp", IMREAD_COLOR);
    Mat logo = imread("../images/opencv-logo-white.png", IMREAD_UNCHANGED);

    if(src.empty() || logo.empty()){
        cerr << "image load failed!" << endl;
        return;
    }

    vector<Mat> planes;
    split(logo, planes);

    Mat mask = planes[3];

}
