int main() {

  int x = 0;

  bool FeatureA __attribute__((feature_variable("FeatureA"))) = true;

  bool FeatureB __attribute__((feature_variable("FeatureB"))) = true;

  int FeatureS __attribute__((feature_variable("FeaturS"))) = 2;

  if (FeatureA) {
    x += 11;
    x *= 2;
  }

  if (!FeatureB) {
    x *= 2;
  }

  if (!FeatureA && FeatureB) {
    x = 42;
  }

  return x * FeatureS;
}
