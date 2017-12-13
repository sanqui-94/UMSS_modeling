#ifndef PERSONA_HPP
#define PERSONA_HPP 1

#include<string>

using std::string;

class Persona {
  private:
    string nombre;
    string apellido;
    char *sexo;
  public:
    Persona(string n = "", string a = "",  char s = ' ');
    string getNombre();
    string getApellido();
};

#endif
