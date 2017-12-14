#ifndef HISTORIACARGO_HPP
#define HISTORIACARGO_HPP 1

#include <map>
#include <vector>
#include <utility>
#include "Persona.hpp"
#include "Cargo.hpp"

class HistoriaCargo {
 private:
 	map <Persona, vector <pair <Cargo, string> > > registro;
 public:
 	HistoriaCargo();
 	//metodo para devolver la historia de cargos por gestion
 }; 
#endif