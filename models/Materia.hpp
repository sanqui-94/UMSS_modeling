#ifndef MATERAIA_HPP
#define MATERAIA_HPP 1

#include <string>
#include "Grupo.hpp"
#include "Horario.hpp"

typedef vector<Grupo> Grupos;
typedef vector<Horario> Horarios;

using namespace std;

class Materia {
	private:
		int codigo;
		string nombre;
		Grupos grupos;
	public:
		Materia(string n = "", int c = 0);
		string getNombre();
		void agregarGrupo(Grupo &gr);
		int getCodigo();
		bool operator ==(Materia &otro);
		bool operator <(const Materia &otro) const {
			return codigo < otro.codigo;
		}
		Horarios existeChoques(Materia &otra);
};

#endif