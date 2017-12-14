#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "models/Carrera.cpp"
#include "models/Departamento.cpp"
#include "models/Facultad.cpp"
#include "models/Materia.cpp"
#include "models/Horario.cpp"
#include "models/Grupo.cpp"

int main() {


	Horario h1("lunes", 6, 8);
	Horario h2("martes", 4, 6);
	
	Grupo grupo1("grupo1");
	grupo1.agregarHorario(h1);
	grupo1.agregarHorario(h2);

	Horario h3("lunes", 7, 9);
	Horario h4("martes", 6, 8);

	Grupo grupo2("grupo2");
	grupo2.agregarHorario(h3);
	grupo2.agregarHorario(h4);

	Horario h5("lunes", 5, 7);
	Horario h6("martes", 8, 10);

	Grupo grupo3("grupo3");
	grupo3.agregarHorario(h5);
	grupo3.agregarHorario(h6);

	Horario h7("lunes", 1, 3);
	Horario h8("martes", 3, 5);

	Grupo grupo4("grupo4");
	grupo4.agregarHorario(h7);
	grupo4.agregarHorario(h8);

	if(h1.tieneChoque(h2)) {
		cout<<"Tiene\n";
	} else {
		cout<<"No Tiene\n";
	}

	if(h1.tieneChoque(h7)) {
		cout<<"Tiene\n";
	} else {
		cout<<"No Tiene\n";
	}

	if(h1.tieneChoque(h1)) {
		cout<<"Tiene\n";
	} else {
		cout<<"No Tiene\n";
	}

	if(h1.tieneChoque(h3)) {
		cout<<"Tiene\n";
	} else {
		cout<<"No Tiene\n";
	}

	if(h1.tieneChoque(h5)) {
		cout<<"Tiene\n";
	} else {
		cout<<"No Tiene\n";
	}

    /*Facultad f1("Ciencia y Tecnología");    
    cout << f1.getNombre() << endl;
    Materia m1("materia1", 123);
    Materia m2("materia2", 124);
    if(m1 == m1) {
    	cout<<"funciona el ==\n";
    }
    if (!(m1 == m2)) {
    	cout<<"funciona el ==\n";
    }*/
    return 0;
}