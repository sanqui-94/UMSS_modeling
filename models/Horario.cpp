#include "Horario.hpp"

Horario::Horario(string ds, int hi, int hf) {
	diaSemana = ds;
	horaInicio = hi;
	horaFin = hf;
}

bool Horario::tieneChoque(Horario &otro) {
	bool existeChoque = false;
	if(diaSemana.compare(otro.diaSemana) == 0) {
		existeChoque = 	(otro.horaFin > horaInicio && otro.horaFin < horaFin) ||
						(otro.horaInicio > horaInicio && otro.horaInicio < horaFin) ||
						(horaInicio == otro.horaInicio && horaFin == otro.horaFin);
			
	}
	return existeChoque;
}