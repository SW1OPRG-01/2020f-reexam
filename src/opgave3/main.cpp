#include <iostream>
#include "Medarbejder.h"

int main(int argc, char** argv) {
  
  std::cout << Medarbejder().getNavn() << std::endl;
  std::cout << Medarbejder("John Doe").getNavn() << std::endl;

  return 0;
}