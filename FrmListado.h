#pragma once
#include  "Analizador.h"
#include "GestorBitacora.h"
#include "PalabrasClave.h"
#include "RegistroIA.h"
#include "GeneradorAleatorio.h"
#include "Estadisticas.h"


namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmListado
	/// </summary>
	public ref class FrmListado : public System::Windows::Forms::Form {
	private: 
		
	public:
		FrmListado(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmListado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDetalleCurso;
	protected:

	private: System::Windows::Forms::ComboBox^ cboDetalleCurso;
	private: System::Windows::Forms::Label^ lblDetalleCategoría;
	private: System::Windows::Forms::ComboBox^ cboDetalleCategoría;
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










	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->lvRegistros->Size = System::Drawing::Size(769, 352);
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
			// FrmListado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(813, 454);
			this->Controls->Add(this->dgvRegistros);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRegistros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion Metodos privados

	private: void ActualizarLista() {
		lvRegistros->Items->Clear();
		for (int i = 0; i < universidad->getCantidad(); i++) {
			Alumno* a = universidad->obtener(i);
			ListViewItem^ fila = gcnew ListViewItem(marshal_as<String^>(a->getNombre()));
			fila->SubItems->Add(marshal_as<String^>(a->getApellido()));
			fila->SubItems->Add(marshal_as<String^>(a->getCarrera()));
			lvAlumnos->Items->Add(fila);
		}
	}

#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void FrmListado_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
