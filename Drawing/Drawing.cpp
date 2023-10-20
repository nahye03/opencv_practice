#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;


int main(){
    VideoCapture cap("../videos/test_video.mp4");

    if (!cap.isOpened()){
        cerr << "camera open failed!" << endl;
        return -1;
    }

    Mat frame;
    while (true){
        cap >> frame;

        //exception
        if (frame.empty()){
            cerr << "frame empty!!" << endl;
            break;
        }

        line(frame, Point(570,280), Point(0,560), Scalar(255,0,0), 2);
        line(frame, Point(570,280), Point(1024, 720), Scalar(255,0,0), 2);

        int pos = cvRound(cap.get(CAP_PROP_POS_FRAMES));
        String text = format("frame number: %d", pos);
        putText(frame, text, Point(20,50), FONT_HERSHEY_SIMPLEX, 0.7, Scalar(0,0,255), 1, LINE_AA);

        imshow("frame",  frame);

        if(waitKey(1) == 27) //ESC
            break;
    }

    cap.release();
    destroyAllWindows();
}
