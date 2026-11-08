#pragma once
#include "pch.h"
#include "GraficoNativo.h"
#include <string>

using namespace std;

class PastelCurso : public GraficoNativo {
public:
    PastelCurso(int x, int y, int ancho, int alto, GestorBitacora* gestor)
        : GraficoNativo(x, y, ancho, alto, gestor) {
    }

    void Dibujar(Graphics^ g) override {
        int totalReg = bitacora->ObtenerTotal();
        if (totalReg == 0) return;

        // Cursos estandarizados sin caracteres especiales para evitar errores de codificación
        string cursos[3] = { "Algoritmos", "Calculo I", "Matematica Discreta" };
        int conteos[3] = { 0, 0, 0 };

        for (int i = 0; i < totalReg; i++) {
            string cursoReg = bitacora->ObtenerRegistro(i)->getCurso();
            for (int c = 0; c < 3; c++) {
                if (cursoReg == cursos[c]) {
                    conteos[c]++;
                    break;
                }
            }
        }

        cli::array<Color>^ colores = gcnew cli::array<Color> {
            Color::FromArgb(142, 68, 173),  // Morado / Algoritmos
                Color::FromArgb(26, 188, 156),  // Turquesa / Calculo I
                Color::FromArgb(243, 156, 18)   // Amarillo / Matematica Discreta
        };

        float anguloInicio = -90.0f;
        Pen^ lapizSeparador = gcnew Pen(Color::White, 2);
        Font^ fuenteLeyenda = gcnew Font("Segoe UI", 9, FontStyle::Bold);
        SolidBrush^ pincelTexto = gcnew SolidBrush(Color::Black);

        for (int c = 0; c < 3; c++) {
            if (conteos[c] == 0) continue;

            float anguloBarrido = (conteos[c] * 360.0f) / totalReg;

            // 1. Dibujar el sector circular relleno
            SolidBrush^ pincelSector = gcnew SolidBrush(colores[c]);
            g->FillPie(pincelSector, (float)x, (float)y, (float)ancho, (float)alto, anguloInicio, anguloBarrido);

            // 2. Dibujar la línea divisoria blanca para dar relieve
            g->DrawPie(lapizSeparador, (float)x, (float)y, (float)ancho, (float)alto, anguloInicio, anguloBarrido);

            // 3. Dibujar la leyenda de colores al lado derecho del pastel
            int ly = y + 50 + (c * 30);
            g->FillRectangle(pincelSector, (float)(x + ancho + 15), (float)ly, 15.0f, 15.0f);
            g->DrawRectangle(gcnew Pen(Color::Black, 1), (float)(x + ancho + 15), (float)ly, 15.0f, 15.0f);

            // 4. Corrección de la Línea 61: Construcción limpia de la cadena en .NET
            int porcentaje = (conteos[c] * 100) / totalReg;
            // Especificamos System:: de manera explícita para resolver el conflicto de tipos
            System::String^ textoCurso = gcnew System::String(cursos[c].c_str()) + " (" + porcentaje + "%)";
            g->DrawString(textoCurso, fuenteLeyenda, pincelTexto, (float)(x + ancho + 38), (float)(ly - 1));

            anguloInicio += anguloBarrido;
        }
    }
};

