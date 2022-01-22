// main.cpp
#include "videos/video.h"
#include <exception>
#include <iostream>
#include <libprint.h>
import mod;
import hellos;
int main() {
  MyNamespace::func();
  HelloWorld::temp();
  try {
    auto gen =
        HelloWorld::fibonacci_sequence(10); // max 94 before uint64_t overflows

    for (int j = 0; gen; j++)
      std::cout << "fib(" << j << ")=" << gen() << '\n';

  } catch (const std::exception &ex) {
    std::cerr << "Exception: " << ex.what() << '\n';
  } catch (...) {
    std::cerr << "Unknown exception.\n";
  }
  LibPrint::Println();
  VIDEO::VideoType();
}
