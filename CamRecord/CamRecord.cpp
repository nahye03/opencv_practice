#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;


int main(){
    // VideoCapture cap(0);
    VideoCapture cap("../videos/test_video.mp4");

    if (!cap.isOpened()){
        cerr << "camera open failed!" << endl;
        return -1;
    }

    //no audio
    int fourcc = VideoWriter::fourcc('X','V','I','D');
    double fps = 30;
    Size sz((int)cap.get(CAP_PROP_FRAME_WIDTH), (int)cap.get(CAP_PROP_FRAME_HEIGHT));

    cout << "size: " << sz << endl;
    cout << " fps: " << fps << endl;

    VideoWriter output("output.avi", fourcc, fps, sz);

    if(!output.isOpened()){
        cout << "output.avi is failed!!" << endl;
        return 0;
    }

    int delay = cvRound(1000 / fps);


    Mat frame, edge;
    while (true){
        cap >> frame;

        //exception
        if (frame.empty()){
            cerr << "frame empty!!" << endl;
            break;
        }

        Canny(frame, edge, 50, 150);
        //edge는 gray scale이라서 변환해저야 저장된다.
        cvtColor(edge, edge, COLOR_GRAY2BGR);

        output << edge;

        imshow("frame",  frame);
        if(waitKey(delay) == 27) //ESC
            break;
    }
    cout << "output.avi file is created!" << endl;
    cap.release();
    destroyAllWindows();
}
