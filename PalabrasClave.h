#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"
#include "Analizador.h"
#include <algorithm>
#include <cctype>
class PalabrasClave : public analizador {
private:
	GestorBitacora* gestor;
	string palabra;
	int contador;

public:
	PalabrasClave(GestorBitacora* Gestor, string Palabra) {
		gestor = Gestor;
		palabra = Palabra;
		contador = 0;
	}

    void analizar() override
    {
        contador = 0;

        if (palabra.empty())
            return;

        string buscada = palabra;

        transform(buscada.begin(), buscada.end(),
            buscada.begin(), [](unsigned char c) 
            {
                return tolower(c);
            });

        for (int i = 0; i < gestor->ObtenerTotal(); i++)
        {
            RegistroAI* registro = gestor->ObtenerRegistro(i);

            string texto = registro->getConsulta();

            transform(texto.begin(), texto.end(),
                texto.begin(), [](unsigned char c) {
                    return tolower(c);
                });

            size_t posicion = 0;

            while ((posicion = texto.find(buscada, posicion))
                != string::npos)
            {
                contador++;
                posicion += buscada.length();
            }
        }
    }

		
	

	int getPalabras()
	{
		return contador;
	}

};