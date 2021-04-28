#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char const *argv[])
{
  Mat img = imread("cat.jpg", 1);
  imshow("img", img);
  waitKey(0);

  return 0;
}
