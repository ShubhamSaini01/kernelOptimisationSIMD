# Gaussian Blur Performance Benchmark

This project compares the performance of naive and SIMD implementations of Gaussian blur using Google Benchmark.

## Project Structure
GaussianBlur/
│
├── include/
│ └── gaussian_blur.h
│
├── src/
│ ├── naive_gaussian_blur.cpp
│ ├── simd_gaussian_blur.cpp
│ └── main.cpp
│
├── benchmarks/
│ └── gaussian_blur_benchmark.cpp
│
├── CMakeLists.txt
└── build/


## Installation

### Prerequisites

- CMake
- Git
- Visual Studio (or any other C++ compiler)
- Google Benchmark

### Steps

1. **Clone the Repository**:
   ```sh
   git clone https://github.com/yourusername/GaussianBlur.git
   cd GaussianBlur

2. Fetch Google Benchmark:
    git clone https://github.com/google/benchmark.git
    cd benchmark
    git clone https://github.com/google/googletest.git

3. Build the Project:
    mkdir build
    cd build
    cmake ..
    cmake --build .

### Usage
Benchmarking Naive vs. SIMD Gaussian Blur
1. Navigate to the build directory:
    cd build

2. Run the Benchmark:
    ./benchmark_gaussian_blur


### Example Output
The output will show the performance metrics for each implementation, such as the time taken per iteration.

--------------------------------------------------------------
Benchmark                    Time           CPU Iterations
--------------------------------------------------------------
BM_NaiveGaussianBlur/128    129 ns        128 ns     5454545
BM_NaiveGaussianBlur/256    512 ns        510 ns     1290322
BM_SIMDGaussianBlur/128      64 ns         63 ns    10909091
BM_SIMDGaussianBlur/256     256 ns        255 ns     2551020
