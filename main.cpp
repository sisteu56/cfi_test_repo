int main() {

  bool Foo __attribute__((feature_variable("Foo"))) = true;

  if (Foo) {
    return 42;
  } else {
    return 1;
  }
}
