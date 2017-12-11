using namespace std;

class Facultad{
    private:
        string nombre;
    public:
        Facultad(string n);
        string getNombre();
};

Facultad::Facultad(string n){
    nombre = n;
}

string Facultad::getNombre() {
    return nombre;
}