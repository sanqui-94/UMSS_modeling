#ifndef DOCENTE_HPP
#define DOCENTE_HPP 1

#include <cstddef>
#include <iostream>
#include "Cargo.hpp"
#include "Persona.hpp"
#include <string>

using std::string;


class Docente: public Persona {
	private:
		string tipo;
		int salario;
		int carga_horaria;
		Cargo cargo;

	public:
		Docente(string n, string a, char s);
		int getSalario();
		int getCargaHoraria();
		string getTipo();
		void asignarCargo(string nombre_cargo);
};
#endif