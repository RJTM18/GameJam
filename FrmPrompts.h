#pragma once

#include "GestorBitacora.h"
#include "PalabrasClave.h"
#include <string>
#include <msclr/marshal_cppstd.h>
namespace GameJam {
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPrompts
	/// </summary>
	public ref class FormPrompts : public System::Windows::Forms::Form
	{
	private:
		GestorBitacora* bitacora;
	public:
		FormPrompts(GestorBitacora* gestor)
		{
			InitializeComponent();
			bitacora = gestor;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPrompts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartPalabras;
	private: System::Windows::Forms::DataGridView^ dgvPalabras;
	private: System::Windows::Forms::Label^ lblHallazgos0;
	private: System::Windows::Forms::Label^ lblHallazgos;
	private: System::Windows::Forms::Button^ btnAnalisis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPalabra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFrecuencia;
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
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chartPalabras = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dgvPalabras = (gcnew System::Windows::Forms::DataGridView());
			this->colPalabra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFrecuencia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblHallazgos0 = (gcnew System::Windows::Forms::Label());
			this->lblHallazgos = (gcnew System::Windows::Forms::Label());
			this->btnAnalisis = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPalabras))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPalabras))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(25, 25);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(337, 36);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"AI TRACE - Dashboard 3";
			this->lblTitulo->Click += gcnew System::EventHandler(this, &FormPrompts::lblTitulo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"palabras clave de los prompts";
			this->label1->Click += gcnew System::EventHandler(this, &FormPrompts::label1_Click);
			// 
			// chartPalabras
			// 
			chartArea1->Name = L"ChartArea1";
			this->chartPalabras->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartPalabras->Legends->Add(legend1);
			this->chartPalabras->Location = System::Drawing::Point(31, 96);
			this->chartPalabras->Name = L"chartPalabras";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Frecuencia";
			this->chartPalabras->Series->Add(series1);
			this->chartPalabras->Size = System::Drawing::Size(703, 459);
			this->chartPalabras->TabIndex = 2;
			this->chartPalabras->Text = L"chart1";
			this->chartPalabras->Click += gcnew System::EventHandler(this, &FormPrompts::chartPalabras_Click);
			// 
			// dgvPalabras
			// 
			this->dgvPalabras->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPalabras->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->colPalabra,
					this->colFrecuencia
			});
			this->dgvPalabras->Location = System::Drawing::Point(31, 561);
			this->dgvPalabras->Name = L"dgvPalabras";
			this->dgvPalabras->RowHeadersWidth = 51;
			this->dgvPalabras->RowTemplate->Height = 24;
			this->dgvPalabras->Size = System::Drawing::Size(703, 142);
			this->dgvPalabras->TabIndex = 3;
			// 
			// colPalabra
			// 
			this->colPalabra->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->colPalabra->HeaderText = L"Palabra clave";
			this->colPalabra->MinimumWidth = 6;
			this->colPalabra->Name = L"colPalabra";
			this->colPalabra->ReadOnly = true;
			// 
			// colFrecuencia
			// 
			this->colFrecuencia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->colFrecuencia->HeaderText = L"Frecuencia";
			this->colFrecuencia->MinimumWidth = 6;
			this->colFrecuencia->Name = L"colFrecuencia";
			this->colFrecuencia->ReadOnly = true;
			// 
			// lblHallazgos0
			// 
			this->lblHallazgos0->AutoSize = true;
			this->lblHallazgos0->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHallazgos0->Location = System::Drawing::Point(27, 722);
			this->lblHallazgos0->Name = L"lblHallazgos0";
			this->lblHallazgos0->Size = System::Drawing::Size(79, 20);
			this->lblHallazgos0->TabIndex = 4;
			this->lblHallazgos0->Text = L"Hallazgos";
			this->lblHallazgos0->Click += gcnew System::EventHandler(this, &FormPrompts::lblHallazgos0_Click);
			// 
			// lblHallazgos
			// 
			this->lblHallazgos->AutoSize = true;
			this->lblHallazgos->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHallazgos->Location = System::Drawing::Point(27, 742);
			this->lblHallazgos->Name = L"lblHallazgos";
			this->lblHallazgos->Size = System::Drawing::Size(21, 20);
			this->lblHallazgos->TabIndex = 5;
			this->lblHallazgos->Text = L"...";
			// 
			// btnAnalisis
			// 
			this->btnAnalisis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnalisis->Location = System::Drawing::Point(454, 709);
			this->btnAnalisis->Name = L"btnAnalisis";
			this->btnAnalisis->Size = System::Drawing::Size(280, 80);
			this->btnAnalisis->TabIndex = 6;
			this->btnAnalisis->Text = L"Actualizar analisis";
			this->btnAnalisis->UseVisualStyleBackColor = true;
			this->btnAnalisis->Click += gcnew System::EventHandler(this, &FormPrompts::btnAnalisis_Click);
			// 
			// FormPrompts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 795);
			this->Controls->Add(this->btnAnalisis);
			this->Controls->Add(this->lblHallazgos);
			this->Controls->Add(this->lblHallazgos0);
			this->Controls->Add(this->dgvPalabras);
			this->Controls->Add(this->chartPalabras);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"FormPrompts";
			this->Text = L"FormPrompts";
			this->Load += gcnew System::EventHandler(this, &FormPrompts::FormPrompts_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartPalabras))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPalabras))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormPrompts_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAnalisis_Click(System::Object^ sender, System::EventArgs^ e) {
	
		
		
		string palabras[10] = {
	"integral",
	"error",
	"codigo",
	"clase",
	"integracion",
	"area",
	"proposicion",
	"arbol",
	"recorrido",
	"compilacion"
		};

		int cantidades[10] = {0};

		for (int i = 0; i < 10; i++)
		{
			PalabrasClave analisis(bitacora, palabras[i]);

			analisis.analizar();

			cantidades[i] = analisis.getPalabras();
		}

		for (int i = 0; i < 9; i++)
		{
			for (int j = i + 1; j < 10; j++)
			{
				if (cantidades[j] > cantidades[i])
				{
					int auxiliar = cantidades[i];
					cantidades[i] = cantidades[j];
					cantidades[j] = auxiliar;

					string temporal = palabras[i];
					palabras[i] = palabras[j];
					palabras[j] = temporal;
				}
			}
		}

		dgvPalabras->Rows->Clear();

		chartPalabras->Series->Clear();


		Series^ serie = chartPalabras->Series->Add("Frecuencia");
		serie->ChartType = SeriesChartType::Column;
		chartPalabras->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
		chartPalabras->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
		chartPalabras->ChartAreas[0]->AxisX->Interval = 1;

		for (int i = 0; i < 5; i++)
		{
			String^ nombre = gcnew String(palabras[i].c_str());

			dgvPalabras->Rows->Add(nombre, cantidades[i]);
			serie->Points->AddXY(nombre, cantidades[i]);
		}

		if (bitacora->ObtenerTotal() == 0)
		{
			lblHallazgos->Text = "No hay Registros!";
		}

		else if (cantidades[0] == 0)
		{
			lblHallazgos->Text = "No se encontraron palabras clave!";
		}

		else
		{
			lblHallazgos->Text = L"Palabra mas frecuente: " +
				gcnew String(palabras[0].c_str()) +
				L" (" + Convert::ToString(cantidades[0]) +
				L" apariciones)";
		}
		
	}
private: System::Void lblTitulo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chartPalabras_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblHallazgos0_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
