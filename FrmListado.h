
#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"

namespace GameJam {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class FrmListado : public Form
    {
    private:
        GestorBitacora* gestorB;

        Label^ lblDetalleCurso;
        Label^ lblDetalleCategoria;
        Label^ lblDetalleHerramienta;
        Label^ lblTotalRegistros;
        Label^ lblVerificados;
        Label^ lblNoVerificados;

        ComboBox^ cboDetalleCurso;
        ComboBox^ cboDetalleCategoria;
        ComboBox^ cboDetalleHerramienta;

        Button^ btnDetalleBuscar;
        Button^ btnDetalleLimpiar;
        Button^ btnGoDashBoard;

        ListView^ lvRegistros;

        System::ComponentModel::Container^ components;

    public:
        FrmListado(GestorBitacora* gestor)
        {
            gestorB = gestor;
            components = nullptr;
            InitializeComponent();
            ActualizarLista();
        }

    protected:
        ~FrmListado()
        {
            if (components)
                delete components;
        }

    private:
        void InitializeComponent()
        {
            lblDetalleCurso = gcnew Label();
            lblDetalleCategoria = gcnew Label();
            lblDetalleHerramienta = gcnew Label();
            lblTotalRegistros = gcnew Label();
            lblVerificados = gcnew Label();
            lblNoVerificados = gcnew Label();

            cboDetalleCurso = gcnew ComboBox();
            cboDetalleCategoria = gcnew ComboBox();
            cboDetalleHerramienta = gcnew ComboBox();

            btnDetalleBuscar = gcnew Button();
            btnDetalleLimpiar = gcnew Button();
            btnGoDashBoard = gcnew Button();

            lvRegistros = gcnew ListView();

            this->SuspendLayout();

            // CURSO
            lblDetalleCurso->Text = L"Curso";
            lblDetalleCurso->Location = Point(15, 12);
            lblDetalleCurso->AutoSize = true;

            cboDetalleCurso->Location = Point(15, 32);
            cboDetalleCurso->Size = Drawing::Size(180, 25);
            cboDetalleCurso->DropDownStyle =
                ComboBoxStyle::DropDownList;

            cboDetalleCurso->Items->Add(L"Todos");
            cboDetalleCurso->Items->Add(L"Algoritmos");
            cboDetalleCurso->Items->Add(L"Calculo I");
            cboDetalleCurso->Items->Add(L"Matematica Discreta");

            // CATEGORIA
            lblDetalleCategoria->Text = L"Categoria";
            lblDetalleCategoria->Location = Point(205, 12);
            lblDetalleCategoria->AutoSize = true;

            cboDetalleCategoria->Location = Point(205, 32);
            cboDetalleCategoria->Size = Drawing::Size(190, 25);
            cboDetalleCategoria->DropDownStyle =
                ComboBoxStyle::DropDownList;

            cli::array<String^>^ categorias = {
                L"Todas", L"Tarea", L"Examen", L"LB1",
                L"EA1", L"Reto", L"Proyecto/Trabajo",
                L"Teoria/Consulta conceptual",
                L"Depuracion de errores", L"Otro"
            };

            cboDetalleCategoria->Items->AddRange(categorias);

            // HERRAMIENTA
            lblDetalleHerramienta->Text = L"Herramienta";
            lblDetalleHerramienta->Location = Point(405, 12);
            lblDetalleHerramienta->AutoSize = true;

            cboDetalleHerramienta->Location = Point(405, 32);
            cboDetalleHerramienta->Size = Drawing::Size(155, 25);
            cboDetalleHerramienta->DropDownStyle =
                ComboBoxStyle::DropDownList;

            cboDetalleHerramienta->Items->Add(L"Todas");
            cboDetalleHerramienta->Items->Add(L"ChatGPT");
            cboDetalleHerramienta->Items->Add(L"Claude");
            cboDetalleHerramienta->Items->Add(L"Copilot");
            cboDetalleHerramienta->Items->Add(L"Gemini");

            // BOTON BUSCAR
            btnDetalleBuscar->Text = L"Buscar";
            btnDetalleBuscar->Location = Point(575, 30);
            btnDetalleBuscar->Size = Drawing::Size(90, 30);

            btnDetalleBuscar->Click +=
                gcnew EventHandler(this,
                    &FrmListado::btnDetalleBuscar_Click);

            // BOTON LIMPIAR
            btnDetalleLimpiar->Text = L"Limpiar";
            btnDetalleLimpiar->Location = Point(675, 30);
            btnDetalleLimpiar->Size = Drawing::Size(90, 30);

            btnDetalleLimpiar->Click +=
                gcnew EventHandler(this,
                    &FrmListado::btnDetalleLimpiar_Click);

            // LISTVIEW
            lvRegistros->Location = Point(15, 80);
            lvRegistros->Size = Drawing::Size(750, 305);
            lvRegistros->View = View::Details;
            lvRegistros->FullRowSelect = true;
            lvRegistros->GridLines = true;

            lvRegistros->Columns->Add(L"#", 45);
            lvRegistros->Columns->Add(L"Fecha", 90);
            lvRegistros->Columns->Add(L"Curso", 110);
            lvRegistros->Columns->Add(L"Categoria", 120);
            lvRegistros->Columns->Add(L"Herramienta", 100);
            lvRegistros->Columns->Add(L"Consulta", 190);
            lvRegistros->Columns->Add(L"Validado", 90);

            // CONTADORES
            lblTotalRegistros->Text = L"Total: 0";
            lblTotalRegistros->Location = Point(15, 405);
            lblTotalRegistros->AutoSize = true;

            lblVerificados->Text = L"Verificados: 0";
            lblVerificados->Location = Point(210, 405);
            lblVerificados->ForeColor = Color::Green;
            lblVerificados->AutoSize = true;

            lblNoVerificados->Text = L"No verificados: 0";
            lblNoVerificados->Location = Point(380, 405);
            lblNoVerificados->ForeColor = Color::Red;
            lblNoVerificados->AutoSize = true;

            // BOTON DASHBOARD
            btnGoDashBoard->Text = L"Ir a Dashboard";
            btnGoDashBoard->Location = Point(590, 395);
            btnGoDashBoard->Size = Drawing::Size(175, 35);

            btnGoDashBoard->Click +=
                gcnew EventHandler(this,
                    &FrmListado::btnGoDashBoard_Click);

            // FORMULARIO
            this->ClientSize = Drawing::Size(790, 455);
            this->Text = L"AI-TRACE - Detalle y Analisis";

            this->Controls->Add(lblDetalleCurso);
            this->Controls->Add(lblDetalleCategoria);
            this->Controls->Add(lblDetalleHerramienta);
            this->Controls->Add(cboDetalleCurso);
            this->Controls->Add(cboDetalleCategoria);
            this->Controls->Add(cboDetalleHerramienta);
            this->Controls->Add(btnDetalleBuscar);
            this->Controls->Add(btnDetalleLimpiar);
            this->Controls->Add(lvRegistros);
            this->Controls->Add(lblTotalRegistros);
            this->Controls->Add(lblVerificados);
            this->Controls->Add(lblNoVerificados);
            this->Controls->Add(btnGoDashBoard);

            cboDetalleCurso->SelectedIndex = 0;
            cboDetalleCategoria->SelectedIndex = 0;
            cboDetalleHerramienta->SelectedIndex = 0;

            this->ResumeLayout(false);
            this->PerformLayout();
        }

