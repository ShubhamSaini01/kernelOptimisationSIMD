#include "gaussian_blur.h"

void load_and_display_image(const std::string& image_path) {
    cv::Mat input = cv::imread(image_path, cv::IMREAD_COLOR);
    if (input.empty()) {
        std::cerr << "Could not open or find the image!" << std::endl;
        return;
    }

    cv::Mat output_naive, output_simd;
    naive_gaussian_blur(input, output_naive);
    simd_gaussian_blur(input, output_simd);

    cv::imshow("Original Image", input);
    cv::imshow("Naive Gaussian Blur", output_naive);
    cv::imshow("SIMD Gaussian Blur", output_simd);
    cv::waitKey(0);
}
