#include <iostream>
#include <string>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main(int argc, char* argv[]){
    if (argc < 3){
        cout << "Usage: ocrt.exe <src_image> <dst_image>" << endl;
        return 0;
    }

    string filename = "../images/";
    string src_filename = filename + argv[1];
    string dst_filename  = filename + argv[2];

    Mat img = imread(src_filename);


    if (img.empty()){
        cerr << "Image load failed!" << endl;
        return -1;
    }
    //현재 폴더에 사진 저장
    //만약 grayscale로 사진을 불러왔다면 grayscale로 저장된다
    bool ret = imwrite(dst_filename, img);

    if(ret){
        cout << argv[1] << " is successfully saved as " << argv[2] << endl;
    } else {
        cout << "File save failed!!" << endl;
    }

    namedWindow("image");
    //namedWindow를 하지 않고 imshow를 해도 알아서 창을 띄워준다
    imshow("image", img);
    waitKey(); //사용자 키보드 입력 기다리는 함수
    destroyAllWindows();
}

