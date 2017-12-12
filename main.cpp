#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "models/Departamento.cpp"
#include "models/Facultad.cpp"
#include "models/Carrera.cpp"
#include "models/Grupos.cpp"

int main() {
    Facultad f1("Ciencia y Tecnología");    
    cout << f1.getNombre() << endl;
    return 0;
}