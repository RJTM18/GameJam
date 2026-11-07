
#pragma once
#include "pch.h"
#include <string>

using namespace std;

class RegistroAI
{
public:

    RegistroAI(int ID, string Fecha, string Curso,
        string Categoria, string HerramientaAI,
        string Consulta, string Resultado, string Cambios) :
        id(ID), fecha(Fecha), curso(Curso),
        categoria(Categoria), herramientaAI(HerramientaAI),
        consulta(Consulta), resultado(Resultado),
        cambios(Cambios), validacion(false)
    {
    }

    ~RegistroAI() {}

    // GETTERS: obtener información

    int getID() { return id; }

    string getFecha() { return fecha; }

    string getCurso() { return curso; }

    string getCategoria() { return categoria; }

    string getHerramientaAI() { return herramientaAI; }

    string getConsulta() { return consulta; }

    string getResultado() { return resultado; }

    string getCambios() { return cambios; }

    bool getValidacion() { return validacion; }


    // SETTERS: modificar información

    void setFecha(string Fecha)
    {
        fecha = Fecha;
    }

    void setCurso(string Curso)
    {
        curso = Curso;
    }

    void setCategoria(string Categoria)
    {
        categoria = Categoria;
    }

    void setHerramientaAI(string HerramientaAI)
    {
        herramientaAI = HerramientaAI;
    }

    void setConsulta(string Consulta)
    {
        consulta = Consulta;
    }

    void setResultado(string Resultado)
    {
        resultado = Resultado;
    }

    void setCambios(string Cambios)
    {
        cambios = Cambios;
    }

    void setValidacion(bool Validacion)
    {
        validacion = Validacion;
    }

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
