#ifndef FACULDAD_HPP
#define FACULDAD_HPP 1

using namespace std;

class Facultad{
    private:
        string nombre;
    public:
        Facultad(string n = "");
        string getNombre();
};

#endif