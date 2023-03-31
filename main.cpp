#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char *argv[]) {
    static const bool FeatureA = std::string(argv[1]) == "--FeatureA";
    if (FeatureA) {
        std::cout << "FeatureA is activated" << std::endl;
    }
    return 0;
}
