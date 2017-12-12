#ifndef GESTION_HPP
#define GESTION_HPP 1

#include<string>

using namespace std;


class Gestion {
	private:
		string nombre;
	public:
		Gestion(string n = "");
		string getNombre();	
};

#endif