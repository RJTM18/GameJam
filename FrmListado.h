#pragma once

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
	public ref class FrmListado : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::DataGridView^ dgvRegistros;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNumero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCurso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCategoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHerramienta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colConsulta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colValidado;


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
			this->dgvRegistros = (gcnew System::Windows::Forms::DataGridView());
			this->colNumero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCurso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHerramienta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colConsulta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colValidado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRegistros))->BeginInit();
			this->SuspendLayout();
			// 
			// lblDetalleCurso
			// 
			this->lblDetalleCurso->AutoSize = true;
			this->lblDetalleCurso->Location = System::Drawing::Point(9, 9);
			this->lblDetalleCurso->Name = L"lblDetalleCurso";
			this->lblDetalleCurso->Size = System::Drawing::Size(34, 13);
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
			this->cboDetalleCurso->Location = System::Drawing::Point(12, 25);
			this->cboDetalleCurso->Name = L"cboDetalleCurso";
			this->cboDetalleCurso->Size = System::Drawing::Size(153, 21);
			this->cboDetalleCurso->TabIndex = 1;
			// 
			// lblDetalleCategoría
			// 
			this->lblDetalleCategoría->AutoSize = true;
			this->lblDetalleCategoría->Location = System::Drawing::Point(171, 12);
			this->lblDetalleCategoría->Name = L"lblDetalleCategoría";
			this->lblDetalleCategoría->Size = System::Drawing::Size(54, 13);
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
			this->cboDetalleCategoría->Location = System::Drawing::Point(174, 25);
			this->cboDetalleCategoría->Name = L"cboDetalleCategoría";
			this->cboDetalleCategoría->Size = System::Drawing::Size(154, 21);
			this->cboDetalleCategoría->TabIndex = 3;
			// 
			// lblDetalleHerramienta
			// 
			this->lblDetalleHerramienta->AutoSize = true;
			this->lblDetalleHerramienta->Location = System::Drawing::Point(334, 12);
			this->lblDetalleHerramienta->Name = L"lblDetalleHerramienta";
			this->lblDetalleHerramienta->Size = System::Drawing::Size(64, 13);
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
			this->cboDetalleHerramienta->Location = System::Drawing::Point(337, 25);
			this->cboDetalleHerramienta->Name = L"cboDetalleHerramienta";
			this->cboDetalleHerramienta->Size = System::Drawing::Size(164, 21);
			this->cboDetalleHerramienta->TabIndex = 5;
			// 
			// btnDetalleBuscar
			// 
			this->btnDetalleBuscar->Location = System::Drawing::Point(512, 25);
			this->btnDetalleBuscar->Name = L"btnDetalleBuscar";
			this->btnDetalleBuscar->Size = System::Drawing::Size(105, 23);
			this->btnDetalleBuscar->TabIndex = 6;
			this->btnDetalleBuscar->Text = L"Buscar";
			this->btnDetalleBuscar->UseVisualStyleBackColor = true;
			// 
			// btnDetalleLimpiar
			// 
			this->btnDetalleLimpiar->Location = System::Drawing::Point(623, 25);
			this->btnDetalleLimpiar->Name = L"btnDetalleLimpiar";
			this->btnDetalleLimpiar->Size = System::Drawing::Size(105, 23);
			this->btnDetalleLimpiar->TabIndex = 7;
			this->btnDetalleLimpiar->Text = L"Limpiar";
			this->btnDetalleLimpiar->UseVisualStyleBackColor = true;
			// 
			// dgvRegistros
			// 
			this->dgvRegistros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRegistros->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colNumero,
					this->colFecha, this->colCurso, this->colCategoria, this->colHerramienta, this->colConsulta, this->colValidado
			});
			this->dgvRegistros->Location = System::Drawing::Point(11, 59);
			this->dgvRegistros->Name = L"dgvRegistros";
			this->dgvRegistros->RowHeadersVisible = false;
			this->dgvRegistros->Size = System::Drawing::Size(763, 371);
			this->dgvRegistros->TabIndex = 8;
			this->dgvRegistros->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FrmListado::dataGridView1_CellContentClick);
			// 
			// colNumero
			// 
			this->colNumero->HeaderText = L"#";
			this->colNumero->Name = L"colNumero";
			// 
			// colFecha
			// 
			this->colFecha->HeaderText = L"Fecha";
			this->colFecha->Name = L"colFecha";
			// 
			// colCurso
			// 
			this->colCurso->HeaderText = L"Curso";
			this->colCurso->Name = L"colCurso";
			// 
			// colCategoria
			// 
			this->colCategoria->HeaderText = L"Categoría";
			this->colCategoria->Name = L"colCategoria";
			// 
			// colHerramienta
			// 
			this->colHerramienta->HeaderText = L"Herramienta";
			this->colHerramienta->Name = L"colHerramienta";
			// 
			// colConsulta
			// 
			this->colConsulta->HeaderText = L"Qué consultamos";
			this->colConsulta->Name = L"colConsulta";
			// 
			// colValidado
			// 
			this->colValidado->HeaderText = L"Validado";
			this->colValidado->Name = L"colValidado";
			// 
			// FrmListado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
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
			this->Name = L"FrmListado";
			this->Text = L"AI-TRACE — Detalle y Análisis";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRegistros))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
