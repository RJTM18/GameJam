
#pragma once
#include "pch.h"
#include <vector>
#include "RegistroIA.h"

using namespace std;

class GestorBitacora
{
private:
    vector<RegistroAI*> registros;

public:

    bool Agregar(RegistroAI* nuevo)
    {
        if (nuevo == nullptr)
        {
            return false;
        }

        if (Buscar(nuevo->getID()) != nullptr)
        {
            return false;
        }

        registros.push_back(nuevo);
        return true;
    }

    RegistroAI* Buscar(int id)
    {
        for (int i = 0; i < registros.size(); i++)
        {
            if (registros[i]->getID() == id)
            {
                return registros[i];
            }
        }

        return nullptr;
    }

    bool Editar(int id, RegistroAI* datos)
    {
        if (datos == nullptr)
        {
            return false;
        }

        RegistroAI* encontrado = Buscar(id);

        if (encontrado == nullptr)
        {
            return false;
        }

        encontrado->setFecha(datos->getFecha());
        encontrado->setCurso(datos->getCurso());
        encontrado->setCategoria(datos->getCategoria());
        encontrado->setHerramientaAI(datos->getHerramientaAI());
        encontrado->setConsulta(datos->getConsulta());
        encontrado->setResultado(datos->getResultado());
        encontrado->setCambios(datos->getCambios());
        encontrado->setValidacion(datos->getValidacion());

        return true;
    }

    bool Borrar(int id)
    {
        for (int i = 0; i < registros.size(); i++)
        {
            if (registros[i]->getID() == id)
            {
                registros.erase(registros.begin() + i);
                return true;
            }
        }

        return false;
    }

    int ObtenerTotal()
    {
        return (int)registros.size();
    }

    RegistroAI* ObtenerRegistro(int indice)
    {
        if (indice < 0 || indice >= ObtenerTotal())
        {
            return nullptr;
        }

        return registros[indice];
    }
};
