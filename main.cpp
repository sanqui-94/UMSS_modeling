#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "models/Carrera.cpp"
#include "models/Departamento.cpp"
#include "models/Facultad.cpp"
#include "models/Materia.cpp"

int main() {
    Facultad f1("Ciencia y Tecnología");    
    cout << f1.getNombre() << endl;
    Materia m1("materia1", 123);
    Materia m2("materia2", 124);
    if(m1 == m1) {
    	cout<<"funciona el ==\n";
    }
    if (!(m1 == m2)) {
    	cout<<"funciona el ==\n";
    }
    return 0;
}