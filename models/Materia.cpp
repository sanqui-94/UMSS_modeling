#include "Materia.hpp"

Materia::Materia(string n) {
	nombre = n;
}

string Materia::getNombre() {
	return nombre;
}

Grupos Materia::getGrupos() {
	return grupos;
}

int Materia::getCodigo() {
	return codigo;
}
/*
bool Materia::operator <(Materia *otro) {
	return codigo < otro->getCodigo();
}*/