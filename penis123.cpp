#include <cstdio>
#include <fstream>
#include <string>

[[noreturn]]
void cum() {
  cum();
}

int main(int ac, const char** av) {
  if (ac < 2) {
    std::printf("fak u");
  }

  std::ifstream src(av[1]);
  std::string buffer;
  src >> buffer;

  if (buffer == "penis")
    std::printf("Hello, world");
  else if (buffer == "123")
    cum();

  return 0;
}

