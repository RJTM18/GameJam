#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"
#include "Analizador.h"
class PalabrasClave: public analizador
{
private:
	GestorBitacora* gestor;
	string palabra;
	int contador;

public:
	PalabrasClave(GestorBitacora* Gestor, string Palabra)
	{
		gestor = Gestor;
		palabra = Palabra;
		contador = 0;
	}

	

	void analizar() override
	{
		if (palabra.empty())
		{
			return;
		}

		contador = 0;

		for (int i = 0; i < gestor->ObtenerTotal(); i++)
		{
			RegistroAI* registro = gestor->ObtenerRegistro(i);
			string consulta = registro->getConsulta();

			if (consulta.find(palabra) < consulta.length())
			{
				contador++;
			}
		}

		
	}

	int getPalabras()
	{
		return contador;
	}

};