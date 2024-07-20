#include "gaussian_blur.h"

// Implement the SIMD Gaussian blur here
void simd_gaussian_blur(const cv::Mat& input, cv::Mat& output) {
    // Implementation of SIMD Gaussian blur
    int kernel_size = 5;
    double sigma = 1.0;
    cv::GaussianBlur(input, output, cv::Size(kernel_size, kernel_size), sigma, sigma, cv::BORDER_DEFAULT);
}
