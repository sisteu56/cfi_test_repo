int main() {

    bool FeatureMin __attribute__((feature_variable("FeatureMin"))) = true;

    int scale = 4;

    if (FeatureMin) {
        scale *= 0.5;
        // doN't do something
    }

    return 100 * scale;
}