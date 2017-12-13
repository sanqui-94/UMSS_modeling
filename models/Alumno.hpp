#ifndef ALUMNO_HPP
#define ALUMNO_HPP
#include "Persona.hpp"
#include "Grupo.hpp"

using std::vector;

class Alumno : public Persona {
  private:
    int codigoSis;
    vector<Grupo> gruposAuxiliatura;
  public:
    Alumno(string n, string a, char s, int c = 0);
    int getCodigoSis();
    void agregarGrupo(Grupo grupo);
    float salario();
};

#endif
