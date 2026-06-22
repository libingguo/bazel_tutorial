#include "lib/hello-time.h"
#include "main/hello-greet.h"

#include <iostream>
#include <string>

namespace {

std::string resolve_who(int argc, char** argv) {
  if (argc > 1) {
    return argv[1];
  }
  return "world";
}

}  // namespace

int main(int argc, char** argv) {
  const std::string who = resolve_who(argc, argv);
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  return 0;
}
