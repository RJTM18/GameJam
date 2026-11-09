#pragma once
#include "GestorBitacora.h"

namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmEditarRegistro
	/// </summary>
	public ref class FrmEditarRegistro : public System::Windows::Forms::Form {
	private:
		GestorBitacora* gestorB;
	public:
		FrmEditarRegistro(GestorBitacora* gestor)
		{
			InitializeComponent();
			gestorB = gestor;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmEditarRegistro()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// FrmEditarRegistro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"FrmEditarRegistro";
			this->Text = L"FrmEditarRegistro";
			this->Load += gcnew System::EventHandler(this, &FrmEditarRegistro::FrmEditarRegistro_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FrmEditarRegistro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
