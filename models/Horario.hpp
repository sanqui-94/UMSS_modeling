#ifndef HORARIO_HPP
#define HORARIO_HPP 1

#include <string>

using std::string;

class Horario{
	private:
		string diaSemana;
		int horaInicio;
		int horaFin;
	public:
		Horario(string ds = "", int hi = 0, int hf = 0);
		bool tieneChoque(Horario &otro);
};

#endif