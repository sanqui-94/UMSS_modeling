#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include "../models/Malla.hpp"
#include "../models/Grupo.hpp"
using namespace std;

int main(){
    Materia cal1("Calculo 1", 1011);
    Materia cal2("Calculo 2", 1012);
    Materia cal3("Calculo 3", 1013);
    Materia intro("Introducción a la Programaión", 2010010);
    Materia elementos("Elementos de Programación y Estructura de Datos", 2010020);
    map<Materia, pair <string, vector<Materia> > > malla;
    malla[elementos] = make_pair("B", vector<Materia> {intro});
    malla[cal3] = make_pair("B", vector<Materia> {cal2});
    malla[cal1] = make_pair("A", vector<Materia> {});
    malla[intro] = make_pair("A", vector<Materia> {});
    malla[cal2] = make_pair("B", vector<Materia> {cal1});  
    Malla oMalla(malla);
    vector<Materia> res = oMalla.toposort();
    for (Materia &m : res)	{
        cout << m.getNombre() << ", ";
	}
    return 0;
}