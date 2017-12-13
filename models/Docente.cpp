#include "Docente.hpp"

Docente::Docente(){
	salario = 42;
	carga_horaria = 10;
	tipo = "Regular";
	cargo = nullptr;  
}

int Docente::getSalario(){
	return salario;
}

int Docente::getCargaHoraria(){
	return carga_horaria;
}

string Docente::getTipo(){
	return tipo;
}

void Docente::asignarCargo(string nombre_cargo){
	cargo = Cargo(nombre_cargo);
}