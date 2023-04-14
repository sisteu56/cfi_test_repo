int calc(int input) {

    bool FeatureExp __attribute__((feature_variable("FeatureExp"))) = true;

    int prod = input;

    prod = (prod - 500) * 2;

    return prod;
}