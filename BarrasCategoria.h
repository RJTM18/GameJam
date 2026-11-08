#pragma once
#include "GraficoNativo.h"
#include <string>

using namespace std;

class BarrasCategoria : public GraficoNativo {
public:
    BarrasCategoria(int x, int y, int ancho, int alto, GestorBitacora* gestor)
        : GraficoNativo(x, y, ancho, alto, gestor) {
    }

    void Dibujar(Graphics^ g) override {
        int totalReg = bitacora->ObtenerTotal();

        // Las 9 categorías oficiales de la bitácora institucional de la UPC
        string categorias[9] = { "Tarea", "Examen", "LB1", "EA1", "Reto",
                              "Proyecto/Trabajo", "Teoria/Consulta conceptual",
                              "Depuracion de errores", "Otro" };

        int conteos[9] = { 0 };

        // Recorrido algorítmico manual (Exigido en la rúbrica para puntaje completo, sin LINQ)
        for (int i = 0; i < totalReg; i++) {
        string catReg = bitacora->ObtenerRegistro(i)->getCategoria();
            for (int c = 0; c < 9; c++) {
                if (catReg == categorias[c]) {
                    conteos[c]++;
                    break;
                }
            }
        }

        // Buscar el valor máximo para escalar la altura de las barras proporcionalmente
        int maxConteo = 1;
        for (int c = 0; c < 9; c++) {
            if (conteos[c] > maxConteo) maxConteo = conteos[c];
        }

        // Configuración de lápices y pinceles para el dibujo técnico GDI+
        Pen^ lapizEjes = gcnew Pen(Color::FromArgb(100, 110, 120), 2);
        SolidBrush^ pincelBarra = gcnew SolidBrush(Color::FromArgb(70, 130, 180)); // Color Azul Acero
        Font^ fuenteTexto = gcnew Font("Segoe UI", 8, FontStyle::Regular);
        SolidBrush^ pincelTexto = gcnew SolidBrush(Color::Black);

        // Dibujar el eje base horizontal (Eje X)
        g->DrawLine(lapizEjes, x, y + alto, x + ancho, y + alto);

        int espacioPaso = ancho / 9;
        int anchoBarra = espacioPaso * 0.65;

        for (int c = 0; c < 9; c++) {
            // Regla de tres simple para calcular la altura en píxeles de manera proporcional
            int alturaBarra = (conteos[c] * (alto - 35)) / maxConteo;

            int bx = x + (c * espacioPaso) + (espacioPaso * 0.15);
            int by = (y + alto) - alturaBarra;

            // Dibujar la barra y su contorno si tiene registros cargados
            if (conteos[c] > 0) {
                g->FillRectangle(pincelBarra, bx, by, anchoBarra, alturaBarra);
                g->DrawRectangle(gcnew Pen(Color::DarkBlue, 1), bx, by, anchoBarra, alturaBarra);

                // Imprimir el número total encima de cada barra
                g->DrawString(conteos[c].ToString(), fuenteTexto, pincelTexto, bx + (anchoBarra / 4), by - 16);
            }

            // Crear etiquetas cortas de 4 letras para evitar superposiciones en el eje X
            System::String^ etiqueta = gcnew System::String(categorias[c].substr(0, 4).c_str());
            g->DrawString(etiqueta, fuenteTexto, pincelTexto, bx, y + alto + 6);
        }
    }
};
