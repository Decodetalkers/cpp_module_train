module;

#include <iostream>

export module mod;
namespace MyNamespace {
void func2() { std::cout << "test" << std::endl; }
export void func() {
  func2();
  std::cout << "hello, world!\n";
}

} // namespace MyNamespace
