#pragma once
#include "pch.h"
#include "GestorBitacora.h"

namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FrmEliminarRegistro : public System::Windows::Forms::Form
	{
	private:
		// Puntero para conectarse al gestor compartido de datos en memoria
		GestorBitacora* bitacora;

	public:
		// Constructor adaptado que recibe la bitácora del sistema
		FrmEliminarRegistro(GestorBitacora* gestorShared)
		{
			InitializeComponent();
			this->bitacora = gestorShared;
		}

	protected:
		// Destructor para la liberación correcta de recursos visuales
		~FrmEliminarRegistro()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Button^ btnAceptar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->txtID = (gcnew System::Windows::Forms::TextBox());
			   this->btnAceptar = (gcnew System::Windows::Forms::Button());
			   this->btnCancelar = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			   this->label1->Location = System::Drawing::Point(25, 30);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(225, 19);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Ingrese el ID del registro a eliminar:";
			   // 
			   // txtID
			   // 
			   this->txtID->Location = System::Drawing::Point(28, 60);
			   this->txtID->Name = L"txtID";
			   this->txtID->Size = System::Drawing::Size(235, 20);
			   this->txtID->TabIndex = 1;
			   // 
			   // btnAceptar
			   // 
			   this->btnAceptar->Location = System::Drawing::Point(50, 105);
			   this->btnAceptar->Name = L"btnAceptar";
			   this->btnAceptar->Size = System::Drawing::Size(85, 30);
			   this->btnAceptar->TabIndex = 2;
			   this->btnAceptar->Text = L"Eliminar";
			   this->btnAceptar->UseVisualStyleBackColor = true;
			   this->btnAceptar->Click += gcnew System::EventHandler(this, &FrmEliminarRegistro::btnAceptar_Click);
			   // 
			   // btnCancelar
			   // 
			   this->btnCancelar->Location = System::Drawing::Point(155, 105);
			   this->btnCancelar->Name = L"btnCancelar";
			   this->btnCancelar->Size = System::Drawing::Size(85, 30);
			   this->btnCancelar->TabIndex = 3;
			   this->btnCancelar->Text = L"Cancelar";
			   this->btnCancelar->UseVisualStyleBackColor = true;
			   this->btnCancelar->Click += gcnew System::EventHandler(this, &FrmEliminarRegistro::btnCancelar_Click);
			   // 
			   // FrmEliminarRegistro
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(294, 161);
			   this->Controls->Add(this->btnCancelar);
			   this->Controls->Add(this->btnAceptar);
			   this->Controls->Add(this->txtID);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"FrmEliminarRegistro";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			   this->Text = L"Eliminar Registro AI-TRACE";
			   this->Load += gcnew System::EventHandler(this, &FrmEliminarRegistro::FrmEliminarRegistro_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion


	private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txtID->Text)) {
			MessageBox::Show(L"Por favor, complete el campo del ID.", L"Campo vacio",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int idAEliminar;
		if (Int32::TryParse(txtID->Text, idAEliminar)) {

			// Invoca directamente al método Borrar(id) existente
			if (bitacora->Borrar(idAEliminar)) {
				MessageBox::Show(L"El registro con ID " + idAEliminar + L" ha sido eliminado con exito!",
					L"Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			}
			else {
				MessageBox::Show(L"No se encontro ningun registro con el ID especificado.",
					L"ID no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

		}
		else {
			MessageBox::Show(L"Por favor, ingrese un numero entero valido.",
				L"Tipo de dato incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		   // Cierra la ventana de diálogo sin modificar el vector
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void FrmEliminarRegistro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
