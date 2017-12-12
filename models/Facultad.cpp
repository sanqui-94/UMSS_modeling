#include "Facultad.hpp"

Facultad::Facultad(string n = ""){
    nombre = n;
}

string Facultad::getNombre() {
    return nombre;
}