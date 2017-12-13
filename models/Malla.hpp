#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Materia.hpp"

class Malla {
	private:
		map<Materia, pair <string, vector<Materia> > > niveles;
	public:
		vector<Materia> toposort();
};

#endif