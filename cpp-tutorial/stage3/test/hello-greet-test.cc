#include "main/hello-greet.h"

#include <iostream>

int main() {
  if (get_greet("Bazel") != "Hello Bazel") {
    std::cerr << "Expected 'Hello Bazel'" << std::endl;
    return 1;
  }

  if (get_greet("") != "Hello ") {
    std::cerr << "Expected greeting for empty input" << std::endl;
    return 1;
  }

  if (get_greet("C++") != "Hello C++") {
    std::cerr << "Expected punctuation to be preserved" << std::endl;
    return 1;
  }

  return 0;
}