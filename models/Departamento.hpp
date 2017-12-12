#ifndef DEPARTAMENTO_HPP
#define DEPARTAMENTO_HPP 1

class Departamento{
    private:
        string nombre;
    public:
        Departamento(string n = "");
        string getNombre();
};

#endif