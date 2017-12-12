#ifndef GESTION_HPP
#define GESTION_HPP 1

class Gestion {
	private:
		string nombre;
	public:
		Gestion(string n = "");
		string getNombre();	
};

#endif