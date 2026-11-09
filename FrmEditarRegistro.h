#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace msclr::interop;

namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Edicion de un registro: izquierda el registro actual (solo lectura),
	/// derecha los controles con los nuevos valores (precargados).
	/// </summary>
	public ref class FrmEditarRegistro : public System::Windows::Forms::Form {
	private:
		GestorBitacora* gestorB;
		int idActual; // ID del registro cargado (0 = ninguno)

	public:
		FrmEditarRegistro(GestorBitacora* gestor)
		{
			InitializeComponent();
			gestorB = gestor;
			idActual = 0;
			Bloquear();
		}

	protected:
		~FrmEditarRegistro() {
			if (components)	{
				delete components;
			}
		}

	private:
		// --- Parte superior: busqueda por ID ---
		System::Windows::Forms::Label^ lblId;
		System::Windows::Forms::TextBox^ txtId;
		System::Windows::Forms::Button^ btnBuscar;

		// --- Panel con la tabla "actual vs nuevo" ---
		System::Windows::Forms::Panel^ pnlEdicion;
		System::Windows::Forms::Label^ lblColCampo;
		System::Windows::Forms::Label^ lblColActual;
		System::Windows::Forms::Label^ lblColNuevo;

		// Nombres de los campos
		System::Windows::Forms::Label^ lblFecha;
		System::Windows::Forms::Label^ lblCurso;
		System::Windows::Forms::Label^ lblCategoria;
		System::Windows::Forms::Label^ lblHerramienta;
		System::Windows::Forms::Label^ lblConsulta;
		System::Windows::Forms::Label^ lblResultado;
		System::Windows::Forms::Label^ lblCambios;
		System::Windows::Forms::Label^ lblValidacion;

		// Columna izquierda: valores actuales (solo lectura)
		System::Windows::Forms::TextBox^ txtActualFecha;
		System::Windows::Forms::TextBox^ txtActualCurso;
		System::Windows::Forms::TextBox^ txtActualCategoria;
		System::Windows::Forms::TextBox^ txtActualHerramienta;
		System::Windows::Forms::TextBox^ txtActualConsulta;
		System::Windows::Forms::TextBox^ txtActualResultado;
		System::Windows::Forms::TextBox^ txtActualCambios;
		System::Windows::Forms::TextBox^ txtActualValidacion;

		// Columna derecha: valores nuevos (editables)
		System::Windows::Forms::DateTimePicker^ dtpNuevaFecha;
		System::Windows::Forms::ComboBox^ cboNuevoCurso;
		System::Windows::Forms::ComboBox^ cboNuevaCategoria;
		System::Windows::Forms::ComboBox^ cboNuevaHerramienta;
		System::Windows::Forms::TextBox^ txtNuevaConsulta;
		System::Windows::Forms::TextBox^ txtNuevoResultado;
		System::Windows::Forms::TextBox^ txtNuevoCambios;
		System::Windows::Forms::ComboBox^ cboNuevaValidacion;

		// --- Botones inferiores ---
		System::Windows::Forms::Button^ btnEditar;
		System::Windows::Forms::Button^ btnCancelar;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->pnlEdicion = (gcnew System::Windows::Forms::Panel());
			this->lblColCampo = (gcnew System::Windows::Forms::Label());
			this->lblColActual = (gcnew System::Windows::Forms::Label());
			this->lblColNuevo = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblCurso = (gcnew System::Windows::Forms::Label());
			this->lblCategoria = (gcnew System::Windows::Forms::Label());
			this->lblHerramienta = (gcnew System::Windows::Forms::Label());
			this->lblConsulta = (gcnew System::Windows::Forms::Label());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->lblCambios = (gcnew System::Windows::Forms::Label());
			this->lblValidacion = (gcnew System::Windows::Forms::Label());
			this->txtActualFecha = (gcnew System::Windows::Forms::TextBox());
			this->txtActualCurso = (gcnew System::Windows::Forms::TextBox());
			this->txtActualCategoria = (gcnew System::Windows::Forms::TextBox());
			this->txtActualHerramienta = (gcnew System::Windows::Forms::TextBox());
			this->txtActualConsulta = (gcnew System::Windows::Forms::TextBox());
			this->txtActualResultado = (gcnew System::Windows::Forms::TextBox());
			this->txtActualCambios = (gcnew System::Windows::Forms::TextBox());
			this->txtActualValidacion = (gcnew System::Windows::Forms::TextBox());
			this->dtpNuevaFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->cboNuevoCurso = (gcnew System::Windows::Forms::ComboBox());
			this->cboNuevaCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->cboNuevaHerramienta = (gcnew System::Windows::Forms::ComboBox());
			this->txtNuevaConsulta = (gcnew System::Windows::Forms::TextBox());
			this->txtNuevoResultado = (gcnew System::Windows::Forms::TextBox());
			this->txtNuevoCambios = (gcnew System::Windows::Forms::TextBox());
			this->cboNuevaValidacion = (gcnew System::Windows::Forms::ComboBox());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->pnlEdicion->SuspendLayout();
			this->SuspendLayout();
			//
			// lblId
			//
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblId->Location = System::Drawing::Point(30, 24);
			this->lblId->Name = L"lblId";
			this->lblId->TabIndex = 0;
			this->lblId->Text = L"ID del registro a editar:";
			//
			// txtId
			//
			this->txtId->Location = System::Drawing::Point(250, 23);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(110, 20);
			this->txtId->TabIndex = 1;
			this->txtId->TextChanged += gcnew System::EventHandler(this, &FrmEditarRegistro::txtId_TextChanged);
			//
			// btnBuscar
			//
			this->btnBuscar->Location = System::Drawing::Point(375, 20);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(100, 27);
			this->btnBuscar->TabIndex = 2;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &FrmEditarRegistro::btnBuscar_Click);
			//
			// pnlEdicion
			//
			this->pnlEdicion->Controls->Add(this->lblColCampo);
			this->pnlEdicion->Controls->Add(this->lblColActual);
			this->pnlEdicion->Controls->Add(this->lblColNuevo);
			this->pnlEdicion->Controls->Add(this->lblFecha);
			this->pnlEdicion->Controls->Add(this->lblCurso);
			this->pnlEdicion->Controls->Add(this->lblCategoria);
			this->pnlEdicion->Controls->Add(this->lblHerramienta);
			this->pnlEdicion->Controls->Add(this->lblConsulta);
			this->pnlEdicion->Controls->Add(this->lblResultado);
			this->pnlEdicion->Controls->Add(this->lblCambios);
			this->pnlEdicion->Controls->Add(this->lblValidacion);
			this->pnlEdicion->Controls->Add(this->txtActualFecha);
			this->pnlEdicion->Controls->Add(this->txtActualCurso);
			this->pnlEdicion->Controls->Add(this->txtActualCategoria);
			this->pnlEdicion->Controls->Add(this->txtActualHerramienta);
			this->pnlEdicion->Controls->Add(this->txtActualConsulta);
			this->pnlEdicion->Controls->Add(this->txtActualResultado);
			this->pnlEdicion->Controls->Add(this->txtActualCambios);
			this->pnlEdicion->Controls->Add(this->txtActualValidacion);
			this->pnlEdicion->Controls->Add(this->dtpNuevaFecha);
			this->pnlEdicion->Controls->Add(this->cboNuevoCurso);
			this->pnlEdicion->Controls->Add(this->cboNuevaCategoria);
			this->pnlEdicion->Controls->Add(this->cboNuevaHerramienta);
			this->pnlEdicion->Controls->Add(this->txtNuevaConsulta);
			this->pnlEdicion->Controls->Add(this->txtNuevoResultado);
			this->pnlEdicion->Controls->Add(this->txtNuevoCambios);
			this->pnlEdicion->Controls->Add(this->cboNuevaValidacion);
			this->pnlEdicion->Location = System::Drawing::Point(20, 65);
			this->pnlEdicion->Name = L"pnlEdicion";
			this->pnlEdicion->Size = System::Drawing::Size(740, 380);
			this->pnlEdicion->TabIndex = 3;
			//
			// Encabezados de columna
			//
			this->lblColCampo->AutoSize = true;
			this->lblColCampo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblColCampo->Location = System::Drawing::Point(10, 8);
			this->lblColCampo->Name = L"lblColCampo";
			this->lblColCampo->Text = L"Campo";

			this->lblColActual->AutoSize = true;
			this->lblColActual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblColActual->Location = System::Drawing::Point(170, 8);
			this->lblColActual->Name = L"lblColActual";
			this->lblColActual->Text = L"Registro actual";

			this->lblColNuevo->AutoSize = true;
			this->lblColNuevo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblColNuevo->Location = System::Drawing::Point(460, 8);
			this->lblColNuevo->Name = L"lblColNuevo";
			this->lblColNuevo->Text = L"Nuevo valor";
			//
			// Fila 0
			//
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(10, 39);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Text = L"Fecha";

			this->txtActualFecha->Location = System::Drawing::Point(170, 35);
			this->txtActualFecha->Name = L"txtActualFecha";
			this->txtActualFecha->ReadOnly = true;
			this->txtActualFecha->Size = System::Drawing::Size(270, 20);

			this->dtpNuevaFecha->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpNuevaFecha->CustomFormat = L"dd/MM/yyyy";
			this->dtpNuevaFecha->Location = System::Drawing::Point(460, 35);
			this->dtpNuevaFecha->Name = L"dtpNuevaFecha";
			this->dtpNuevaFecha->Size = System::Drawing::Size(270, 20);
			//
			// Fila 1
			//
			this->lblCurso->AutoSize = true;
			this->lblCurso->Location = System::Drawing::Point(10, 81);
			this->lblCurso->Name = L"lblCurso";
			this->lblCurso->Text = L"Curso";

			this->txtActualCurso->Location = System::Drawing::Point(170, 77);
			this->txtActualCurso->Name = L"txtActualCurso";
			this->txtActualCurso->ReadOnly = true;
			this->txtActualCurso->Size = System::Drawing::Size(270, 20);

			this->cboNuevoCurso->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboNuevoCurso->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Algoritmos", L"Calculo I", L"Matematica Discreta" });
			this->cboNuevoCurso->Location = System::Drawing::Point(460, 77);
			this->cboNuevoCurso->Name = L"cboNuevoCurso";
			this->cboNuevoCurso->Size = System::Drawing::Size(270, 21);
			//
			// Fila 2
			//
			this->lblCategoria->AutoSize = true;
			this->lblCategoria->Location = System::Drawing::Point(10, 123);
			this->lblCategoria->Name = L"lblCategoria";
			this->lblCategoria->Text = L"Categoria";

			this->txtActualCategoria->Location = System::Drawing::Point(170, 119);
			this->txtActualCategoria->Name = L"txtActualCategoria";
			this->txtActualCategoria->ReadOnly = true;
			this->txtActualCategoria->Size = System::Drawing::Size(270, 20);

			this->cboNuevaCategoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboNuevaCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Tarea", L"Examen", L"LB1", L"EA1", L"Reto",
					L"Proyecto/Trabajo", L"Teoria/Consulta conceptual", L"Depuracion de errores", L"Otro"
			});
			this->cboNuevaCategoria->Location = System::Drawing::Point(460, 119);
			this->cboNuevaCategoria->Name = L"cboNuevaCategoria";
			this->cboNuevaCategoria->Size = System::Drawing::Size(270, 21);
			//
			// Fila 3
			//
			this->lblHerramienta->AutoSize = true;
			this->lblHerramienta->Location = System::Drawing::Point(10, 165);
			this->lblHerramienta->Name = L"lblHerramienta";
			this->lblHerramienta->Text = L"Herramienta de IA";

			this->txtActualHerramienta->Location = System::Drawing::Point(170, 161);
			this->txtActualHerramienta->Name = L"txtActualHerramienta";
			this->txtActualHerramienta->ReadOnly = true;
			this->txtActualHerramienta->Size = System::Drawing::Size(270, 20);

			this->cboNuevaHerramienta->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboNuevaHerramienta->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ChatGPT", L"Gemini", L"Copilot", L"Claude" });
			this->cboNuevaHerramienta->Location = System::Drawing::Point(460, 161);
			this->cboNuevaHerramienta->Name = L"cboNuevaHerramienta";
			this->cboNuevaHerramienta->Size = System::Drawing::Size(270, 21);
			//
			// Fila 4
			//
			this->lblConsulta->AutoSize = true;
			this->lblConsulta->Location = System::Drawing::Point(10, 207);
			this->lblConsulta->Name = L"lblConsulta";
			this->lblConsulta->Text = L"Que consultamos";

			this->txtActualConsulta->Location = System::Drawing::Point(170, 203);
			this->txtActualConsulta->Name = L"txtActualConsulta";
			this->txtActualConsulta->ReadOnly = true;
			this->txtActualConsulta->Size = System::Drawing::Size(270, 20);

			this->txtNuevaConsulta->Location = System::Drawing::Point(460, 203);
			this->txtNuevaConsulta->Name = L"txtNuevaConsulta";
			this->txtNuevaConsulta->Size = System::Drawing::Size(270, 20);
			//
			// Fila 5
			//
			this->lblResultado->AutoSize = true;
			this->lblResultado->Location = System::Drawing::Point(10, 249);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Text = L"Resultado de la IA";

			this->txtActualResultado->Location = System::Drawing::Point(170, 245);
			this->txtActualResultado->Name = L"txtActualResultado";
			this->txtActualResultado->ReadOnly = true;
			this->txtActualResultado->Size = System::Drawing::Size(270, 20);

			this->txtNuevoResultado->Location = System::Drawing::Point(460, 245);
			this->txtNuevoResultado->Name = L"txtNuevoResultado";
			this->txtNuevoResultado->Size = System::Drawing::Size(270, 20);
			//
			// Fila 6
			//
			this->lblCambios->AutoSize = true;
			this->lblCambios->Location = System::Drawing::Point(10, 291);
			this->lblCambios->Name = L"lblCambios";
			this->lblCambios->Text = L"Que se cambio";

			this->txtActualCambios->Location = System::Drawing::Point(170, 287);
			this->txtActualCambios->Name = L"txtActualCambios";
			this->txtActualCambios->ReadOnly = true;
			this->txtActualCambios->Size = System::Drawing::Size(270, 20);

			this->txtNuevoCambios->Location = System::Drawing::Point(460, 287);
			this->txtNuevoCambios->Name = L"txtNuevoCambios";
			this->txtNuevoCambios->Size = System::Drawing::Size(270, 20);
			//
			// Fila 7: Como se valido (y = 329)
			//
			this->lblValidacion->AutoSize = true;
			this->lblValidacion->Location = System::Drawing::Point(10, 333);
			this->lblValidacion->Name = L"lblValidacion";
			this->lblValidacion->Text = L"Como se valido";

			this->txtActualValidacion->Location = System::Drawing::Point(170, 329);
			this->txtActualValidacion->Name = L"txtActualValidacion";
			this->txtActualValidacion->ReadOnly = true;
			this->txtActualValidacion->Size = System::Drawing::Size(270, 20);

			this->cboNuevaValidacion->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboNuevaValidacion->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Comprobando el resultado", L"Ejecutando el programa",
					L"Comparando con apuntes"
			});
			this->cboNuevaValidacion->Location = System::Drawing::Point(460, 329);
			this->cboNuevaValidacion->Name = L"cboNuevaValidacion";
			this->cboNuevaValidacion->Size = System::Drawing::Size(270, 21);
			//
			// btnEditar
			//
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->Location = System::Drawing::Point(190, 465);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(190, 40);
			this->btnEditar->TabIndex = 4;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &FrmEditarRegistro::btnEditar_Click);
			//
			// btnCancelar
			//
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(400, 465);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(190, 40);
			this->btnCancelar->TabIndex = 5;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &FrmEditarRegistro::btnCancelar_Click);
			//
			// FrmEditarRegistro
			//
			this->components = gcnew System::ComponentModel::Container();
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(780, 530);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->pnlEdicion);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblId);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"FrmEditarRegistro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AI-TRACE - Editar registro";
			this->pnlEdicion->ResumeLayout(false);
			this->pnlEdicion->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	// ------------------------------------------------------------------
	// Metodos auxiliares
	// ------------------------------------------------------------------

	// Deja el formulario sin registro cargado: panel y boton Editar deshabilitados.
	private: void Bloquear() {
		idActual = 0;
		pnlEdicion->Enabled = false;
		btnEditar->Enabled = false;

		txtActualFecha->Clear();
		txtActualCurso->Clear();
		txtActualCategoria->Clear();
		txtActualHerramienta->Clear();
		txtActualConsulta->Clear();
		txtActualResultado->Clear();
		txtActualCambios->Clear();
		txtActualValidacion->Clear();
	}

	// Izquierda: solo lectura
	private: void CargarRegistro(RegistroAI* r) {
		String^ fecha = gcnew String(r->getFecha().c_str());
		String^ curso = gcnew String(r->getCurso().c_str());
		String^ categoria = gcnew String(r->getCategoria().c_str());
		String^ herramienta = gcnew String(r->getHerramientaAI().c_str());
		String^ consulta = gcnew String(r->getConsulta().c_str());
		String^ resultado = gcnew String(r->getResultado().c_str());
		String^ cambios = gcnew String(r->getCambios().c_str());
		String^ validacion = gcnew String(r->getComoSeValido().c_str());

		txtActualFecha->Text = fecha;
		txtActualCurso->Text = curso;
		txtActualCategoria->Text = categoria;
		txtActualHerramienta->Text = herramienta;
		txtActualConsulta->Text = consulta;
		txtActualResultado->Text = resultado;
		txtActualCambios->Text = cambios;
		txtActualValidacion->Text = validacion;

		// Derecha inicialmente con los mismos valores que la columna izquierda
		DateTime f;
		if (DateTime::TryParseExact(fecha, L"d/M/yyyy",
			System::Globalization::CultureInfo::InvariantCulture,
			System::Globalization::DateTimeStyles::None, f)) {
			dtpNuevaFecha->Value = f;
		}
		else { dtpNuevaFecha->Value = DateTime::Today; }

		// FindStringExact devuelve -1 si el valor no esta en la lista (queda vacio)
		cboNuevoCurso->SelectedIndex = cboNuevoCurso->FindStringExact(curso);
		cboNuevaCategoria->SelectedIndex = cboNuevaCategoria->FindStringExact(categoria);
		cboNuevaHerramienta->SelectedIndex = cboNuevaHerramienta->FindStringExact(herramienta);
		cboNuevaValidacion->SelectedIndex = cboNuevaValidacion->FindStringExact(validacion);

		txtNuevaConsulta->Text = consulta;
		txtNuevoResultado->Text = resultado;
		txtNuevoCambios->Text = cambios;

		pnlEdicion->Enabled = true;
		btnEditar->Enabled = true;
	}

	private: string ValorCombo(ComboBox^ cbo, string original) {
		if (cbo->SelectedIndex == -1) { return original; }
		return marshal_as<string>(cbo->Text);
	}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		if (!Int32::TryParse(txtId->Text->Trim(), id)) {
			MessageBox::Show(L"Ingrese un ID numerico valido");
			return;
		}

		RegistroAI* r = gestorB->Buscar(id);
		if (r == nullptr) {
			Bloquear();
			MessageBox::Show(L"No existe un registro con ese ID");
			return;
		}

		idActual = id;
		CargarRegistro(r);
	}

	// Si el usuario cambia el ID despues de buscar, se bloquea hasta que vuelva a buscar.
	private: System::Void txtId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (pnlEdicion->Enabled) { Bloquear(); }
	}

	private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (idActual == 0) { return; }

		RegistroAI* original = gestorB->Buscar(idActual);
		if (original == nullptr) {
			Bloquear();
			MessageBox::Show(L"El registro ya no existe");
			return;
		}

		if (String::IsNullOrWhiteSpace(txtNuevaConsulta->Text)) {
			MessageBox::Show(L"El campo 'Que consultamos' no puede estar vacio");
			return;
		}

		if (MessageBox::Show(L"Guardar los cambios del registro " + idActual.ToString() + L"?",
			L"Confirmar", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
			!= System::Windows::Forms::DialogResult::Yes) {
			return;
		}

		string fecha = marshal_as<string>(
			dtpNuevaFecha->Value.ToString(L"dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture));
		string curso = ValorCombo(cboNuevoCurso, original->getCurso());
		string categoria = ValorCombo(cboNuevaCategoria, original->getCategoria());
		string herramienta = ValorCombo(cboNuevaHerramienta, original->getHerramientaAI());
		string comoSeValido = ValorCombo(cboNuevaValidacion, original->getComoSeValido());
		string consulta = marshal_as<string>(txtNuevaConsulta->Text);
		string resultado = marshal_as<string>(txtNuevoResultado->Text);
		string cambios = marshal_as<string>(txtNuevoCambios->Text);

		// Objeto temporal en la pila: Editar() solo copia sus valores, no guarda el puntero.
		RegistroAI datos(idActual, fecha, curso, categoria, herramienta,
			consulta, resultado, cambios, comoSeValido);

		// El constructor deja validacion = false; se conserva la del registro original.
		datos.setValidacion(original->getValidacion());

		if (gestorB->Editar(idActual, &datos)) {
			MessageBox::Show(L"Registro actualizado correctamente");
			this->Close();
		}
		else {
			MessageBox::Show(L"No se pudo actualizar el registro");
		}
	}

	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}