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

    TickMeter tm;
    tm.start();

    Mat dst1;
    GaussianBlur(src, dst1, Size(), 5);

    tm.stop();
    cout << "gaussian: " << tm.getTimeMilli() << endl;

    tm.reset();
    tm.start();

    Mat dst2;
    bilateralFilter(src, dst2, -1, 100, 5);

    tm.stop();
    cout << "bilateral: " << tm.getTimeMilli() << endl;

    imshow("src", src);
    imshow("dst1", dst1);
    imshow("dst2", dst2);

    waitKey();
}