#include <map>
#include "Nivel.hpp"

Nivel::Nivel(char n) {
	nivel = n;
}

std::map<Materia, std::vector<Materia>> getMapaMaterias() {
	return mapaMaterias;
}