#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"
#include "GeneradorAleatorio.h"
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
	/// Resumen de FrmInstrucciones
	/// </summary>
	public ref class FrmInstrucciones : public System::Windows::Forms::Form
	{
	private:
		GestorBitacora* bitacora;
	public:
		FrmInstrucciones(GestorBitacora* Bitacora)
		{
			InitializeComponent();
			bitacora = Bitacora;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FrmInstrucciones()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ btnVolver;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmInstrucciones::typeid));
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btnVolver
			// 
			this->btnVolver->Location = System::Drawing::Point(273, 440);
			this->btnVolver->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(165, 47);
			this->btnVolver->TabIndex = 1;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &FrmInstrucciones::btnVolver_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(9, 10);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(705, 418);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// FrmInstrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 525);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->richTextBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"FrmInstrucciones";
			this->Text = L"Instrucciones";
			this->Load += gcnew System::EventHandler(this, &FrmInstrucciones::FrmInstrucciones_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FrmInstrucciones_Load(System::Object^ sender, System::EventArgs^ e) {
	   
	}
	private: System::Void btnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	};
}
