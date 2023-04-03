int main() {

  int x = 0;

  bool FeatureA __attribute__((feature_variable("FeatureA"))) = true;

  bool FeatureB __attribute__((feature_variable("FeatureB"))) = true;

  if (FeatureA) {
    x += 22;
  }

  if (!FeatureB) {
    x *= 2;
  }

  return x;
}
