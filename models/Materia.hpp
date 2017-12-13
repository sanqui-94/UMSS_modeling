#ifndef MATERAIA_HPP
#define MATERAIA_HPP 1

#include <string>
#include "Grupo.hpp"
#include "Horario.hpp"
#include "Materia.hpp"

using namespace std;

class Materia {
	private:
		int codigo;
		string nombre;
		vector<Grupo> grupos;
	public:
		Materia(string n = "", int c = 0);
		string getNombre();
		vector<Grupo> getGrupos();
		int getCodigo();
		bool operator ==(Materia &otro);
		bool operator <(const Materia &otro) const {
			return codigo < otro.codigo;
		}
		vector<Horario> existeChoques(Materia &otra);
};

#endif