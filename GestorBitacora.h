#pragma once
#include "pch.h"
#include <vector>
#include "RegistroIA.h"

class GestorBitacora {
private:
    vector<RegistroIA*> registros;

public:

    bool Agregar(RegistroIA* nuevo)
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

    RegistroIA* Buscar(int id)
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

    bool Editar(int id, RegistroIA* datos)
    {
        if (datos == nullptr)
        {
            return false;
        }

        RegistroIA* encontrado = Buscar(id);

        if (encontrado == nullptr)
        {
            return false;
        }

        encontrado->setFecha(datos->getFecha());
        encontrado->setCurso(datos->getCurso());
        encontrado->setCategoria(datos->getCategoria());
        encontrado->setHerramientaIA(datos->getHerramientaIA());
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
            if (registros[i]->getId() == id)
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
};
