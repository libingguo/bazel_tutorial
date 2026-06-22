#include "lib/hello-time.h"

#include <iostream>
#include <sstream>
#include <string>

int main() {
  const std::string localtime_text = get_localtime_string();
  if (localtime_text.empty()) {
    std::cerr << "Expected non-empty localtime string" << std::endl;
    return 1;
  }

  if (localtime_text.find('\n') == std::string::npos) {
    std::cerr << "Expected newline in localtime string" << std::endl;
    return 1;
  }

  std::ostringstream captured;
  std::streambuf* old = std::cout.rdbuf(captured.rdbuf());

  print_localtime();

  std::cout.rdbuf(old);

  const std::string output = captured.str();
  if (output.empty()) {
    std::cerr << "Expected non-empty localtime output" << std::endl;
    return 1;
  }

  if (output.find('\n') == std::string::npos) {
    std::cerr << "Expected newline in localtime output" << std::endl;
    return 1;
  }

  return 0;
}
