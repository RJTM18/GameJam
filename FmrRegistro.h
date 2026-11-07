#pragma once

namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FrmRegistro
	/// </summary>
	public ref class FrmRegistro : public System::Windows::Forms::Form
	{
	public:
		FrmRegistro(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmRegistro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grpNuevoRegistro;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::DateTimePicker^ dtpFecha;
	private: System::Windows::Forms::ComboBox^ cboCategoria;
	private: System::Windows::Forms::Label^ lblCategoriaConsulta;
	private: System::Windows::Forms::Label^ lblQueConsultamos;
	private: System::Windows::Forms::TextBox^ txtQueConsultamos;
	private: System::Windows::Forms::TextBox^ txtResultadoIA;
	private: System::Windows::Forms::Label^ lblResultadoIA;
	private: System::Windows::Forms::ComboBox^ cboCurso;
	private: System::Windows::Forms::Label^ lblCurso;
	private: System::Windows::Forms::TextBox^ txtQueSeCambio;
	private: System::Windows::Forms::Label^ lblQueSeCambio;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lblHerramienta;
	private: System::Windows::Forms::ComboBox^ cboComoSeValido;
	private: System::Windows::Forms::Label^ lblComoSeValido;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnGenerarDatos;
	private: System::Windows::Forms::Button^ btnVerDetalle;




	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grpNuevoRegistro = (gcnew System::Windows::Forms::GroupBox());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblCategoriaConsulta = (gcnew System::Windows::Forms::Label());
			this->cboCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->lblQueConsultamos = (gcnew System::Windows::Forms::Label());
			this->txtQueConsultamos = (gcnew System::Windows::Forms::TextBox());
			this->lblResultadoIA = (gcnew System::Windows::Forms::Label());
			this->txtResultadoIA = (gcnew System::Windows::Forms::TextBox());
			this->lblQueSeCambio = (gcnew System::Windows::Forms::Label());
			this->txtQueSeCambio = (gcnew System::Windows::Forms::TextBox());
			this->lblCurso = (gcnew System::Windows::Forms::Label());
			this->cboCurso = (gcnew System::Windows::Forms::ComboBox());
			this->lblHerramienta = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblComoSeValido = (gcnew System::Windows::Forms::Label());
			this->cboComoSeValido = (gcnew System::Windows::Forms::ComboBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnGenerarDatos = (gcnew System::Windows::Forms::Button());
			this->btnVerDetalle = (gcnew System::Windows::Forms::Button());
			this->grpNuevoRegistro->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpNuevoRegistro
			// 
			this->grpNuevoRegistro->Controls->Add(this->cboComoSeValido);
			this->grpNuevoRegistro->Controls->Add(this->lblComoSeValido);
			this->grpNuevoRegistro->Controls->Add(this->comboBox1);
			this->grpNuevoRegistro->Controls->Add(this->lblHerramienta);
			this->grpNuevoRegistro->Controls->Add(this->cboCurso);
			this->grpNuevoRegistro->Controls->Add(this->lblCurso);
			this->grpNuevoRegistro->Controls->Add(this->txtQueSeCambio);
			this->grpNuevoRegistro->Controls->Add(this->lblQueSeCambio);
			this->grpNuevoRegistro->Controls->Add(this->txtResultadoIA);
			this->grpNuevoRegistro->Controls->Add(this->lblResultadoIA);
			this->grpNuevoRegistro->Controls->Add(this->txtQueConsultamos);
			this->grpNuevoRegistro->Controls->Add(this->lblQueConsultamos);
			this->grpNuevoRegistro->Controls->Add(this->cboCategoria);
			this->grpNuevoRegistro->Controls->Add(this->lblCategoriaConsulta);
			this->grpNuevoRegistro->Controls->Add(this->dtpFecha);
			this->grpNuevoRegistro->Controls->Add(this->lblFecha);
			this->grpNuevoRegistro->Location = System::Drawing::Point(14, 15);
			this->grpNuevoRegistro->Name = L"grpNuevoRegistro";
			this->grpNuevoRegistro->Size = System::Drawing::Size(655, 272);
			this->grpNuevoRegistro->TabIndex = 0;
			this->grpNuevoRegistro->TabStop = false;
			this->grpNuevoRegistro->Text = L"Nuevo registro";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(10, 22);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(37, 13);
			this->lblFecha->TabIndex = 0;
			this->lblFecha->Text = L"Fecha";
			this->lblFecha->Click += gcnew System::EventHandler(this, &FrmRegistro::label1_Click);
			// 
			// dtpFecha
			// 
			this->dtpFecha->Location = System::Drawing::Point(13, 38);
			this->dtpFecha->Name = L"dtpFecha";
			this->dtpFecha->Size = System::Drawing::Size(200, 20);
			this->dtpFecha->TabIndex = 1;
			// 
			// lblCategoriaConsulta
			// 
			this->lblCategoriaConsulta->AutoSize = true;
			this->lblCategoriaConsulta->Location = System::Drawing::Point(10, 70);
			this->lblCategoriaConsulta->Name = L"lblCategoriaConsulta";
			this->lblCategoriaConsulta->Size = System::Drawing::Size(123, 13);
			this->lblCategoriaConsulta->TabIndex = 2;
			this->lblCategoriaConsulta->Text = L"Categoría de la consulta";
			// 
			// cboCategoria
			// 
			this->cboCategoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboCategoria->FormattingEnabled = true;
			this->cboCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Tarea", L"Examen", L"LB1", L"EA1", L"Reto",
					L"Proyecto/Trabajo", L"Teoría/Consulta conceptual", L"Depuración de errores", L"Otro"
			});
			this->cboCategoria->Location = System::Drawing::Point(13, 86);
			this->cboCategoria->Name = L"cboCategoria";
			this->cboCategoria->Size = System::Drawing::Size(200, 21);
			this->cboCategoria->TabIndex = 3;
			// 
			// lblQueConsultamos
			// 
			this->lblQueConsultamos->AutoSize = true;
			this->lblQueConsultamos->Location = System::Drawing::Point(10, 119);
			this->lblQueConsultamos->Name = L"lblQueConsultamos";
			this->lblQueConsultamos->Size = System::Drawing::Size(89, 13);
			this->lblQueConsultamos->TabIndex = 4;
			this->lblQueConsultamos->Text = L"Qué consultamos";
			this->lblQueConsultamos->Click += gcnew System::EventHandler(this, &FrmRegistro::label1_Click_1);
			// 
			// txtQueConsultamos
			// 
			this->txtQueConsultamos->Location = System::Drawing::Point(14, 136);
			this->txtQueConsultamos->Multiline = true;
			this->txtQueConsultamos->Name = L"txtQueConsultamos";
			this->txtQueConsultamos->Size = System::Drawing::Size(620, 20);
			this->txtQueConsultamos->TabIndex = 1;
			// 
			// lblResultadoIA
			// 
			this->lblResultadoIA->AutoSize = true;
			this->lblResultadoIA->Location = System::Drawing::Point(10, 169);
			this->lblResultadoIA->Name = L"lblResultadoIA";
			this->lblResultadoIA->Size = System::Drawing::Size(143, 13);
			this->lblResultadoIA->TabIndex = 5;
			this->lblResultadoIA->Text = L"Resultado de la IA (resumen)";
			// 
			// txtResultadoIA
			// 
			this->txtResultadoIA->Location = System::Drawing::Point(14, 189);
			this->txtResultadoIA->Multiline = true;
			this->txtResultadoIA->Name = L"txtResultadoIA";
			this->txtResultadoIA->Size = System::Drawing::Size(620, 20);
			this->txtResultadoIA->TabIndex = 6;
			// 
			// lblQueSeCambio
			// 
			this->lblQueSeCambio->AutoSize = true;
			this->lblQueSeCambio->Location = System::Drawing::Point(10, 220);
			this->lblQueSeCambio->Name = L"lblQueSeCambio";
			this->lblQueSeCambio->Size = System::Drawing::Size(78, 13);
			this->lblQueSeCambio->TabIndex = 7;
			this->lblQueSeCambio->Text = L"Qué se cambió";
			// 
			// txtQueSeCambio
			// 
			this->txtQueSeCambio->Location = System::Drawing::Point(14, 237);
			this->txtQueSeCambio->Name = L"txtQueSeCambio";
			this->txtQueSeCambio->Size = System::Drawing::Size(329, 20);
			this->txtQueSeCambio->TabIndex = 8;
			// 
			// lblCurso
			// 
			this->lblCurso->AutoSize = true;
			this->lblCurso->Location = System::Drawing::Point(391, 22);
			this->lblCurso->Name = L"lblCurso";
			this->lblCurso->Size = System::Drawing::Size(34, 13);
			this->lblCurso->TabIndex = 9;
			this->lblCurso->Text = L"Curso";
			// 
			// cboCurso
			// 
			this->cboCurso->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboCurso->FormattingEnabled = true;
			this->cboCurso->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Algoritmos", L"Matemática", L"Física", L"Lenguaje" });
			this->cboCurso->Location = System::Drawing::Point(394, 37);
			this->cboCurso->Name = L"cboCurso";
			this->cboCurso->Size = System::Drawing::Size(240, 21);
			this->cboCurso->TabIndex = 10;
			// 
			// lblHerramienta
			// 
			this->lblHerramienta->AutoSize = true;
			this->lblHerramienta->Location = System::Drawing::Point(391, 70);
			this->lblHerramienta->Name = L"lblHerramienta";
			this->lblHerramienta->Size = System::Drawing::Size(92, 13);
			this->lblHerramienta->TabIndex = 11;
			this->lblHerramienta->Text = L"Herramienta de IA";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(394, 86);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(240, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// lblComoSeValido
			// 
			this->lblComoSeValido->AutoSize = true;
			this->lblComoSeValido->Location = System::Drawing::Point(391, 220);
			this->lblComoSeValido->Name = L"lblComoSeValido";
			this->lblComoSeValido->Size = System::Drawing::Size(79, 13);
			this->lblComoSeValido->TabIndex = 13;
			this->lblComoSeValido->Text = L"Cómo se validó";
			// 
			// cboComoSeValido
			// 
			this->cboComoSeValido->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboComoSeValido->FormattingEnabled = true;
			this->cboComoSeValido->Location = System::Drawing::Point(394, 236);
			this->cboComoSeValido->Name = L"cboComoSeValido";
			this->cboComoSeValido->Size = System::Drawing::Size(240, 21);
			this->cboComoSeValido->TabIndex = 14;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(27, 303);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(86, 23);
			this->btnGuardar->TabIndex = 1;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(119, 303);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->TabIndex = 2;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			// 
			// btnGenerarDatos
			// 
			this->btnGenerarDatos->Location = System::Drawing::Point(200, 303);
			this->btnGenerarDatos->Name = L"btnGenerarDatos";
			this->btnGenerarDatos->Size = System::Drawing::Size(174, 23);
			this->btnGenerarDatos->TabIndex = 3;
			this->btnGenerarDatos->Text = L"Generar datos aleatorios";
			this->btnGenerarDatos->UseVisualStyleBackColor = true;
			// 
			// btnVerDetalle
			// 
			this->btnVerDetalle->Location = System::Drawing::Point(594, 303);
			this->btnVerDetalle->Name = L"btnVerDetalle";
			this->btnVerDetalle->Size = System::Drawing::Size(75, 23);
			this->btnVerDetalle->TabIndex = 4;
			this->btnVerDetalle->Text = L"Ver Detalle";
			this->btnVerDetalle->UseVisualStyleBackColor = true;
			// 
			// FrmRegistro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 353);
			this->Controls->Add(this->btnVerDetalle);
			this->Controls->Add(this->btnGenerarDatos);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->grpNuevoRegistro);
			this->Name = L"FrmRegistro";
			this->Text = L"AI-TRACE — Registro de Bitácora de Uso de IA";
			this->grpNuevoRegistro->ResumeLayout(false);
			this->grpNuevoRegistro->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
