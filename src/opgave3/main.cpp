#include <iostream>
#include "Medarbejder.h"

int main(int argc, char** argv) {
  
  std::cout << Medarbejder().getNavn() << std::endl;
  std::cout << Medarbejder("John Doe").getNavn() << std::endl;

  Medarbejder m = Medarbejder("Jane Doe");
  m.tilfoejArbejdsDage(22);
  m.print();
  m.afholdFerie(2);
  m.print();

  Medarbejder ms[] = { Medarbejder("M1"), Medarbejder("M1"), Medarbejder("M1") };

  for(int i = 0; i < sizeof(ms)/sizeof(Medarbejder); i++) {
    ms[i].tilfoejArbejdsDage(22);
    ms[i].print(); 
  }

  return 0;
}