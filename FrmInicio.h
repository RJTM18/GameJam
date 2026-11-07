#pragma once
#include "GestorBitacora.h"
#include "FrmRegistro.h"
#include "FrmPrompts.h"
namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmInicio
	/// </summary>
	public ref class FrmInicio : public System::Windows::Forms::Form {
	private:
		GestorBitacora* bitacora;
	public:
		FrmInicio(void) {
			InitializeComponent();
			bitacora = new GestorBitacora();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmInicio() {
			if (components) { delete components; }
			delete bitacora;
		}
	private: System::Windows::Forms::MenuStrip^ menuPrincipal;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ asdToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listadoDeRegistrosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dashBoardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ indicadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ promptsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generarDatosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ instruccionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mnuSalir;


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
			this->menuPrincipal = (gcnew System::Windows::Forms::MenuStrip());
			this->asdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listadoDeRegistrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dashBoardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->indicadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->promptsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generarDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instruccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuSalir = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuPrincipal->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuPrincipal
			// 
			this->menuPrincipal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->asdToolStripMenuItem,
					this->listadoDeRegistrosToolStripMenuItem, this->dashBoardToolStripMenuItem, this->indicadoresToolStripMenuItem, this->promptsToolStripMenuItem,
					this->generarDatosToolStripMenuItem, this->instruccionesToolStripMenuItem, this->creadoresToolStripMenuItem, this->mnuSalir
			});
			this->menuPrincipal->Location = System::Drawing::Point(0, 0);
			this->menuPrincipal->Name = L"menuPrincipal";
			this->menuPrincipal->Size = System::Drawing::Size(1924, 28);
			this->menuPrincipal->TabIndex = 0;
			// 
			// asdToolStripMenuItem
			// 
			this->asdToolStripMenuItem->Name = L"asdToolStripMenuItem";
			this->asdToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->asdToolStripMenuItem->Text = L"Registro";
			this->asdToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuRegistro_Click);
			// 
			// listadoDeRegistrosToolStripMenuItem
			// 
			this->listadoDeRegistrosToolStripMenuItem->Name = L"listadoDeRegistrosToolStripMenuItem";
			this->listadoDeRegistrosToolStripMenuItem->Size = System::Drawing::Size(157, 24);
			this->listadoDeRegistrosToolStripMenuItem->Text = L"Listado de Registros";
			this->listadoDeRegistrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuListado_click);
			// 
			// dashBoardToolStripMenuItem
			// 
			this->dashBoardToolStripMenuItem->Name = L"dashBoardToolStripMenuItem";
			this->dashBoardToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->dashBoardToolStripMenuItem->Text = L"Hallazgos";
			this->dashBoardToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuHallazgos_click);
			// 
			// indicadoresToolStripMenuItem
			// 
			this->indicadoresToolStripMenuItem->Name = L"indicadoresToolStripMenuItem";
			this->indicadoresToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->indicadoresToolStripMenuItem->Text = L"Indicadores";
			this->indicadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuIndicadores_click);
			// 
			// promptsToolStripMenuItem
			// 
			this->promptsToolStripMenuItem->Name = L"promptsToolStripMenuItem";
			this->promptsToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->promptsToolStripMenuItem->Text = L"Prompts";
			this->promptsToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuPrompts_click);
			// 
			// generarDatosToolStripMenuItem
			// 
			this->generarDatosToolStripMenuItem->Name = L"generarDatosToolStripMenuItem";
			this->generarDatosToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->generarDatosToolStripMenuItem->Text = L"Generar Datos";
			// 
			// instruccionesToolStripMenuItem
			// 
			this->instruccionesToolStripMenuItem->Name = L"instruccionesToolStripMenuItem";
			this->instruccionesToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->instruccionesToolStripMenuItem->Text = L"Instrucciones";
			// 
			// creadoresToolStripMenuItem
			// 
			this->creadoresToolStripMenuItem->Name = L"creadoresToolStripMenuItem";
			this->creadoresToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->creadoresToolStripMenuItem->Text = L"Creadores";
			// 
			// mnuSalir
			// 
			this->mnuSalir->Name = L"mnuSalir";
			this->mnuSalir->Size = System::Drawing::Size(41, 20);
			this->mnuSalir->Text = L"Salir";
			this->mnuSalir->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->mnuSalir->Click += gcnew System::EventHandler(this, &FrmInicio::mnuSalir_Click);
			// 
			// FrmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 777);
			this->Controls->Add(this->menuPrincipal);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuPrincipal;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FrmInicio";
			this->Text = L"FrmInicio";
			this->Load += gcnew System::EventHandler(this, &FrmInicio::FrmInicio_Load);
			this->menuPrincipal->ResumeLayout(false);
			this->menuPrincipal->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mnuRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmRegistro^ registro = gcnew FrmRegistro(bitacora);
		registro->MdiParent = this;
		registro->Show();

		
	}
	private: System::Void mnuListado_click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mnuHallazgos_click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mnuIndicadores_click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mnuPrompts_click(System::Object^ sender, System::EventArgs^ e) {
		FormPrompts^ prompts = gcnew FormPrompts(bitacora);
		prompts->MdiParent = this;
		prompts->Show();
	}
private: System::Void FrmInicio_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void mnuSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
