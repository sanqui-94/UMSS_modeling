#include <iostream>
#include <string>
using namespace std;
#include "models/Facultad.cpp"
#include "models/Departamento.cpp"
#include "models/Carrera.cpp"
#include "models/Grupos.cpp"

int main() {
    Facultad f1("Ciencia y Tecnología");    
    cout << f1.getNombre() << endl;
    return 0;
}