#include "gaussian_blur.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <image_path>" << std::endl;
        return -1;
    }

    std::string image_path = argv[1];
    load_and_display_image(image_path);

    return 0;
}
