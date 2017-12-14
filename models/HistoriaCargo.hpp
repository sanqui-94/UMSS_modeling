#ifndef HISTORIACARGO_HPP
#define HISTORIACARGO_HPP 1

#include <map>
#include <vector>
#include <utility>
#include <string>
#include "Persona.hpp"
#include "Cargo.hpp"

using std::map;
using std::vector;
using std::pair;

class HistoriaCargo {
 private:
 	map <Persona, vector <pair <Cargo, string> > > registro;
 public:
 	HistoriaCargo();
 	void agregarPersona(Persona persona);
 	void actualizarPersona(Persona persona, Cargo cargo, string gestion);
 	vector <Persona, Cargo> plantillaPorGestion(string gestion);
 }; 
#endif