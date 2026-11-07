#pragma once
#include "pch.h"

//

class RegistroAI {
public:
	RegistroAI(int ID, string Fecha, string Curso,
		string Categoria, string HerramientaAI,
		string Consulta, string Resultado, string Cambios) :
		id(ID), fecha(Fecha), curso(Curso),
		categoria(Categoria), herramientaAI(HerramientaAI),
		consulta(Consulta), resultado(Resultado), cambios(Cambios),
		validacion(false) { };

	~RegistroAI() { };

private:
	int id;
	string fecha;
	string curso;
	string categoria;
	string herramientaAI;
	string consulta;
	string resultado;
	string cambios;
	bool validacion;
};
