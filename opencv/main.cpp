#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    Mat img = imread(R"(D:\cpppj\tryOpenCV\cat.jpg)");
    imshow("cat", img);
    waitKey(0);
    destroyAllWindows();

    return 0;
}
