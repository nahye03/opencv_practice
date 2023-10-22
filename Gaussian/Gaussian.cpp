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

#if 0
//gaussian filter blurring
    Mat dst;
    GaussianBlur(src, dst, Size(), 1.0);

    Mat dst2;
    blur(src, dst2, Size(7,7));

    imshow("src", src);
    imshow("dst", dst);
    imshow("dst2", dst2);
    while(1){
        if(waitKey() == 27) break;
    }

#else
    imshow("src", src);

    Mat dst;
    for(int sigma = 1; sigma <= 5; sigma++){
        TickMeter tm;
        tm.start();

        GaussianBlur(src, dst, Size(0,0), (double)sigma);

        tm.stop();
        cout << "sigma: " << sigma << ", time: " << tm.getTimeMilli() << "ms." << endl;

        String desc = format("Sigma = %d", sigma);
        putText(dst, desc, Point(10, 30), FONT_HERSHEY_COMPLEX, 1.0, Scalar(255), 1, LINE_AA);

        imshow("dst", dst);
        waitKey();
    }

#endif

}