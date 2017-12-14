#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
#include "models/Malla.hpp"
#include "models/Materia.hpp"
#include "models/Horario.hpp"
#include "models/Grupo.hpp"

int main() {
	Grupo grupo1("grupo1");

	Horario h1("lunes", 6, 8);
	Horario h2("martes", 4, 6);
	grupo1.agregarHorario(h1);
	grupo1.agregarHorario(h2);

	Grupo grupo2("grupo2");

	Horario h3("lunes", 7, 9);
	Horario h4("martes", 6, 8);
	grupo2.agregarHorario(h3);
	grupo2.agregarHorario(h4);

	Grupo grupo3("grupo3");
	
	Horario h5("lunes", 5, 7);
	Horario h6("martes", 8, 10);
	grupo3.agregarHorario(h5);
	grupo3.agregarHorario(h6);

	Grupo grupo4("grupo4");
	
	Horario h7("lunes", 1, 3);
	Horario h8("martes", 6, 8);
	grupo4.agregarHorario(h7);
	grupo4.agregarHorario(h8);

	Grupo grupo5("grupo5");

	Horario h9("lunes", 1, 3);
	Horario h10("martes", 6, 8);
	grupo5.agregarHorario(h9);
	grupo5.agregarHorario(h10);	

	cout<<"PRUEBAS DE CHOQUES ENTRE HORARIOS:\n";
	cout<<"Se espera 0, muestra: "<<h1.tieneChoque(h2)<<"\n";
	cout<<"Se espera 0, muestra: "<<h1.tieneChoque(h7)<<"\n";
	cout<<"Se espera 1, muestra: "<<h1.tieneChoque(h1)<<"\n";
	cout<<"Se espera 1, muestra: "<<h1.tieneChoque(h3)<<"\n";
	cout<<"Se espera 1, muestra: "<<h1.tieneChoque(h5)<<"\n";

	cout<<"PRUEBAS DE CHOQUES ENTRE GRUPOS:\n";
	cout<<"Se espera 1, muestra: "<<(grupo1.choqueDeHorarios(grupo2)).size()<<"\n";
	cout<<"Se espera 1, muestra: "<<(grupo1.choqueDeHorarios(grupo3)).size()<<"\n";
	cout<<"Se espera 0, muestra: "<<(grupo1.choqueDeHorarios(grupo4)).size()<<"\n";
	cout<<"Se espera 2, muestra: "<<(grupo4.choqueDeHorarios(grupo5)).size()<<"\n";

	Materia m1("intro a la progra", 2010010);
	Materia m3("elementos2", 2011111);
	Materia m2("calculo I", 1001011);

	m1.agregarGrupo(grupo1);
	m3.agregarGrupo(grupo3);
	m2.agregarGrupo(grupo4);
	cout<<"PRUEBAS DE CHOQUES ENTRE MATERIAS:\n";
	cout<<"Se espera 1, muestra: "<<(m3.existeChoques(m1)).size()<<"\n";
	cout<<"Se espera 0, muestra: "<<(m1.existeChoques(m2)).size()<<"\n";
	cout<<"Se espera 2, muestra: "<<(m1.existeChoques(m1)).size()<<"\n";

	map<Materia, pair <string, vector<Materia> > > constructor;
	vector<Materia> vacio;
	constructor[m1] = make_pair("1", vacio);
	constructor[m3] = make_pair("1", vacio);
	constructor[m2] = make_pair("2", vacio);

	Malla malla(constructor);
	string res = (malla.tieneChoques("1")) ? "hay choque" : "no hay choque";
	cout<<res<<"\n";

    return 0;
}