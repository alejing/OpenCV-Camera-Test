//
//  main.cpp
//  OpenCV-Camera-Test
//
//  Created by Alejandro Franco on 23/03/16.
//  Copyright © 2016 Alejandro Franco. All rights reserved.
//

#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main(void)
{
    Mat frame;
    //open camera no 0 internal (0 internal or 1 external)
    VideoCapture cap(0);
    //check if internal camera is working
    while (!(cap.grab() && cap.isOpened()))
    {
        cout << "La cámara no esta lista" << endl;
    }
    //wait 30 millisecond and check for "s" 115 key number to exit
    while (waitKey(30) != 115)
    {
        //cap >> frame;
        // read image from camera and store it in frame variable
        cap.read(frame);
        // show frame to window named “Cámara”
        imshow("Cámara",frame);
    }
}
