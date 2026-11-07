
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
            InitializeComponent();
            gestorB = gestor;

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

	protected:
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

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblDetalleCurso = (gcnew System::Windows::Forms::Label());
			this->cboDetalleCurso = (gcnew System::Windows::Forms::ComboBox());
			this->lblDetalleCategoría = (gcnew System::Windows::Forms::Label());
			this->cboDetalleCategoría = (gcnew System::Windows::Forms::ComboBox());
			this->lblDetalleHerramienta = (gcnew System::Windows::Forms::Label());
			this->cboDetalleHerramienta = (gcnew System::Windows::Forms::ComboBox());
			this->btnDetalleBuscar = (gcnew System::Windows::Forms::Button());
			this->btnDetalleLimpiar = (gcnew System::Windows::Forms::Button());
			this->lvRegistros = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->lblTotalRegistros = (gcnew System::Windows::Forms::Label());
			this->lblVerificados = (gcnew System::Windows::Forms::Label());
			this->lblNoVerificados = (gcnew System::Windows::Forms::Label());
			this->btnGoDashBoard = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDetalleCurso
			// 
			this->lblDetalleCurso->AutoSize = true;
			this->lblDetalleCurso->Location = System::Drawing::Point(12, 11);
			this->lblDetalleCurso->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDetalleCurso->Name = L"lblDetalleCurso";
			this->lblDetalleCurso->Size = System::Drawing::Size(42, 16);
			this->lblDetalleCurso->TabIndex = 0;
			this->lblDetalleCurso->Text = L"Curso";
			// 
			// cboDetalleCurso
			// 
			this->cboDetalleCurso->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboDetalleCurso->FormattingEnabled = true;
			this->cboDetalleCurso->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Todos", L"Algoritmos", L"Matemática", L"Física",
					L"Lenguaje"
			});
			this->cboDetalleCurso->Location = System::Drawing::Point(16, 31);
			this->cboDetalleCurso->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cboDetalleCurso->Name = L"cboDetalleCurso";
			this->cboDetalleCurso->Size = System::Drawing::Size(203, 24);
			this->cboDetalleCurso->TabIndex = 1;
			// 
			// lblDetalleCategoría
			// 
			this->lblDetalleCategoría->AutoSize = true;
			this->lblDetalleCategoría->Location = System::Drawing::Point(228, 15);
			this->lblDetalleCategoría->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDetalleCategoría->Name = L"lblDetalleCategoría";
			this->lblDetalleCategoría->Size = System::Drawing::Size(66, 16);
			this->lblDetalleCategoría->TabIndex = 2;
			this->lblDetalleCategoría->Text = L"Categoría";
			// 
			// cboDetalleCategoría
			// 
			this->cboDetalleCategoría->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboDetalleCategoría->FormattingEnabled = true;
			this->cboDetalleCategoría->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Todas", L"Tarea", L"Examen", L"LB1",
					L"EA1", L"Reto", L"Proyecto/Trabajo", L"Teoría/Consulta conceptual", L"Depuracion de errores", L"Otro"
			});
			this->cboDetalleCategoría->Location = System::Drawing::Point(232, 31);
			this->cboDetalleCategoría->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cboDetalleCategoría->Name = L"cboDetalleCategoría";
			this->cboDetalleCategoría->Size = System::Drawing::Size(204, 24);
			this->cboDetalleCategoría->TabIndex = 3;
			// 
			// lblDetalleHerramienta
			// 
			this->lblDetalleHerramienta->AutoSize = true;
			this->lblDetalleHerramienta->Location = System::Drawing::Point(445, 15);
			this->lblDetalleHerramienta->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDetalleHerramienta->Name = L"lblDetalleHerramienta";
			this->lblDetalleHerramienta->Size = System::Drawing::Size(81, 16);
			this->lblDetalleHerramienta->TabIndex = 4;
			this->lblDetalleHerramienta->Text = L"Herramienta";
			// 
			// cboDetalleHerramienta
			// 
			this->cboDetalleHerramienta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboDetalleHerramienta->FormattingEnabled = true;
			this->cboDetalleHerramienta->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Todas", L"ChatGPT", L"Claude", L"Copilot",
					L"Gemini"
			});
			this->cboDetalleHerramienta->Location = System::Drawing::Point(449, 31);
			this->cboDetalleHerramienta->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cboDetalleHerramienta->Name = L"cboDetalleHerramienta";
			this->cboDetalleHerramienta->Size = System::Drawing::Size(217, 24);
			this->cboDetalleHerramienta->TabIndex = 5;
			// 
			// btnDetalleBuscar
			// 
			this->btnDetalleBuscar->Location = System::Drawing::Point(683, 31);
			this->btnDetalleBuscar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDetalleBuscar->Name = L"btnDetalleBuscar";
			this->btnDetalleBuscar->Size = System::Drawing::Size(140, 28);
			this->btnDetalleBuscar->TabIndex = 6;
			this->btnDetalleBuscar->Text = L"Buscar";
			this->btnDetalleBuscar->UseVisualStyleBackColor = true;
			// 
			// btnDetalleLimpiar
			// 
			this->btnDetalleLimpiar->Location = System::Drawing::Point(831, 31);
			this->btnDetalleLimpiar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnDetalleLimpiar->Name = L"btnDetalleLimpiar";
			this->btnDetalleLimpiar->Size = System::Drawing::Size(140, 28);
			this->btnDetalleLimpiar->TabIndex = 7;
			this->btnDetalleLimpiar->Text = L"Limpiar";
			this->btnDetalleLimpiar->UseVisualStyleBackColor = true;
			// 
			// lvRegistros
			// 
			this->lvRegistros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->lvRegistros->FullRowSelect = true;
			this->lvRegistros->GridLines = true;
			this->lvRegistros->HideSelection = false;
			this->lvRegistros->Location = System::Drawing::Point(12, 69);
			this->lvRegistros->Name = L"lvRegistros";
			this->lvRegistros->Size = System::Drawing::Size(769, 316);
			this->lvRegistros->TabIndex = 8;
			this->lvRegistros->UseCompatibleStateImageBehavior = false;
			this->lvRegistros->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->colNumero->HeaderText = L"#";
			this->colNumero->Name = L"colNumero";
			// 
			// columnHeader2
			// 
			this->colFecha->HeaderText = L"Fecha";
			this->colFecha->Name = L"colFecha";
			// 
			// columnHeader3
			// 
			this->colCurso->HeaderText = L"Curso";
			this->colCurso->Name = L"colCurso";
			// 
			// columnHeader4
			// 
			this->colCategoria->HeaderText = L"Categoría";
			this->colCategoria->Name = L"colCategoria";
			// 
			// columnHeader5
			// 
			this->colHerramienta->HeaderText = L"Herramienta";
			this->colHerramienta->Name = L"colHerramienta";
			// 
			// columnHeader6
			// 
			this->colConsulta->HeaderText = L"Qué consultamos";
			this->colConsulta->Name = L"colConsulta";
			// 
			// columnHeader7
			// 
			this->colValidado->HeaderText = L"Validado";
			this->colValidado->Name = L"colValidado";
			// 
			// lblTotalRegistros
			// 
			this->lblTotalRegistros->AutoSize = true;
			this->lblTotalRegistros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalRegistros->Location = System::Drawing::Point(12, 405);
			this->lblTotalRegistros->Name = L"lblTotalRegistros";
			this->lblTotalRegistros->Size = System::Drawing::Size(172, 20);
			this->lblTotalRegistros->TabIndex = 9;
			this->lblTotalRegistros->Text = L"Total de Registros: -";
			// 
			// lblVerificados
			// 
			this->lblVerificados->AutoSize = true;
			this->lblVerificados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVerificados->ForeColor = System::Drawing::Color::Green;
			this->lblVerificados->Location = System::Drawing::Point(230, 405);
			this->lblVerificados->Name = L"lblVerificados";
			this->lblVerificados->Size = System::Drawing::Size(115, 20);
			this->lblVerificados->TabIndex = 10;
			this->lblVerificados->Text = L"Verificados: -";
			// 
			// lblNoVerificados
			// 
			this->lblNoVerificados->AutoSize = true;
			this->lblNoVerificados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoVerificados->ForeColor = System::Drawing::Color::Red;
			this->lblNoVerificados->Location = System::Drawing::Point(384, 405);
			this->lblNoVerificados->Name = L"lblNoVerificados";
			this->lblNoVerificados->Size = System::Drawing::Size(142, 20);
			this->lblNoVerificados->TabIndex = 11;
			this->lblNoVerificados->Text = L"No Verificados: -";
			// 
			// btnGoDashBoard
			// 
			this->btnGoDashBoard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoDashBoard->Location = System::Drawing::Point(593, 398);
			this->btnGoDashBoard->Name = L"btnGoDashBoard";
			this->btnGoDashBoard->Size = System::Drawing::Size(188, 36);
			this->btnGoDashBoard->TabIndex = 12;
			this->btnGoDashBoard->Text = L"Ir a Dashboard";
			this->btnGoDashBoard->UseVisualStyleBackColor = true;
			// 
			// FrmListado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 454);
			this->Controls->Add(this->btnGoDashBoard);
			this->Controls->Add(this->lblNoVerificados);
			this->Controls->Add(this->lblVerificados);
			this->Controls->Add(this->lblTotalRegistros);
			this->Controls->Add(this->lvRegistros);
			this->Controls->Add(this->btnDetalleLimpiar);
			this->Controls->Add(this->btnDetalleBuscar);
			this->Controls->Add(this->cboDetalleHerramienta);
			this->Controls->Add(this->lblDetalleHerramienta);
			this->Controls->Add(this->cboDetalleCategoría);
			this->Controls->Add(this->lblDetalleCategoría);
			this->Controls->Add(this->cboDetalleCurso);
			this->Controls->Add(this->lblDetalleCurso);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FrmListado";
			this->Text = L"AI-TRACE — Detalle y Análisis";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lvRegistros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
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

        // ACTUALIZAR LISTADO
        void ActualizarLista()
        {
            lvRegistros->Items->Clear();

            int verificados = 0;
            int mostrados = 0;
            int total = gestorB->ObtenerTotal();

            for (int i = 0; i < total; i++)
            {
                RegistroAI* r = gestorB->ObtenerRegistro(i);

                String^ curso = gcnew String(r->getCurso().c_str());
                String^ categoria =
                    gcnew String(r->getCategoria().c_str());
                String^ herramienta =
                    gcnew String(r->getHerramientaAI().c_str());

                bool validado = !r->getComoSeValido().empty();

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

                fila->SubItems->Add(validado ? L"Si" : L"No");

                lvRegistros->Items->Add(fila);
                mostrados++;
            }

            lblTotalRegistros->Text =
                L"Mostrados: " + Convert::ToString(mostrados);

            lblVerificados->Text =
                L"Verificados: " + Convert::ToString(verificados);

            lblNoVerificados->Text =
                L"No verificados: " +
                Convert::ToString(total - verificados);
        }

        // BUSCAR
        System::Void btnDetalleBuscar_Click(
            System::Object^ sender, System::EventArgs^ e)
        {
            ActualizarLista();
        }

        // LIMPIAR
        System::Void btnDetalleLimpiar_Click(
            System::Object^ sender, System::EventArgs^ e)
        {
            cboDetalleCurso->SelectedIndex = 0;
            cboDetalleCategoria->SelectedIndex = 0;
            cboDetalleHerramienta->SelectedIndex = 0;

            ActualizarLista();
        }

        // IR A DASHBOARD
        System::Void btnGoDashBoard_Click(
            System::Object^ sender, System::EventArgs^ e)
        {
            MessageBox::Show(
                L"Abre el Dashboard desde el menu principal.");
        }
    };
}
