
#pragma once
#include "pch.h"
#include <string>
#include <cstdlib>
#include "RegistroIA.h"
#include "GestorBitacora.h"

using namespace std;

class GeneradorAleatorio
{
private:
    int cantidad;
    int contador;

public:

    GeneradorAleatorio(int Cantidad, int Contador)
    {
        cantidad = Cantidad;
        contador = Contador;
    }

    string GenerarCurso()
    {
        int numero = rand() % 3;

        if (numero == 0)
        {
            return "Calculo I";
        }
        else if (numero == 1)
        {
            return "Algoritmos";
        }
        else
        {
            return "Matematica Discreta";
        }
    }

    string GenerarCategoria()
    {
        string categorias[9] = 
        {
            "Tarea",
            "Examen",
            "LB1",
            "EA1",
            "Reto",
            "Proyecto/Trabajo",
            "Teoria/Consulta conceptual",
            "Depuracion de errores",
            "Otro"
        };

        int numero = rand() % 9;

        return categorias[numero];
    }

    string GenerarHerramienta()
    {
        int numero = rand() % 4;

        if (numero == 0)
        {
            return "ChatGPT";
        }
        else if (numero == 1)
        {
            return "Gemini";
        }
        else if (numero == 2)
        {
            return "Copilot";
        }
        else
        {
            return "Claude";
        }
    }

    string GenerarFecha()
    {
        int mes = 8 + rand() % 3;
        int dia = 1 + rand() % 28;

        string fecha = to_string(dia) + "/" +
            to_string(mes) + "/2026";

        return fecha;
    }

    string GenerarConsulta(string curso)
    {
        int numero = rand() % 3;

        if (curso == "Algoritmos")
        {
            if (numero == 0)
                return "Como funciona este codigo C++";
            else if (numero == 1)
                return "Como corregir un error de compilacion";
            else
                return "Como utilizar Las clases en C++";
        }
        else if (curso == "Calculo I")
        {
            if (numero == 0)
                return "Como resolver una integral";
            else if (numero == 1)
                return "Como aplicar integracion por partes";
            else
                return "Como calcular un area bajo la curva";
        }
        else
        {
            if (numero == 0)
                return "Como resolver una proposicion logica";
            else if (numero == 1)
                return "Como construir un arbol binario";
            else
                return "Como obtener el recorrido preorden";
        }
    }

    RegistroAI* GenerarRegistro()
    {
        int id = contador;
        contador++;

        string fecha = GenerarFecha();
        string curso = GenerarCurso();
        string categoria = GenerarCategoria();
        string herramienta = GenerarHerramienta();

        string consulta = GenerarConsulta(curso);

        string resultado;
        string cambios;


        string resultado;
        string cambios;

        if (consulta == "Como funciona este codigo C++")
        {
            resultado = "La IA explico las instrucciones del codigo";
            cambios = "Agregue comentarios para entenderlo";
        }
        else if (consulta == "Como corregir un error de compilacion")
        {
            resultado = "La IA identifico un error de sintaxis";
            cambios = "Corregi la instruccion indicada";
        }
        else if (consulta == "Como utilizar Las clases en C++")
        {
            resultado = "La IA mostro un ejemplo de clase con atributos y metodos";
            cambios = "Adapte el ejemplo a mi programa";
        }
        else if (consulta == "Como resolver una integral")
        {
            resultado = "La IA mostro como aplicar la regla de potencias";
            cambios = "Corregi los exponentes de mi solucion";
        }
        else if (consulta == "Como aplicar integracion por partes")
        {
            resultado = "La IA mostro la formula de integracion por partes";
            cambios = "Identifique correctamente u y dv";
        }
        else if (consulta == "Como calcular un area bajo la curva")
        {
            resultado = "La IA explico como usar una integral definida";
            cambios = "Corregi los limites de integracion";
        }
        else if (consulta == "Como resolver una proposicion logica")
        {
            resultado = "La IA explico como construir una tabla de verdad";
            cambios = "Revise los valores de verdad";
        }
        else if (consulta == "Como construir un arbol binario")
        {
            resultado = "La IA explico como organizar los nodos del arbol";
            cambios = "Corregi la posicion de los nodos";
        }
        else
        {
            resultado = "La IA explico el recorrido raiz izquierda derecha";
            cambios = "Corregi el orden de los nodos";
        }


        RegistroAI* nuevo = new RegistroAI
        (
            id,
            fecha,
            curso,
            categoria,
            herramienta,
            consulta,
            resultado,
            cambios
        );

        return nuevo;
    }

    void GenerarDatos(GestorBitacora& gestor)
    {
        for (int i = 0; i < cantidad; i++)
        {
            RegistroAI* nuevo = GenerarRegistro();

            gestor.Agregar(nuevo);
        }
    }
};
