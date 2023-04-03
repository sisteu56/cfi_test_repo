int main() {

  int x = 0;

  bool Foo __attribute__((feature_variable("Foo"))) = true;

  bool Goo __attribute__((feature_variable("Goo"))) = true;

  return x;
}
