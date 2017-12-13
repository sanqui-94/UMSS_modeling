#ifndef DEPARTAMENTO_HPP
#define DEPARTAMENTO_HPP 1

class Departamento{
    private:
        string nombre;
        vector<Carrera> carreras;
    public:
        Departamento(string n = "");
        string getNombre();
};

#endif