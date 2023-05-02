int main() {

    bool FeatureMin __attribute__((feature_variable("FeatureMin"))) = true;

    int scale = 2;

    if (FeatureMin) {
        scale *= 0.5;
    }

    return 100 * scale;
}