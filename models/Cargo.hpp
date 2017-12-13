#ifndef CARGO_HPP
#define CARGO_HPP 1

class Cargo {
	private:	
		string nombre_cargo;

	public:
		Cargo(string n = "");
		string getCargo();
};
#endif