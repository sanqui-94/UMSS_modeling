#include <set>
#include "Malla.hpp"

Malla::Malla(map<Materia, pair<string, vector<Materia> > > m){
	malla = m;
}

vector<Materia> Malla::toposort() {
	int vs = malla.size();
	set<Materia> visitado;
	vector<Materia> res;
	for (map<Materia, pair<string, vector<Materia> > >::iterator it = malla.begin(); it != malla.end(); ++it)	{
		if (visitado.find(it->first) == visitado.end()) {
			visit(it->first, visitado, res);
		}
	}
	return res;
}

void Malla::visit(const Materia &u, set<Materia> &visitados, vector<Materia> &res) {
	visitados.insert(u);
	for (Materia &v : malla[u].second)	{  
		if (visitados.find(v) == visitados.end()) {
			visit(v, visitados, res);
		}
	}
	res.push_back(u);
}
/*
bool Malla::tieneChoques(string nivel) {
	bool res = true;
	for (map<Materia, pair <string, vector<Materia> > >::iterator it = malla.begin(); it != malla.end(); ++it) {
		if(strncmp(nivel, ((it->second).first))) {
			vector<Materia> materias = (it->second)->second;
			for (vector<Materia>::iterator it2 == materias.begin(); it2 != materias.end(); ++it2) {
				for (vector<Materia>::iterator it3 == materias.begin(); it3 != materias.end(); ++it3) {
					if(*it2 != *it3) {
						res = res && ((it2->existeChoques(*it3)).size() > 0);
					}
				}
			}
		}
	}
	return res;
}*/