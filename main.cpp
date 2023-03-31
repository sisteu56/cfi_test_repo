#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char *argv[]) {
    static const bool FeatureA = std::string(argv[1]) == "--FeatureA";
    static const bool FeatureB = std::string(argv[2]) == "--FeatureB";
    if (FeatureA) {
        std::cout << "FeatureA is activated" << std::endl;
        if (FeatureB) {
        std::cout << "FeatureB is activated" << std::endl;
        }
    }
    return 0;
}
