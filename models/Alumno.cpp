#include "Alumno.hpp"

Alumno::Alumno( string n, string a, char s, int codsis) : Persona(n, a, s) {
  codigoSis = codsis;
}

int Alumno::getCodigoSis() {
  return codigoSis;
}
