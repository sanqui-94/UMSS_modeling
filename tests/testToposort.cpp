#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include "../models/Malla.cpp"
using namespace std;

int main(){
    Materia cal1("Calculo 1", 1011);
    Materia cal2("Calculo 2", 1012);
    Materia cal3("Calculo 3", 1013);
    Materia intro("Introducción a la Programaión", 2010010);
    Materia elementos("Elementos de Programación y Estructura de Datos", 2010020);
    map<Materia, pair <string, vector<Materia> > > malla;
    //malla[cal1] = pair<"A", nullptr>;
    return 0;
}