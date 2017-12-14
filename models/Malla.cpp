#include <set>
#include <iostream>
#include "Malla.hpp"

Malla::Malla(map<Materia, pair<string, vector<Materia> > > m){
	malla = m;
}

materias Malla::toposort() {
	int vs = malla.size();
	set<Materia> visitado;
	vector<Materia> res;
	for (map<Materia, preRequisitos >::iterator it = malla.begin(); it != malla.end(); ++it)	{
		if (visitado.find(it->first) == visitado.end()) {
			visit(it->first, visitado, res);
		}
	}
	return res;
}

void Malla::visit(const Materia &u, set<Materia> &visitados, materias &res) {
	visitados.insert(u);
	for (Materia &v : malla[u].second)	{  
		if (visitados.find(v) == visitados.end()) {
			visit(v, visitados, res);
		}
	}
	res.push_back(u);
}

bool Malla::tieneChoques(Nivel nivel) {
	bool res = false;
	for (map<Materia, preRequisitos >::iterator it = malla.begin(); it != malla.end(); ++it) {
		if( nivel.compare((it->second).first) == 0) {
			Materia actual = (it->first);
			for (map<Materia, preRequisitos >::iterator it2 = malla.begin(); it2 != malla.end(); ++it2) {
				Materia siguiente = (it2->first);
				if( !( actual == siguiente ) &&  (nivel.compare((it2->second).first) == 0) ) {
					res = res || (actual.existeChoques(siguiente).size() > 0);
				}
			}
		}
	}
	return res;
}