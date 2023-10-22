#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    Mat src = imread("../images/rose.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load failed!!" << endl;
        return -1;
    }

//mean filter blurring
    //mean filter 1
    // float data[] = {
    //     1/9.f, 1/9.f, 1/9.f,
    //     1/9.f, 1/9.f, 1/9.f,
    //     1/9.f, 1/9.f, 1/9.f
    // };
    // Mat kernel(3, 3, CV_32FC1, data);

    //mean filter 2
    // Mat kernel = Mat::ones(3, 3, CV_32FC1) / 9.f;

    // Mat dst;
    // filter2D(src, dst, -1, kernel);

    //mean filter 3
    imshow("src", src);

    Mat dst;
    for(int ksize = 3; ksize <= 7; ksize += 2){
        blur(src, dst, Size(ksize, ksize));

        String desc = format("Mean: %dx%d", ksize, ksize);
        putText(dst, desc, Point(10, 30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);
        imshow("dst", dst);
        waitKey();
    }

}