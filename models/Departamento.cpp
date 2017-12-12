#include "Departamento.hpp"

Departamento::Departamento(string n){
    nombre = n;
}

string Departamento::getNombre() {
    return nombre;
}