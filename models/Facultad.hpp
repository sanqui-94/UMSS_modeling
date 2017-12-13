#ifndef FACULDAD_HPP
#define FACULDAD_HPP 1

class Facultad{
    private:
        string nombre;
        vector<Departamento> departamentos;
    public:
        Facultad(string n = "");
        string getNombre();
};

#endif