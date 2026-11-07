#pragma once
#include "Analizador.h"
#include "GestorBitacora.h"
#include <string>
using namespace std;
class Estadisticas: public analizador
{
private:
	GestorBitacora* gestor;
	int totalConsultas;
public:
	Estadisticas(GestorBitacora* Gestor) 
	{
		gestor = Gestor;
		totalConsultas = 0;
	}

	void analizar() override
	{
		totalConsultas = gestor->ObtenerTotal();
	}

	int contarCursos(string curso)
	{
		int contador = 0;

		for (int i = 0; i < gestor->ObtenerTotal(); i++)
		{
			RegistroAI* registro = gestor->ObtenerRegistro(i);
			
			if (registro->getCurso() == curso)
			{
				contador++;
			}

		}
		
		return contador;
	}

	double CalcularPorcentaje(string curso)
	{
		int total = gestor->ObtenerTotal();

		if (total == 0)
		{
			return 0;
		}

		int cantidad = contarCursos(curso);

		double porcentaje = (double)cantidad * 100 / total;

		return porcentaje;
	}

	int getTotalConsultas()
	{
		return totalConsultas;
	}
};