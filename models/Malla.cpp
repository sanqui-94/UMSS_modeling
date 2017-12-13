#include <set>
#include "Malla.hpp"

vector<Materia> toposort() {
	int vs = malla.size();
	set<Materia> visitado;
	vector<Materia> res;
	for (map<Materia, pair<string, vector<Materia>>>::iterator it = malla.begin(); it != malla.end(); ++it)	{
		if (set.find(it->first) == visitado.end()) {
			visit(&it->first, &visitado, &res);
		}
	}
	return res;
}

void visit(Materia *u, set<Materia> *visitados, vector<Materia> *res) {
	visitados.insert(u);
	vector<Materia> = malla[u]->second;
	for (Materia &v : malla[u]->second)	{  
		if (set.find(v) == visitado.end()) {
			visit(v, visitados, res);
		}
	}
	res.push_back(u);
}