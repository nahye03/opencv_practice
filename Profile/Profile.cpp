#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

void on_trackbar(int, void*);

Mat src, dst, profile;
int row = 0;

int main(void)
{
    src = imread("../images/lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load failed!!!" << endl;
        return -1;
    }

    //using gaussian_blur to remove noise
    GaussianBlur(src, src, Size(), 2);

    namedWindow("dst");
    namedWindow("profile");
 
    profile.create(256, src.cols, CV_8U);

    createTrackbar("Profile", "dst", &row, src.rows - 1, on_trackbar);
    on_trackbar(0, 0);

    waitKey();
}

void on_trackbar(int, void*)
{
    src.copyTo(dst);
    profile.setTo(255);

    //now trackbar's row(first pixel address)
    uchar* pSrc = (uchar*)src.ptr<uchar>(row);
    uchar* pDst = (uchar*)dst.ptr<uchar>(row);

    for (int i = 1; i < src.cols; i++){
        line(profile, Point(i - 1, 255 - pSrc[i - 1]), Point(i, 255 - pSrc[i]), 0);
        pDst[i] = saturate_cast<uchar>(pSrc[i] + 50); //now row more bright
    }

    imshow("dst", dst);
    imshow("profile", profile);
}