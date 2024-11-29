#ifndef MEDARBEJDER_H
#define MEDARBEJDER_H

#include <string>

class Medarbejder {
  public:
    Medarbejder(std::string name = "Ukendt"); 
    void setNavn(std::string name);
    std::string getNavn() const;
    void tilfoejArbejdsDage(double dage);
    double getArbejdsDage() const;
    bool afholdFerie(double dage);
    double getFerieTilgode() const;
    void print() const;
  private:
    std::string navn_;
    double arbejdsDage_;
    double ferieTilgode_;
};

#endif