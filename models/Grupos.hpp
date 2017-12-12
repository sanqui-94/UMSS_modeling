#include "Grupo.hpp"
#include "Gestion.hpp"

class Grupos {
	private:
		vector<Grupo> grupos;
		Gestion gestion;
	public:
		Grupos(Gestion gestion);
		vector<Grupo> getGrupos();
};