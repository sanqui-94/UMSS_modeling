#include <map>
#include "Carrera.hpp"

Carrera::Carrera(string n){
    nombre = n;
}

string Carrera::getNombre() {
    return nombre;
}

Malla Carrera::getMalla() {
	return malla;
}

vector<Materia> Carrera::getMaterias() {
	return materias;
}
