#pragma once
#include "gestorBitacora.h"
#include "FrmRegistro.h"
#include "FrmPrompts.h"
#include "FrmListado.h"
#include "FrmIndicadores.h"
#include "FrmInstrucciones.h"
#include "FrmCreadores.h"
#include "FrmDashboard.h"
#include <msclr/marshal_cppstd.h>
#include "GeneradorAleatorio.h"
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
		GestorBitacora* gestorB;
	public:
		FrmInicio(void) {
			InitializeComponent();
			gestorB = new GestorBitacora();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmInicio() {
			if (components) { delete components; }
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
			this->menuPrincipal->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuPrincipal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->asdToolStripMenuItem,
					this->listadoDeRegistrosToolStripMenuItem, this->dashBoardToolStripMenuItem, this->indicadoresToolStripMenuItem, this->promptsToolStripMenuItem,
					this->generarDatosToolStripMenuItem, this->instruccionesToolStripMenuItem, this->creadoresToolStripMenuItem, this->mnuSalir
			});
			this->menuPrincipal->Location = System::Drawing::Point(0, 0);
			this->menuPrincipal->Name = L"menuPrincipal";
			this->menuPrincipal->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuPrincipal->Size = System::Drawing::Size(1443, 24);
			this->menuPrincipal->TabIndex = 0;
			// 
			// asdToolStripMenuItem
			// 
			this->asdToolStripMenuItem->Name = L"asdToolStripMenuItem";
			this->asdToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->asdToolStripMenuItem->Text = L"Registro";
			this->asdToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuRegistro_Click);
			// 
			// listadoDeRegistrosToolStripMenuItem
			// 
			this->listadoDeRegistrosToolStripMenuItem->Name = L"listadoDeRegistrosToolStripMenuItem";
			this->listadoDeRegistrosToolStripMenuItem->Size = System::Drawing::Size(124, 20);
			this->listadoDeRegistrosToolStripMenuItem->Text = L"Listado de Registros";
			this->listadoDeRegistrosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuListado_click);
			// 
			// dashBoardToolStripMenuItem
			// 
			this->dashBoardToolStripMenuItem->Name = L"dashBoardToolStripMenuItem";
			this->dashBoardToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->dashBoardToolStripMenuItem->Text = L"Hallazgos";
			this->dashBoardToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuHallazgos_click);
			// 
			// indicadoresToolStripMenuItem
			// 
			this->indicadoresToolStripMenuItem->Name = L"indicadoresToolStripMenuItem";
			this->indicadoresToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->indicadoresToolStripMenuItem->Text = L"Indicadores";
			this->indicadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuIndicadores_click);
			// 
			// promptsToolStripMenuItem
			// 
			this->promptsToolStripMenuItem->Name = L"promptsToolStripMenuItem";
			this->promptsToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->promptsToolStripMenuItem->Text = L"Prompts";
			this->promptsToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuPrompts_click);
			// 
			// generarDatosToolStripMenuItem
			// 
			this->generarDatosToolStripMenuItem->Name = L"generarDatosToolStripMenuItem";
			this->generarDatosToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->generarDatosToolStripMenuItem->Text = L"Generar Datos";
			this->generarDatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuGenerarDatos_Click);
			// 
			// instruccionesToolStripMenuItem
			// 
			this->instruccionesToolStripMenuItem->Name = L"instruccionesToolStripMenuItem";
			this->instruccionesToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->instruccionesToolStripMenuItem->Text = L"Instrucciones";
			this->instruccionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuInstrucciones_Click);
			// 
			// creadoresToolStripMenuItem
			// 
			this->creadoresToolStripMenuItem->Name = L"creadoresToolStripMenuItem";
			this->creadoresToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->creadoresToolStripMenuItem->Text = L"Creadores";
			this->creadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &FrmInicio::mnuCreadores_Click);
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
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1443, 631);
			this->Controls->Add(this->menuPrincipal);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuPrincipal;
			this->Name = L"FrmInicio";
			this->Text = L"FrmInicio";
			this->Load += gcnew System::EventHandler(this, &FrmInicio::FrmInicio_Load);
			this->Click += gcnew System::EventHandler(this, &FrmInicio::FrmInicio_Click);
			this->menuPrincipal->ResumeLayout(false);
			this->menuPrincipal->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mnuGenerarDatos_Click(
		System::Object^ sender, System::EventArgs^ e) {

		int siguienteID = 1;

		for (int i = 0; i < gestorB->ObtenerTotal(); i++) {
			RegistroAI* r = gestorB->ObtenerRegistro(i);

			if (r->getID() >= siguienteID)
				siguienteID = r->getID() + 1;
		}

		GeneradorAleatorio generador(100, siguienteID);
		generador.GenerarDatos(*gestorB);

		MessageBox::Show(L"Se han generaron 100 registros correctamente");
	}

	private: System::Void mnuCreadores_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmCreadores^ creadores = gcnew FrmCreadores(gestorB);
		creadores->MdiParent = this;
		creadores->Show();
	}

	private: System::Void mnuInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmInstrucciones^ instrucciones = gcnew FrmInstrucciones(gestorB);
		instrucciones->MdiParent = this;
		instrucciones->Show();
	}

	private: System::Void mnuRegistro_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmRegistro^ registro = gcnew FrmRegistro(gestorB);
		registro->MdiParent = this;
		registro->Show();
	}
	
	private: System::Void mnuListado_click(System::Object^ sender, System::EventArgs^ e) {
		FrmListado^ listado = gcnew FrmListado(gestorB);
		listado->MdiParent = this;
		listado->Show();
	}

	private: System::Void mnuHallazgos_click(System::Object^ sender, System::EventArgs^ e) {
		// Instanciamos el Dashboard pasándole el puntero de la bitácora en memoria
		FrmDashboard^ dashboard = gcnew FrmDashboard(gestorB);

		// Lo configuramos como hijo MDI para que se abra dentro del formulario principal
		dashboard->MdiParent = this;
		dashboard->Show();
	}

	private: System::Void mnuIndicadores_click(System::Object^ sender, System::EventArgs^ e) {
		FrmIndicadores^ indicador = gcnew FrmIndicadores(gestorB);
		indicador->MdiParent = this;
		indicador->Show();
	}

	private: System::Void mnuPrompts_click(System::Object^ sender, System::EventArgs^ e) {
		FormPrompts^ prompts = gcnew FormPrompts(gestorB);
		prompts->MdiParent = this;
		prompts->Show();
	}
	
	private: System::Void mnuSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void FrmInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		int siguienteID = gestorB->ObtenerTotal() + 1;
		GeneradorAleatorio generador(100, siguienteID);
		generador.GenerarDatos(*gestorB);

		MessageBox::Show(L"se generaron 100 registros!");
	}
private: System::Void FrmInicio_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
