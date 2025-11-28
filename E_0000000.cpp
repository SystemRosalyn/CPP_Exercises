#include <iostream>

/**
  * This program will allow the user to either run by default, or enter their name as a command-line argument.
  * The program will then print out a greeting either for the user, or for the world.
  */

int main(int argv, char *argv[]) {
  if (argv == 1) { std::cout << "Hello, World!" << std::endl; return 0;}
  std::string first_arg = argv[1];
  std::cout << "Hello, " << first_arg << "!" << std::endl;
  return 0;
}
