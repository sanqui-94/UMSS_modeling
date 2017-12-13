#include "Alumno.hpp"

Alumno::Alumno( string n, string a, char s, int codsis) : Persona(n, a, s) {
  codigoSis = codsis;
}

int Alumno::getCodigoSis() {
  return codigoSis;
}

void Alumno::agregarGrupo(Grupo grupo) {
  gruposAuxiliatura.push_back(grupo);
}

float Alumno::salario() {
  float salario = 0.0;
  if (gruposAuxiliatura.size() > 0) {
    salario = gruposAuxiliatura.size() * 40.0;
  }
  return salario;
}
