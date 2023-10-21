#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(){
    Mat src = imread("../images/tiffany.bmp", IMREAD_GRAYSCALE);

    if(src.empty()){
        cerr << "image load failed!!" << endl;
        return -1;
    }

    double alpha = 1.0;

    //simple contrast
    //Mat dst = src + (src - 128) * alpha;

    //consider mean brightness
    int m = (int)mean(src)[0];
    Mat dst = src + (src - m) * alpha;
    cout << m << endl;

    imshow("src", src);
    imshow("dst", dst);

    while(true){
        if(waitKey() == 27) break;
    }
}
