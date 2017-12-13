#ifndef MATERAIA_HPP
#define MATERAIA_HPP 1

#include <string>
#include "Grupo.hpp"

using namespace std;

class Materia {
	private:
		int codigo;
		string nombre;
		vector<Grupo> grupos;
	public:
		Materia(string n = "");
		string getNombre();
		vector<Grupo> getGrupos();
		int getCodigo();
		bool operator <(const Materia &otro) const {
			return codigo < otro.codigo;
		}
};

#endif