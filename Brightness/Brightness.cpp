#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    Mat src = imread("../images/lenna.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load failed!" << endl;
        return -1;
    }

//preprocessor : if 0 -> no process
#if 0
    //image brightness 1
    Mat dst = src - 50;

    //image brightness 2
    Mat dst;
    add(src, 50, dst);

    //image invers
    Mat dst = 255 - src;
#else
    // Mat dst(src.rows, src.cols, src.type());
    Mat dst(src.rows, src.cols, CV_8UC1); //same size with src, but no data

    for(int y = 0; y < src.rows; y++){
        for(int x = 0; x < src.cols; x++){
            // int v = src.at<uchar>(y, x) + 50;

            //method 1
            // if (v > 255) v = 255;
            // if (v < 0) v = 0;

            //method 2
            // v = (v > 255) ? 255 : (v < 0) ? 0 : v;
            // dst.at<uchar>(y, x) = v; //return data(y,x), reference

            //method 3
            dst.at<uchar>(y,x) = saturate_cast<uchar>(src.at<uchar>(y, x) + 50);
        }
    }


#endif
    imshow("src", src);
    imshow("dst", dst);
    while(1){
        if(waitKey() == 27) break;
    }
}
