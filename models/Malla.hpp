#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Materia.hpp"

class Malla {
	private:
		map<Materia, pair <string, vector<Materia> > > malla;
		void visit(Materia *u, set<Materia> *visitados, vector<Materia> *res);
	public:
		vector<Materia> toposort();
};

#endif