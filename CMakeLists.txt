cmake_minimum_required(VERSION 3.10)
project(GaussianBlur)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Google Benchmark
include(FetchContent)
FetchContent_Declare(
  benchmark
  GIT_REPOSITORY https://github.com/google/benchmark.git
  GIT_TAG v1.6.1
)
set(GOOGLETEST_PATH "F:/CppDev/benchmark/googletest")  # Replace with the actual path
set(BENCHMARK_ENABLE_GTEST_TESTS OFF)  # Disable GTest tests if not needed
FetchContent_MakeAvailable(benchmark)



# OpenCV
find_package(OpenCV REQUIRED)

include_directories(include ${OpenCV_INCLUDE_DIRS})

add_library(gaussian_blur
    src/naive_gaussian_blur.cpp
    src/simd_gaussian_blur.cpp
    src/image_utils.cpp
)

add_executable(main
    src/main.cpp
)

add_executable(benchmark_gaussian_blur
    benchmarks/gaussian_blur_benchmark.cpp
)

target_link_libraries(gaussian_blur ${OpenCV_LIBS})

target_link_libraries(main
    gaussian_blur
    ${OpenCV_LIBS}
)

target_link_libraries(benchmark_gaussian_blur
    gaussian_blur
    benchmark::benchmark
    benchmark::benchmark_main
)
