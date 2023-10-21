#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    //256x256 lenna resize
    Mat src1 = imread("../images/lenna256.bmp", IMREAD_GRAYSCALE);
    Mat src2 = imread("../images/square.bmp", IMREAD_GRAYSCALE);

    if(src1.empty() || src2.empty()){
        cerr << "image load failed!!" << endl;
        return -1;
    }

    if (src1.size() != src2.size() || src1.type()!=src2.type()){
        cerr << "the images are difference in size or type!" << endl;
        return -1;
    }

    imshow("src1", src1);
    imshow("src2", src2);

    Mat dst1, dst2, dst3, dst4;

    bitwise_and(src1, src2, dst1);
    bitwise_or(src1, src2, dst2);
    bitwise_xor(src1, src2, dst3);
    bitwise_not(src1, dst4); //dst4 = ~src1;

    imshow("dst1", dst1);
    imshow("dst2", dst2);
    imshow("dst3", dst3);
    imshow("dst4", dst4);

    while(true){
        if(waitKey() == 27) break;
    }
}