#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "BarrasCategoria.h"
#include "PastelCurso.h"
#include <string>

namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class FrmDashboard : public System::Windows::Forms::Form
	{
	private:
		// Puntero compartido del motor de datos y objetos polimórficos de dibujo nativo
		GestorBitacora* bitacora;
		GraficoNativo* graficoBarras;
		GraficoNativo* graficoPastel;

	public:
		// El constructor recibe obligatoriamente la bitácora del sistema
		FrmDashboard(GestorBitacora* gestor)
		{
			InitializeComponent();
			this->bitacora = gestor;

			// Instanciamos los gráficos asignándoles posiciones y dimensiones relativas a los GroupBoxes (426x390)
			this->graficoBarras = new BarrasCategoria(25, 45, 370, 280, this->bitacora);
			this->graficoPastel = new PastelCurso(113, 65, 200, 200, this->bitacora);
		}

	protected:
		// Liberamos la memoria dinámica de los gráficos para que no existan fugas de RAM
		~FrmDashboard()
		{
			if (components)
			{
				delete components;
			}
			delete graficoBarras;
			delete graficoPastel;
		}

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lbelCategoriaMasUsada;
	private: System::Windows::Forms::Label^ lblCursoMayor;
	private: System::Windows::Forms::Label^ lblMesMayor;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->lbelCategoriaMasUsada = (gcnew System::Windows::Forms::Label());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->lblCursoMayor = (gcnew System::Windows::Forms::Label());
			   this->lblMesMayor = (gcnew System::Windows::Forms::Label());
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->lbelCategoriaMasUsada);
			   this->groupBox1->Location = System::Drawing::Point(15, 16);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(426, 390);
			   this->groupBox1->TabIndex = 0;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Registros por categoria (DrawRectangle)";
			   this->groupBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmDashboard::groupBox1_Paint);
			   this->groupBox1->Enter += gcnew System::EventHandler(this, &FrmDashboard::groupBox1_Enter);
			   // 
			   // lbelCategoriaMasUsada
			   // 
			   this->lbelCategoriaMasUsada->AutoSize = true;
			   this->lbelCategoriaMasUsada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->lbelCategoriaMasUsada->Location = System::Drawing::Point(15, 364);
			   this->lbelCategoriaMasUsada->Name = L"lbelCategoriaMasUsada";
			   this->lbelCategoriaMasUsada->Size = System::Drawing::Size(129, 13);
			   this->lbelCategoriaMasUsada->TabIndex = 0;
			   this->lbelCategoriaMasUsada->Text = L"Categoria mas usada:";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->lblCursoMayor);
			   this->groupBox2->Location = System::Drawing::Point(460, 17);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(526, 389);
			   this->groupBox2->TabIndex = 1;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Uso de IA por curso (DrawPie)";
			   this->groupBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmDashboard::groupBox2_Paint);
			   this->groupBox2->Enter += gcnew System::EventHandler(this, &FrmDashboard::groupBox2_Enter);
			   // 
			   // lblCursoMayor
			   // 
			   this->lblCursoMayor->AutoSize = true;
			   this->lblCursoMayor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblCursoMayor->Location = System::Drawing::Point(17, 363);
			   this->lblCursoMayor->Name = L"lblCursoMayor";
			   this->lblCursoMayor->Size = System::Drawing::Size(129, 13);
			   this->lblCursoMayor->TabIndex = 0;
			   this->lblCursoMayor->Text = L"Curso con mayor uso:";
			   // 
			   // lblMesMayor
			   // 
			   this->lblMesMayor->AutoSize = true;
			   this->lblMesMayor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMesMayor->Location = System::Drawing::Point(15, 418);
			   this->lblMesMayor->Name = L"lblMesMayor";
			   this->lblMesMayor->Size = System::Drawing::Size(128, 15);
			   this->lblMesMayor->TabIndex = 2;
			   this->lblMesMayor->Text = L"Mes de mayor uso:";
			   // 
			   // FrmDashboard
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1021, 455);
			   this->Controls->Add(this->lblMesMayor);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Name = L"FrmDashboard";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"AI TRACE - Dashboard 1 : Hallazgos Principales";
			   this->Load += gcnew System::EventHandler(this, &FrmDashboard::FrmDashboard_Load);
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void FrmDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
		int totalReg = bitacora->ObtenerTotal();
		if (totalReg == 0) {
			lbelCategoriaMasUsada->Text = L"Categoria mas usada: Sin registros cargados";
			lblCursoMayor->Text = L"Curso con mayor uso: Sin registros cargados";
			lblMesMayor->Text = L"Mes de mayor uso: Sin registros cargados";
			return;
		}

		// --- HALLAZGO 1: Categoría Más Usada (Recorrido e Indicador de Texto) ---
		std::string categorias[9] = { "Tarea", "Examen", "LB1", "EA1", "Reto", "Proyecto/Trabajo", "Teoria/Consulta conceptual", "Depuracion de errores", "Otro" };
		int conteoCat[9] = { 0 };
		for (int i = 0; i < totalReg; i++) {
			std::string c = bitacora->ObtenerRegistro(i)->getCategoria();
			for (int j = 0; j < 9; j++) {
				if (c == categorias[j]) { conteoCat[j]++; break; }
			}
		}
		int maxCat = 0;
		for (int j = 1; j < 9; j++) {
			if (conteoCat[j] > conteoCat[maxCat]) maxCat = j;
		}
		lbelCategoriaMasUsada->Text = L"Categoria mas usada: " + gcnew String(categorias[maxCat].c_str()) + L" (" + conteoCat[maxCat] + L" consultas)";

		// --- HALLAZGO 2: Curso Con Mayor Uso ---
		std::string cursos[3] = { "Algoritmos", "Calculo I", "Matematica Discreta" };
		int conteoCur[3] = { 0 };
		for (int i = 0; i < totalReg; i++) {
			std::string c = bitacora->ObtenerRegistro(i)->getCurso();
			for (int j = 0; j < 3; j++) {
				if (c == cursos[j]) { conteoCur[j]++; break; }
			}
		}
		int maxCur = 0;
		for (int j = 1; j < 3; j++) {
			if (conteoCur[j] > conteoCur[maxCur]) maxCur = j;
		}
		lblCursoMayor->Text = L"Curso con mayor uso: " + gcnew String(cursos[maxCur].c_str()) + L" (" + conteoCur[maxCur] + L" consultas)";

		// --- HALLAZGO 3: Mes de Mayor Uso (Búsqueda manual de subcadena en formato dd/mm/yyyy) ---
		int conteoMeses[13] = { 0 };
		for (int i = 0; i < totalReg; i++) {
			std::string fecha = bitacora->ObtenerRegistro(i)->getFecha();
			size_t p1 = fecha.find('/');
			size_t p2 = fecha.find('/', p1 + 1);
			if (p1 != std::string::npos && p2 != std::string::npos) {
				std::string strMes = fecha.substr(p1 + 1, p2 - p1 - 1);
				int numMes = std::stoi(strMes);
				if (numMes >= 1 && numMes <= 12) conteoMeses[numMes]++;
			}
		}
		std::string nombresMeses[13] = { "", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Setiembre", "Octubre", "Noviembre", "Diciembre" };
		int maxMes = 1;
		for (int m = 2; m <= 12; m++) {
			if (conteoMeses[m] > conteoMeses[maxMes]) maxMes = m;
		}
		lblMesMayor->Text = L"Mes de mayor uso: " + gcnew String(nombresMeses[maxMes].c_str()) + L" (" + conteoMeses[maxMes] + L" registros concentrados)";
	}

		   // Manejador Paint de la caja de Categorías
	private: System::Void groupBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
		graficoBarras->Dibujar(g);
	}

		   // Manejador Paint de la caja de Cursos
	private: System::Void groupBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
		graficoPastel->Dibujar(g);
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
