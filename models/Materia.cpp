#include "Materia.hpp"

Matera::Materia(string n) {
	nombre = n;
}

string Materia::getNombre() {
	return nombre;
}

Grupos Matera::getGrupos() {
	return grupos;
}
