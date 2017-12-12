#ifndef NIVEL_HPP
#define NIVEL_HPP 1

#include "Materia.hpp"

#include<map>

using namespace std;

class Nivel {
	private:
		string nivel;
		map< Materia, vector<Materia> > mapaMaterias;
	public:
		Nivel(string n = "");
		map< Materia, vector<Materia> > getMapaMaterias();
};

#endif