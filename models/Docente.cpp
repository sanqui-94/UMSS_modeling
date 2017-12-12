#include "Docente.hpp"

Docente::Docente(){
	salario = 42;
	carga_horaria = 10; 
}

int Docente::getSalario(){
	return salario;
}

int Docente::getCargaHoraria(){
	return carga_horaria;
}