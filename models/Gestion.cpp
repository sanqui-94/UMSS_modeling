#include "Gestion.hpp"

Gestion::Gestion(string n = "") {
	this->nombre = n;
}
string Gestion::getNombre() {
	return this->nombre;
}