#include "HistoriaCargo.hpp"

HistoriaCargo::HistoriaCargo() {
}

void HistoriaCargo::agregarPersona(Persona persona) {
	/*
	Cargo cargoVacio;
	pair <Cargo, string> p = make_pair(cargoVacio, ""); */4
	vector< pair <Cargo, string> > v; 
	registro[persona] = v;
}

void HistoriaCargo::actualizarPersona(Persona persona, Cargo cargo, string gestion) {
	vector < pair <Cargo, string> > vectorAuxiliar = registro[persona]
	pair <Cargo, string> par = make_pair(cargo, gestion);
	vectorAuxiliar.push_back(par);
	registro[persona] = vectorAuxiliar;
}

vector <Persona, Cargo> HistoriaCargo::plantillaPorGestion(string gestion) {
	vector <Persona, Cargo> respuesta;
	return respuesta
}