#include "Persona.hpp"

Persona::Persona(string n, string a, char s) {
  nombre = n;
  apellido = a;
  sexo = s;
}

string Persona::getNombre() {
  return nombre;
}

string Persona::getApellido() {
  return apellido;
}
