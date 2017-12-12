#include "Grupo.hpp"

Grupo::Grupo(string nombre) {
	this->nombre = nombre;
}

string Grupo::getNombre() {
	return this->nombre;
}