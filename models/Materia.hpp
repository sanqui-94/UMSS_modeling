#ifndef MATERAIA_HPP
#define MATERAIA_HPP 1

#include "Grupos.hpp"

class Materia {
	private:
		int codigo;
		string nombre
		Grupos grupos;
	public:
		Materia(string n = "");
		string getNombre();
		Grupos getGrupos();
		int getCodigo();
};

#endif