#include "Gestion.hpp"

Gestion::Gestion(string nombre) {
	this->nombre = nombre;
}
string Gestion::getNombre() {
	return this->nombre;
}