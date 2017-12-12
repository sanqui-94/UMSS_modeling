#include "Grupo.hpp"

Grupo::Grupo(string n = "") {
	this->nombre = n;
}

string Grupo::getNombre() {
	return this->nombre;
}