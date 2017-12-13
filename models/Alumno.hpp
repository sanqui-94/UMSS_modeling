#ifndef ALUMNO_HPP
#define ALUMNO_HPP
#include "Persona.hpp"

class Alumno : public Persona {
  private:
    int codigoSis;
  public:
    Alumno(string n, string a, char s, int c = 0);
    int getCodigoSis();
};

#endif
