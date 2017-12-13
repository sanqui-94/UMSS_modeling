#ifndef DOCENTE_HPP
#define DOCENTE_HPP 1

#include "Cargo.hpp"

class Docente {
	private:
		string tipo;
		int salario;
		int carga_horaria;
		Cargo cargo;

	public:
		Docente();
		int getSalario();
		int getCargaHoraria();
		string getTipo();
		void asignarCargo(string nombre_cargo);
};
#endif