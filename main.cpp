int main() {

  int x = 0;

  bool Foo __attribute__((feature_variable("Foo"))) = true;

  bool Goo __attribute__((feature_variable("Goo"))) = true;

  if (Goo) {
    x = 1;
  }

  if (Foo) {
    return 42 + x;
  } else {
    return 1 - x;
  }
}
