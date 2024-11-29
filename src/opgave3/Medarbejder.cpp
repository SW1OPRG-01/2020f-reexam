#include "Medarbejder.h"
#include <iostream>

Medarbejder::Medarbejder(std::string navn) : navn_(navn) {
}

void Medarbejder::setNavn(std::string navn) {
  navn_ = navn == "" ? "Ukendt" : navn;
}

std::string Medarbejder::getNavn() const {
  return navn_;
}

void Medarbejder::tilfoejArbejdsDage(double dage) {
  if(dage > 0) {
    arbejdsDage_ += dage;
    ferieTilgode_ += dage * 0.1;
  }
}

double Medarbejder::getArbejdsDage() const { 
  return arbejdsDage_;
}

bool Medarbejder::afholdFerie(double ferie) {
  if(ferie > 0 && ferie <= ferieTilgode_) {
    ferieTilgode_ -= ferie;
    return true;
  }
  return false;
}

double Medarbejder::getFerieTilgode() const {
  return ferieTilgode_;
}

void Medarbejder::print() const {
  std::cout << "Navn:\t" << navn_  << std::endl;
  std::cout << "Arbejdsdage:\t" << arbejdsDage_ << std::endl;
  std::cout << "Ferie tilgode:\t" << ferieTilgode_ << std::endl;
}