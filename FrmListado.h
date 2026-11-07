
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

	public:
		FrmListado(GestorBitacora* gestor) {
			InitializeComponent();
			gestorB = gestor;
		}

	protected:
		~FrmListado() {
			if (components) { delete components; }
			delete gestorB;
		}
	private: System::Windows::Forms::Label^ lblDetalleCurso;
	protected:

	private: System::Windows::Forms::ComboBox^ cboDetalleCurso;
	private: System::Windows::Forms::Label^ lblDetalleCategoria;
	private: System::Windows::Forms::ComboBox^ cboDetalleCategoria;
	private: System::Windows::Forms::Label^ lblDetalleHerramienta;
	private: System::Windows::Forms::ComboBox^ cboDetalleHerramienta;
	private: System::Windows::Forms::Button^ btnDetalleBuscar;
	private: System::Windows::Forms::Button^ btnDetalleLimpiar;
	private: System::Windows::Forms::ListView^ lvRegistros;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::Label^ lblTotalRegistros;
	private: System::Windows::Forms::Label^ lblVerificados;
	private: System::Windows::Forms::Label^ lblNoVerificados;
	private: System::Windows::Forms::Button^ btnGoDashBoard;

            cboDetalleCurso = gcnew ComboBox();
            cboDetalleCategoria = gcnew ComboBox();
            cboDetalleHerramienta = gcnew ComboBox();

            btnDetalleBuscar = gcnew Button();
            btnDetalleLimpiar = gcnew Button();
            btnGoDashBoard = gcnew Button();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblDetalleCurso = (gcnew System::Windows::Forms::Label());
			this->cboDetalleCurso = (gcnew System::Windows::Forms::ComboBox());
			this->lblDetalleCategoria = (gcnew System::Windows::Forms::Label());
			this->cboDetalleCategoria = (gcnew System::Windows::Forms::ComboBox());
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
			// lblDetalleCategoria
			// 
			this->lblDetalleCategoria->AutoSize = true;
			this->lblDetalleCategoria->Location = System::Drawing::Point(228, 15);
			this->lblDetalleCategoria->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDetalleCategoria->Name = L"lblDetalleCategoria";
			this->lblDetalleCategoria->Size = System::Drawing::Size(66, 16);
			this->lblDetalleCategoria->TabIndex = 2;
			this->lblDetalleCategoria->Text = L"Categoría";
			// 
			// cboDetalleCategoria
			// 
			this->cboDetalleCategoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboDetalleCategoria->FormattingEnabled = true;
			this->cboDetalleCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Todas", L"Tarea", L"Examen", L"LB1",
					L"EA1", L"Reto", L"Proyecto/Trabajo", L"Teoría/Consulta conceptual", L"Depuracion de errores", L"Otro"
			});
			this->cboDetalleCategoria->Location = System::Drawing::Point(232, 31);
			this->cboDetalleCategoria->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cboDetalleCategoria->Name = L"cboDetalleCategoria";
			this->cboDetalleCategoria->Size = System::Drawing::Size(204, 24);
			this->cboDetalleCategoria->TabIndex = 3;
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

			// columnHeader1
			this->columnHeader1->Text = L"#";
			this->columnHeader1->Width = 40;
			// columnHeader2
			this->columnHeader2->Text = L"Fecha";
			this->columnHeader2->Width = 90;
			// columnHeader3
			this->columnHeader3->Text = L"Curso";
			this->columnHeader3->Width = 120;
			// columnHeader4
			this->columnHeader4->Text = L"Categoría";
			this->columnHeader4->Width = 130;
			// columnHeader5
			this->columnHeader5->Text = L"Herramienta";
			this->columnHeader5->Width = 100;
			// columnHeader6
			this->columnHeader6->Text = L"Qué consultamos";
			this->columnHeader6->Width = 200;
			// columnHeader7
			this->columnHeader7->Text = L"Validado";
			this->columnHeader7->Width = 70;

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
			this->Controls->Add(this->cboDetalleCategoria);
			this->Controls->Add(this->lblDetalleCategoria);
			this->Controls->Add(this->cboDetalleCurso);
			this->Controls->Add(this->lblDetalleCurso);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FrmListado";
			this->Text = L"AI-TRACE — Detalle y Análisis";
			this->ResumeLayout(false);
			this->PerformLayout();

        void ActualizarLista()
        {
            lvRegistros->Items->Clear();

#pragma endregion 

	private: void ActualizarLista() {
		lvRegistros->Items->Clear();
		for (int i = 0; i < gestorB->ObtenerTotal(); i++) {
			RegistroAI* r = gestorB->ObtenerRegistro(i);
			ListViewItem^ fila = gcnew ListViewItem(marshal_as<String^>(Convert::ToString(r->getID())));
			fila->SubItems->Add(marshal_as<String^>(r->getFecha()));
			fila->SubItems->Add(marshal_as<String^>(r->getCurso()));
			fila->SubItems->Add(marshal_as<String^>(r->getCategoria()));
			fila->SubItems->Add(marshal_as<String^>(r->getHerramientaAI()));
			fila->SubItems->Add(marshal_as<String^>(r->getConsulta()));
			fila->SubItems->Add(marshal_as<String^>(r->getValidacion() ? "Si" : "No"));
			lvRegistros->Items->Add(fila);
		}

        System::Void btnDetalleBuscar_Click(
            System::Object^ sender,
            System::EventArgs^ e)
        {
            ActualizarLista();
        }

};
}
