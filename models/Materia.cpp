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

vector<Horario> Materia::existeChoques(Materia &otra) {
	vector<Horario> choque;
	for(vector<Grupo>::iterator it = grupos.begin(); it != grupos.end(); ++it) {
		for(vector<Grupo>::iterator it2 = otra.grupos.begin(); it2 != otra.grupos.end(); ++it2) {
			vector<Horario> res = it->choqueDeHorarios(*it2);
			for(vector<Horario>::iterator it3 = res.begin(); it3 != res.end(); ++it3) {
				choque.push_back(*it3);
			}
		}
	}
	return choque;
}