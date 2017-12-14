#ifndef MALLA_HPP
#define MALLA_HPP 1

#include "Materia.hpp"
#include <set>
#include <map>

typedef vector<Materia> materias;
typedef string Nivel;
typedef pair<Nivel, materias> preRequisitos;

class Malla {
	private:
		map<Materia, preRequisitos> malla;
		void visit(const Materia &u, set<Materia> &visitados, materias &res);
	public:
		Malla(map<Materia, preRequisitos> m );
		materias toposort();
		bool tieneChoques(Nivel nivel);
};

#endif