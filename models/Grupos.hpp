#ifndef GRRUPOS_HPP
#define GRRUPOS_HPP 1

#include "Grupo.hpp"
#include "Gestion.hpp"

#include<vector>

class Grupos {
	private:
		vector<Grupo> grupos;
		Gestion gestion;
	public:
		vector<Grupo> getGrupos();
};

#endif