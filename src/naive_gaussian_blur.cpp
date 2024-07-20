#include "gaussian_blur.h"

// Implement the naive Gaussian blur here
void naive_gaussian_blur(const cv::Mat& input, cv::Mat& output) {
    // Implementation of naive Gaussian blur
    int kernel_size = 5;
    double sigma = 1.0;
    cv::GaussianBlur(input, output, cv::Size(kernel_size, kernel_size), sigma);
}
