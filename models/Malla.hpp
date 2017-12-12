#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Nivel.hpp"

class Malla {
	private:
		vector<Nivel> niveles;
	public:
		vector<Nivel> getNiveles();
		vector<Materia> toposort();
};

#endif