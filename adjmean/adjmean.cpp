#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(int argc, char* argv[]){
    if (argc < 2){
        cerr << "usage: agjmean.exe <filename>" << endl;
        return -1;
    }

    //1. argv[1] grayscale
    Mat src = imread(argv[1], IMREAD_GRAYSCALE);

    if (src.empty()){
        cerr <<"image load failed!" << endl;
        return -1;
    }

    //2. avg brightness
    int s = 0;
    for(int j = 0; j < src.rows; j++){
        for(int i = 0; i < src.cols; i++){
            s += src.at<uchar>(j,i);
        }
    }

    int m = s / (src.rows * src.cols);
    cout << "Mean val: " << m << endl;

    //int m = sum(src)[0] / src.total();
    //int m = mean(src)[0];

    //3.avg brightness -> 128
    Mat dst = src + (128 - m);

    //4. imshow
    imshow("src", src);
    imshow("dst", dst);

    waitKey();
}

