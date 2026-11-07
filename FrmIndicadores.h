#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include <string>
#include "RegistroIA.h"
#include "Estadisticas.h"
namespace GameJam {
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmIndicadores
	/// </summary>
	public ref class FrmIndicadores : public System::Windows::Forms::Form
	{
	private:
		GestorBitacora* bitacora;
	public:
		FrmIndicadores(GestorBitacora* Bitacora)
		{
			InitializeComponent();
			bitacora = Bitacora;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmIndicadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTotalRegistros;
	private: System::Windows::Forms::Label^ lblValidados;
	private: System::Windows::Forms::Label^ lblNoValidados;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ChartIndicadores;
	private: System::Windows::Forms::Label^ hallazgo;
	private: System::Windows::Forms::Label^ lblHallazgos;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblTotalRegistros = (gcnew System::Windows::Forms::Label());
			this->lblValidados = (gcnew System::Windows::Forms::Label());
			this->lblNoValidados = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ChartIndicadores = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->hallazgo = (gcnew System::Windows::Forms::Label());
			this->lblHallazgos = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartIndicadores))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(305, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AI-TRACE | Dashboard 2";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total de registros";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(459, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Validados";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(839, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Sin validar";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblTotalRegistros
			// 
			this->lblTotalRegistros->AutoSize = true;
			this->lblTotalRegistros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTotalRegistros->Location = System::Drawing::Point(95, 129);
			this->lblTotalRegistros->Name = L"lblTotalRegistros";
			this->lblTotalRegistros->Size = System::Drawing::Size(74, 39);
			this->lblTotalRegistros->TabIndex = 4;
			this->lblTotalRegistros->Text = L"100";
			this->lblTotalRegistros->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblValidados
			// 
			this->lblValidados->AutoSize = true;
			this->lblValidados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblValidados->Location = System::Drawing::Point(467, 129);
			this->lblValidados->Name = L"lblValidados";
			this->lblValidados->Size = System::Drawing::Size(66, 39);
			this->lblValidados->TabIndex = 5;
			this->lblValidados->Text = L"0%";
			this->lblValidados->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblNoValidados
			// 
			this->lblNoValidados->AutoSize = true;
			this->lblNoValidados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNoValidados->Location = System::Drawing::Point(852, 129);
			this->lblNoValidados->Name = L"lblNoValidados";
			this->lblNoValidados->Size = System::Drawing::Size(66, 39);
			this->lblNoValidados->TabIndex = 6;
			this->lblNoValidados->Text = L"0%";
			this->lblNoValidados->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(69, 168);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(309, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Porcentaje de consulta según validación";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ChartIndicadores
			// 
			chartArea1->Name = L"ChartArea1";
			this->ChartIndicadores->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->ChartIndicadores->Legends->Add(legend1);
			this->ChartIndicadores->Location = System::Drawing::Point(235, 191);
			this->ChartIndicadores->Name = L"ChartIndicadores";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->ChartIndicadores->Series->Add(series1);
			this->ChartIndicadores->Size = System::Drawing::Size(593, 432);
			this->ChartIndicadores->TabIndex = 8;
			this->ChartIndicadores->Text = L"chart1";
			// 
			// hallazgo
			// 
			this->hallazgo->AutoSize = true;
			this->hallazgo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hallazgo->Location = System::Drawing::Point(46, 626);
			this->hallazgo->Name = L"hallazgo";
			this->hallazgo->Size = System::Drawing::Size(84, 20);
			this->hallazgo->TabIndex = 9;
			this->hallazgo->Text = L"Hallazgos";
			this->hallazgo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblHallazgos
			// 
			this->lblHallazgos->AutoSize = true;
			this->lblHallazgos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHallazgos->Location = System::Drawing::Point(46, 665);
			this->lblHallazgos->Name = L"lblHallazgos";
			this->lblHallazgos->Size = System::Drawing::Size(21, 20);
			this->lblHallazgos->TabIndex = 10;
			this->lblHallazgos->Text = L"...";
			this->lblHallazgos->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// FrmIndicadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1083, 726);
			this->Controls->Add(this->lblHallazgos);
			this->Controls->Add(this->hallazgo);
			this->Controls->Add(this->ChartIndicadores);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblNoValidados);
			this->Controls->Add(this->lblValidados);
			this->Controls->Add(this->lblTotalRegistros);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"FrmIndicadores";
			this->Text = L"FrmIndicadores";
			this->Load += gcnew System::EventHandler(this, &FrmIndicadores::FrmIndicadores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartIndicadores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FrmIndicadores_Load(System::Object^ sender, System::EventArgs^ e) {
		Estadisticas datos(bitacora);
		datos.analizar();

		lblTotalRegistros->Text = Convert::ToString(datos.getTotalConsultas());

		ChartIndicadores->Series[0]->Points->Clear();
		string cursos[3] = {
	    "Calculo I", "Algoritmos", "Matematica Discreta"
		};

		for (int i = 0; i < 3; i++)
		{
			double porcentaje = datos.CalcularPorcentaje(cursos[i]);

			ChartIndicadores->Series[0]->Points->AddXY(gcnew String(cursos[i].c_str()), porcentaje);
		}

	}
	};
}
