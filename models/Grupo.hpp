#ifndef GRRUPO_HPP
#define GRRUPO_HPP 1

#include<string>

using namespace std;

class Grupo {
	private:
		string nombre;
	public:
		Grupo(string n = "");
		string getNombre();
};

#endif