int main() {

  int x = 0;

  bool FeatureA __attribute__((feature_variable("FeatureA"))) = true;

  bool FeatureB __attribute__((feature_variable("FeatureB"))) = true;

  return x;
}
