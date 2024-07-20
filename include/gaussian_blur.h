#pragma once

#include <opencv2/opencv.hpp>

void naive_gaussian_blur(const cv::Mat& input, cv::Mat& output);
void simd_gaussian_blur(const cv::Mat& input, cv::Mat& output);
void load_and_display_image(const std::string& image_path);
