#include <benchmark/benchmark.h>
#include "gaussian_blur.h"
#include <opencv2/opencv.hpp>

static void BM_NaiveGaussianBlur(benchmark::State& state) {
    cv::Mat input = cv::Mat::ones(state.range(0), state.range(0), CV_8UC1);
    cv::Mat output;
    for (auto _ : state) {
        naive_gaussian_blur(input, output);
    }
}
BENCHMARK(BM_NaiveGaussianBlur)->RangeMultiplier(2)->Range(128, 2048);

static void BM_SIMDGaussianBlur(benchmark::State& state) {
    cv::Mat input = cv::Mat::ones(state.range(0), state.range(0), CV_8UC1);
    cv::Mat output;
    for (auto _ : state) {
        simd_gaussian_blur(input, output);
    }
}
BENCHMARK(BM_SIMDGaussianBlur)->RangeMultiplier(2)->Range(128, 2048);

BENCHMARK_MAIN();
