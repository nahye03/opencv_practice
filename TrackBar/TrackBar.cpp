#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

void on_level_change(int pos, void* userdata);

int main(){
    Mat img = Mat::zeros(400,400,CV_8UC1);

    namedWindow("image");
    createTrackbar("level", "image", 0, 16, on_level_change, (void*)&img);

    imshow("image", img);
    waitKey();
}

void on_level_change(int pos, void* userdata){
    //참조를 통해 main의 img와 완전히 같아진다
    Mat img = *(Mat*)userdata;

    img.setTo(pos * 16); //if pos==16 -> 256이지만 255로 된다
    imshow("image", img);

}