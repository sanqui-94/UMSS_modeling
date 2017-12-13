#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Materia.hpp"
#include <set>
#include <map>

class Malla {
	private:
		map<Materia, pair <string, vector<Materia> > > malla;
		void visit(Materia *u, set<Materia> *visitados, vector<Materia> *res);
	public:
		vector<Materia> toposort();
		bool tieneChoques(string nivel);
};

#endif