#ifndef ADMINISTRATIVO_HPP
#define ADMINISTRATIVO_HPP 1

#include "Persona.hpp"
#include "Cargo.hpp"
#include <string>

class Administrativo: public Persona {
	private:
		Cargo cargo;

	public:
		Administrativo(string n, string a, char s);	
	};

#endif