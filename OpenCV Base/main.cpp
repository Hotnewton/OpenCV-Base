//
//  main.cpp
//  OpenCV Base
//
//  Created by Hotnewton on 5/15/16.
//  Copyright © 2016 Hotnewton. All rights reserved.
//


#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, const char * argv[]) {
    
    VideoCapture camera(0);
    
      if(!camera.isOpened()) return 0;
    
    namedWindow("OpenCV",CV_WINDOW_AUTOSIZE);
    
    Mat frame_original;
    
    Mat frame_output;
    
    
    while(1){
        
        
       camera >> frame_original;
        
       if (frame_original.empty()) break;
        
        //filter2D(frame_original, frame_output, -1 , my_kernel, Point( -1, -1 ), 0, BORDER_DEFAULT );
        
        imshow("OpenCV", frame_original);
        
        if(waitKey(10)==27) break;
    
    }

    destroyWindow("OpenCV");
    
    std::cout << "Hello, World!\n";
    return 0;
}
