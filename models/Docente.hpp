#ifndef DOCENTE_HPP
#define DOCENTE_HPP 1

#include "TipoDocente.hpp"

class Docente {
		TipoDocente tipo;
		int salario;
		int carga_horaria;

	public:
		Docente();
		int getSalario();
		int getCargaHoraria();
};

#endif