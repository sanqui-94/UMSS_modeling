#include <map>
#include "Nivel.hpp"

Nivel::Nivel(char n) {
	nivel = n;
}

bool Nivel::esNivel(string n) {
	return strncmp(nivel, n) == 0;
}

std::map<Materia, std::vector<Materia> > getMapaMaterias() {
	return mapaMaterias;
}