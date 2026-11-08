#pragma once
#include "pch.h"
#include "GestorBitacora.h"

using namespace System::Drawing;

// Clase base abstracta para los gráficos nativos de GDI+ (Módulo 3)
class GraficoNativo {
protected:
    int x, y, ancho, alto;
    GestorBitacora* bitacora; // Conexión directa con la base de datos en memoria

public:
    // El constructor guarda la posición física del gráfico en el formulario y el puntero al gestor
    GraficoNativo(int x, int y, int ancho, int alto, GestorBitacora* gestor) {
        this->x = x;
        this->y = y;
        this->ancho = ancho;
        this->alto = alto;
        this->bitacora = gestor;
    }

    virtual ~GraficoNativo() {}

    // Método abstracto puro: Obliga a cada clase hija a implementar su propio algoritmo de dibujo
    virtual void Dibujar(Graphics^ g) = 0;
};
