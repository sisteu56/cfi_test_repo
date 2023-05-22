int main(int argc, char** argv) {

    bool __attribute__((feature_variable("FeatureA"))) FeatureA = argv[0] == "--A";
    bool __attribute__((feature_variable("FeatureB"))) FeatureB = argv[1] == "--B";
    bool __attribute__((feature_variable("FeatureC"))) FeatureC = argv[2] == "--C";

    int scale = 5;

    if (FeatureA) {
        scale *= 2;
    }

    if (FeatureB) {
        scale *= 0.5;
    }

    if (FeatureC) {
        return 0;
    } else {
        return 1;
    }
}