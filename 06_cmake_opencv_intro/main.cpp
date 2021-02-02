#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
  cv::Mat image;        //Create Matrix to store image
  cv::VideoCapture cap; //initialize capture
  cap.open(0);
  if (!cap.isOpened()) // check if succeeded to connect to the camera
    CV_Assert("Cam open failed");
  cap.set(cv::CAP_PROP_FRAME_WIDTH, 1280);
  cap.set(cv::CAP_PROP_FRAME_HEIGHT, 720);
  cv::namedWindow("window", 1); //create window to show image
  while (1)
  {
    cap >> image;                //copy webcam stream to image
    cv::imshow("window", image); //print image to screen
    cv::waitKey(33);             //delay 33ms
  }
  return 0;
}
