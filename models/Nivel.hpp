#ifndef NIVEL_HPP
#define NIVEL_HPP 1

#include "Materia.cpp"

bool operator < (const Materia &m1, const Materia &materia2) {
	return m1.getCodigo() < materia2.getCodigo();
}

class Nivel {
	private:
		string nivel;
		map< Materia, vector<Materia> > mapaMaterias;
	public:
		Nivel(string n = "");
		map< Materia, vector<Materia> > getMapaMaterias();
};

#endif