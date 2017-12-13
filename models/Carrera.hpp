#ifndef CARRERA_HPP
#define CARRERA_HPP 1

#include "Malla.hpp"
#include "Materia.hpp"

class Carrera{
    private:
    	Malla malla;
        string nombre;
        vector<Materia> materias;
    public:
        Carrera(string n = "");
        string getNombre();
        Malla getMalla();
        vector<Materia> getMaterias();
};

#endif