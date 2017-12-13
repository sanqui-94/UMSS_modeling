#include "Materia.hpp"

Materia::Materia(string n, int c) {
	nombre = n;
	codigo = c;
}

string Materia::getNombre() {
	return nombre;
}

vector<Grupo> Materia::getGrupos() {
	return grupos;
}

int Materia::getCodigo() {
	return codigo;
}

bool Materia::operator ==(Materia &otro) {
	return codigo == otro.codigo;
}