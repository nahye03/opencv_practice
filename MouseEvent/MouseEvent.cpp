#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

void on_mouse(int event, int x, int y, int flags, void*);

Mat src;
Point ptOld;

int main(){
    src = imread("../images/lenna.bmp");

    namedWindow("src");
    setMouseCallback("src", on_mouse);

    imshow("src", src);
    waitKey();
}

//userdata 사용하지 않아서 변수명을 따로 지정하지 않았다.
void on_mouse(int event, int x, int y, int flags, void*)
{
    switch(event){
    case EVENT_LBUTTONDOWN:
        ptOld = Point(x, y);
        cout <<"EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
        break;
    case EVENT_LBUTTONUP:
        cout <<"EVENT_LBUTTONUP: " << x << ", " << y << endl;
        break;
    case EVENT_MOUSEMOVE:
        //flags == EVENT_FLAG_GUTTON 으로 하는 경우 다른 티와 눌렸을 때 같지 않다
        if(flags & EVENT_FLAG_LBUTTON){
            cout <<"EVENT_MOUSEMOVE: " << x << ", " << y << endl;
            //이렇게 하면 선이 끊어져서 나타남(마우스 이벤트가 빠르게 발생하지 않아서)
            //circle(src, Point(x,y), 2, Scalar(0,255,255), -1, LINE_AA);
            line(src, ptOld, Point(x, y), Scalar(0,255,255), 3, LINE_AA);
            ptOld = Point(x, y);
            imshow("src", src);
        }
        break;
    default:
        break;
    }
}

