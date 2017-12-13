#ifndef GRRUPO_HPP
#define GRRUPO_HPP 1

#include <string>
#include <vector>
#include "Horario.hpp"

using namespace std;

class Grupo {
	private:
		string nombre;
		vector<Horario> horarios;
	public:
		Grupo(string n = "");
		void agregarHorario(Horario horario);
		vector<Horario> choqueDeHorarios(Grupo &otro);
		string getNombre();
};

#endif