#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    Mat src = imread("../images/lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load failed!!" << endl;
        return -1;
    }

    //embossing mask
    float data[] = {-1.f, -1.f , 0.f, -1.f, 0.f, 1.f, 0.f, 1.f, 1.f};
    Mat kernel(3, 3, CV_32FC1, data);

    cout << kernel << endl;

    Mat dst;
    //embossing filter
    filter2D(src, dst, -1, kernel, Point(-1,-1), 128);

    imshow("src", src);
    imshow("dst", dst);
    while(1){
        if(waitKey() == 27) break;
    }
}