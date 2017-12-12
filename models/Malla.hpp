#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Nivel.hpp"

class Malla {
	private:
		std::vector<Nivel> niveles;
	public:
		std::vector<Nivel> getNiveles();
};

#endif