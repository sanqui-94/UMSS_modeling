#ifndef MATERAIA_HPP
#define MATERAIA_HPP 1

#include <string>
#include "Grupos.hpp"

using namespace std;

class Materia {
	private:
		int codigo;
		string nombre;
		Grupos grupos;
	public:
		Materia(string n = "");
		string getNombre();
		Grupos getGrupos();
		int getCodigo();
		bool operator<( const Materia &otro) const {
			return codigo < otro.codigo;
		}
};

#endif