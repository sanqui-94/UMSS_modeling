#include "Grupo.hpp"

Grupo::Grupo(string n) {
	nombre = n;
}

string Grupo::getNombre() {
	return nombre;
}

void Grupo::agregarHorario(Horario horario) {
	horarios.push_back(horario);
}

vector<Horario> Grupo::choqueDeHorarios(Grupo &otro) {
	vector<Horario> choques;
	for(vector<Horario>::iterator it = horarios.begin(); it != horarios.end(); ++it) {
		for(vector<Horario>::iterator it2 = otro.horarios.begin(); it2 != otro.horarios.end(); ++it2) {
			if(it->tieneChoque(*it2)) {
				choques.push_back(*it);
			}
		}	
	}
	return choques;
}