#ifndef NIVEL_HPP
#define NIVEL_HPP 1

#include "Materia.hpp"

struct Comparator {
	bool operator() (const &Materia materia1, const &Materia materia2) const {
		return materia1.getCodigo() < materia2.getCodigo();
	}
};

class Nivel {
	private:
		string nivel;
		map< Materia, vector<Materia>, Comparator> mapaMaterias;
	public:
		Nivel(n = "");
		map< Materia, vector<Materia> > getMapaMaterias();
};

#endif