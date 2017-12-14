#include "Horario.hpp"

Horario::Horario(string ds, int hi, int hf) {
	diaSemana = ds;
	horaInicio = hi;
	horaFin = hf;
}

bool Horario::tieneChoque(Horario &otro) {
	bool existeChoque = false;
	if(diaSemana.compare(otro.diaSemana)) {
		existeChoque = 	(horaInicio > otro.horaFin && otro.horaFin < horaFin) ||
						(horaInicio > otro.horaInicio && otro.horaInicio < horaFin) ||
						(horaInicio == otro.horaFin && horaFin == otro.horaFin);
			
	}
	return existeChoque;
}