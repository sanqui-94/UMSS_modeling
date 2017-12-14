#include "Docente.hpp"

Docente::Docente(string n, string a, char s): Persona(n,a,s){
	salario = 42;
	carga_horaria = 10;
	tipo = "Regular";
	string vacio = "";
	cargo; 
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