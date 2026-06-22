#include "lib/hello-time.h"

#include <ctime>
#include <iostream>

std::string get_localtime_string() {
  std::time_t now = std::time(nullptr);
  return std::asctime(std::localtime(&now));
}

void print_localtime() {
  std::cout << get_localtime_string();
}
