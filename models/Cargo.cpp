#include "Cargo.hpp"

Cargo::Cargo(string n) {
	nombre_cargo = n;
}

string Cargo::getCargo() {
	return nombre_cargo;
}