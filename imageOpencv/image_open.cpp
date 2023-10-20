#include <iostream>
#include "opencv2/opencv.hpp"
//이걸 include하면 opencv와 관련된 헤더파일을 한번에 include할 수 있다.

using namespace cv;
using namespace std;

int main(){
    //이미지 불러오기
    //Mat : 행렬 표현 클래스
    Mat img = imread("../images/lenna.bmp");

    if (img.empty()){
        cerr << "Image load failed!" << endl;
        return -1;
    }
    //현재 폴더에 사진 저장
    //만약 grayscale로 사진을 불러왔다면 grayscale로 저장된다
    imwrite("lenna.png", img);

    namedWindow("image");
    //namedWindow를 하지 않고 imshow를 해도 알아서 창을 띄워준다
    imshow("image", img);
    waitKey(); //사용자 키보드 입력 기다리는 함수
    destroyAllWindows();
}
