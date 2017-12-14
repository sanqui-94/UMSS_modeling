#include "Materia.hpp"

Materia::Materia(string n, int c) {
	nombre = n;
	codigo = c;
}

string Materia::getNombre() {
	return nombre;
}

void Materia::agregarGrupo(Grupo &gr) {
	grupos.push_back(gr);
}

int Materia::getCodigo() {
	return codigo;
}

bool Materia::operator ==(Materia &otro) {
	return codigo == otro.codigo;
}

Horarios Materia::existeChoques(Materia &otra) {
	Horarios choque;
	for(Grupos::iterator it = grupos.begin(); it != grupos.end(); ++it) {
		for(Grupos::iterator it2 = otra.grupos.begin(); it2 != otra.grupos.end(); ++it2) {
			Horarios res = it->choqueDeHorarios(*it2);
			for(Horarios::iterator it3 = res.begin(); it3 != res.end(); ++it3) {
				choque.push_back(*it3);
			}
		}
	}
	return choque;
}