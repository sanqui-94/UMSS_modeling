#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Materia.hpp"
#include <set>
#include <map>

class Malla {
	private:
		map<Materia, pair<string, vector<Materia> > > malla;
		void visit(const Materia &u, set<Materia> &visitados, vector<Materia> &res);
	public:
		Malla(map<Materia, pair <string, vector<Materia> > > m );
		vector<Materia> toposort();
		bool tieneChoques(string nivel);
};

#endif