        void ActualizarLista()
        {
            lvRegistros->Items->Clear();

            int verificados = 0;
            int mostrados = 0;
            int total = gestorB->ObtenerTotal();

            for (int i = 0; i < total; i++)
            {
                RegistroAI* r = gestorB->ObtenerRegistro(i);

                String^ curso =
                    gcnew String(r->getCurso().c_str());

                String^ categoria =
                    gcnew String(r->getCategoria().c_str());

                String^ herramienta =
                    gcnew String(r->getHerramientaAI().c_str());

                bool validado =
                    !r->getComoSeValido().empty();

                if (validado)
                    verificados++;

                if (cboDetalleCurso->SelectedIndex > 0 &&
                    curso != cboDetalleCurso->Text)
                    continue;

                if (cboDetalleCategoria->SelectedIndex > 0 &&
                    categoria != cboDetalleCategoria->Text)
                    continue;

                if (cboDetalleHerramienta->SelectedIndex > 0 &&
                    herramienta != cboDetalleHerramienta->Text)
                    continue;

                ListViewItem^ fila =
                    gcnew ListViewItem(
                        Convert::ToString(r->getID()));

                fila->SubItems->Add(
                    gcnew String(r->getFecha().c_str()));

                fila->SubItems->Add(curso);
                fila->SubItems->Add(categoria);
                fila->SubItems->Add(herramienta);

                fila->SubItems->Add(
                    gcnew String(r->getConsulta().c_str()));

                fila->SubItems->Add(
                    validado ? L"Si" : L"No");

                lvRegistros->Items->Add(fila);
                mostrados++;
            }

            lblTotalRegistros->Text =
                L"Mostrados: " +
                Convert::ToString(mostrados);

            lblVerificados->Text =
                L"Verificados: " +
                Convert::ToString(verificados);

            lblNoVerificados->Text =
                L"No verificados: " +
                Convert::ToString(total - verificados);
        }

        System::Void btnDetalleBuscar_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ActualizarLista();
        }

        System::Void btnDetalleLimpiar_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            cboDetalleCurso->SelectedIndex = 0;
            cboDetalleCategoria->SelectedIndex = 0;
            cboDetalleHerramienta->SelectedIndex = 0;

            ActualizarLista();
        }

        System::Void btnGoDashBoard_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            MessageBox::Show(
                L"Abre el Dashboard desde el menu principal.");
        }
    };
}
