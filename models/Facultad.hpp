#ifndef FACULDAD_HPP
#DEFINE FACULDAD_HPP 1

using namespace std;

class Facultad{
    private:
        string nombre;
    public:
        Facultad(string n = "");
        string getNombre();
};

#endif