#pragma once
#include "pch.h"

//Registro IA.
//Aquellos en minuscula son los atributos de la clase.
//En mayuscula, los parametros del contructor.
//Por default, validacion sera false.

class RegistroIA {
public:
	RegistroIA(int ID, string Fecha, string Curso,
		string Categoria, string HerramientaAI,
		string Consulta, string Resultado, string Cambios) :
		id(ID), fecha(Fecha), curso(Curso),
		categoria(Categoria), herramientaAI(HerramientaAI),
		consulta(Consulta), resultado(Resultado), cambios(Cambios),
		validacion(false) { };

	~RegistroIA() { };

	int getID() { return id; }

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
