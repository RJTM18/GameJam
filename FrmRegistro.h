
#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"
#include "GeneradorAleatorio.h"
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace msclr::interop;

namespace GameJam {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class FrmRegistro : public System::Windows::Forms::Form
    {
    private:
        GestorBitacora* bitacora;

    public:
        FrmRegistro(GestorBitacora* gestor)
        {
            InitializeComponent();
            bitacora = gestor;

            cboCurso->Items->Clear();
            cboCurso->Items->Add(L"Algoritmos");
            cboCurso->Items->Add(L"Calculo I");
            cboCurso->Items->Add(L"Matematica Discreta");

            comboBox1->Items->Add(L"ChatGPT");
            comboBox1->Items->Add(L"Gemini");
            comboBox1->Items->Add(L"Copilot");
            comboBox1->Items->Add(L"Claude");

            cboComoSeValido->Items->Add(L"Comprobando el resultado");
            cboComoSeValido->Items->Add(L"Ejecutando el programa");
            cboComoSeValido->Items->Add(L"Comparando con apuntes");
        }

    protected:
        ~FrmRegistro()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::GroupBox^ grpNuevoRegistro;
        System::Windows::Forms::Label^ lblFecha;
        System::Windows::Forms::DateTimePicker^ dtpFecha;
        System::Windows::Forms::ComboBox^ cboCategoria;
        System::Windows::Forms::Label^ lblCategoriaConsulta;
        System::Windows::Forms::Label^ lblQueConsultamos;
        System::Windows::Forms::TextBox^ txtQueConsultamos;
        System::Windows::Forms::TextBox^ txtResultadoIA;
        System::Windows::Forms::Label^ lblResultadoIA;
        System::Windows::Forms::ComboBox^ cboCurso;
        System::Windows::Forms::Label^ lblCurso;
        System::Windows::Forms::TextBox^ txtQueSeCambio;
        System::Windows::Forms::Label^ lblQueSeCambio;
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::Label^ lblHerramienta;
        System::Windows::Forms::ComboBox^ cboComoSeValido;
        System::Windows::Forms::Label^ lblComoSeValido;
        System::Windows::Forms::Button^ btnGuardar;
        System::Windows::Forms::Button^ btnLimpiar;
        System::Windows::Forms::Button^ btnGenerarDatos;
        System::Windows::Forms::Button^ btnVerDetalle;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            this->grpNuevoRegistro = (gcnew System::Windows::Forms::GroupBox());
            this->lblFecha = (gcnew System::Windows::Forms::Label());
            this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
            this->cboCategoria = (gcnew System::Windows::Forms::ComboBox());
            this->lblCategoriaConsulta = (gcnew System::Windows::Forms::Label());
            this->lblQueConsultamos = (gcnew System::Windows::Forms::Label());
            this->txtQueConsultamos = (gcnew System::Windows::Forms::TextBox());
            this->txtResultadoIA = (gcnew System::Windows::Forms::TextBox());
            this->lblResultadoIA = (gcnew System::Windows::Forms::Label());
            this->cboCurso = (gcnew System::Windows::Forms::ComboBox());
            this->lblCurso = (gcnew System::Windows::Forms::Label());
            this->txtQueSeCambio = (gcnew System::Windows::Forms::TextBox());
            this->lblQueSeCambio = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->lblHerramienta = (gcnew System::Windows::Forms::Label());
            this->cboComoSeValido = (gcnew System::Windows::Forms::ComboBox());
            this->lblComoSeValido = (gcnew System::Windows::Forms::Label());
            this->btnGuardar = (gcnew System::Windows::Forms::Button());
            this->btnLimpiar = (gcnew System::Windows::Forms::Button());
            this->btnGenerarDatos = (gcnew System::Windows::Forms::Button());
            this->btnVerDetalle = (gcnew System::Windows::Forms::Button());

            this->grpNuevoRegistro->SuspendLayout();
            this->SuspendLayout();

         
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

            this->grpNuevoRegistro->Location = Point(14, 15);
            this->grpNuevoRegistro->Name = L"grpNuevoRegistro";
            this->grpNuevoRegistro->Size = Drawing::Size(655, 272);
            this->grpNuevoRegistro->Text = L"Nuevo registro";

     
            this->lblFecha->Location = Point(10, 22);
            this->lblFecha->AutoSize = true;
            this->lblFecha->Text = L"Fecha";

            this->dtpFecha->Location = Point(13, 38);
            this->dtpFecha->Size = Drawing::Size(200, 20);

         
            this->lblCategoriaConsulta->Location = Point(10, 70);
            this->lblCategoriaConsulta->AutoSize = true;
            this->lblCategoriaConsulta->Text = L"Categoría de la consulta";

            this->cboCategoria->Location = Point(13, 86);
            this->cboCategoria->Size = Drawing::Size(200, 21);
            this->cboCategoria->DropDownStyle = ComboBoxStyle::DropDownList;

            this->cboCategoria->Items->AddRange
            (
                gcnew cli::array<System::Object^>(9)
            {
                L"Tarea",
                    L"Examen",
                    L"LB1",
                    L"EA1",
                    L"Reto",
                    L"Proyecto/Trabajo",
                    L"Teoría/Consulta conceptual",
                    L"Depuración de errores",
                    L"Otro"
            });

      
            this->lblQueConsultamos->Location = Point(10, 119);
            this->lblQueConsultamos->AutoSize = true;
            this->lblQueConsultamos->Text = L"Qué consultamos";

            this->txtQueConsultamos->Location = Point(14, 136);
            this->txtQueConsultamos->Size = Drawing::Size(620, 20);
            this->txtQueConsultamos->Multiline = true;

       
            this->lblResultadoIA->Location = Point(10, 169);
            this->lblResultadoIA->AutoSize = true;
            this->lblResultadoIA->Text = L"Resultado de la IA (resumen)";

            this->txtResultadoIA->Location = Point(14, 189);
            this->txtResultadoIA->Size = Drawing::Size(620, 20);
            this->txtResultadoIA->Multiline = true;

         
            this->lblQueSeCambio->Location = Point(10, 220);
            this->lblQueSeCambio->AutoSize = true;
            this->lblQueSeCambio->Text = L"Qué se cambió";

            this->txtQueSeCambio->Location = Point(14, 237);
            this->txtQueSeCambio->Size = Drawing::Size(329, 20);

           
            this->lblCurso->Location = Point(391, 22);
            this->lblCurso->AutoSize = true;
            this->lblCurso->Text = L"Curso";

            this->cboCurso->Location = Point(394, 37);
            this->cboCurso->Size = Drawing::Size(240, 21);
            this->cboCurso->DropDownStyle = ComboBoxStyle::DropDownList;

        
            this->lblHerramienta->Location = Point(391, 70);
            this->lblHerramienta->AutoSize = true;
            this->lblHerramienta->Text = L"Herramienta de IA";

            this->comboBox1->Location = Point(394, 86);
            this->comboBox1->Size = Drawing::Size(240, 21);
            this->comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

            
            this->lblComoSeValido->Location = Point(391, 220);
            this->lblComoSeValido->AutoSize = true;
            this->lblComoSeValido->Text = L"Cómo se validó";

            this->cboComoSeValido->Location = Point(394, 236);
            this->cboComoSeValido->Size = Drawing::Size(240, 21);
            this->cboComoSeValido->DropDownStyle = ComboBoxStyle::DropDownList;

            
            this->btnGuardar->Location = Point(27, 303);
            this->btnGuardar->Size = Drawing::Size(86, 23);
            this->btnGuardar->Text = L"Guardar";

            this->btnLimpiar->Location = Point(119, 303);
            this->btnLimpiar->Size = Drawing::Size(75, 23);
            this->btnLimpiar->Text = L"Limpiar";

            this->btnGenerarDatos->Location = Point(200, 303);
            this->btnGenerarDatos->Size = Drawing::Size(174, 23);
            this->btnGenerarDatos->Text = L"Generar datos aleatorios";

            this->btnVerDetalle->Location = Point(594, 303);
            this->btnVerDetalle->Size = Drawing::Size(75, 23);
            this->btnVerDetalle->Text = L"Ver Detalle";

         
            this->btnGuardar->Click += gcnew EventHandler(
                this, &FrmRegistro::btnGuardar_Click);

            this->btnLimpiar->Click += gcnew EventHandler(
                this, &FrmRegistro::btnLimpiar_Click);

            this->btnGenerarDatos->Click += gcnew EventHandler(
                this, &FrmRegistro::btnGenerarDatos_Click);

            this->btnVerDetalle->Click += gcnew EventHandler(
                this, &FrmRegistro::btnVerDetalle_Click);

            this->ClientSize = Drawing::Size(792, 353);
            this->Controls->Add(this->btnVerDetalle);
            this->Controls->Add(this->btnGenerarDatos);
            this->Controls->Add(this->btnLimpiar);
            this->Controls->Add(this->btnGuardar);
            this->Controls->Add(this->grpNuevoRegistro);

            this->Name = L"FrmRegistro";
            this->Text = L"AI-TRACE - Registro de Bitácora de Uso de IA";

            this->grpNuevoRegistro->ResumeLayout(false);
            this->grpNuevoRegistro->PerformLayout();
            this->ResumeLayout(false);
        }

#pragma endregion

    private: System::Void btnGuardar_Click(
        System::Object^ sender, System::EventArgs^ e)
    {
        if (cboCurso->SelectedIndex == -1 ||
            cboCategoria->SelectedIndex == -1 ||
            comboBox1->SelectedIndex == -1 ||
            cboComoSeValido->SelectedIndex == -1 ||
            String::IsNullOrWhiteSpace(txtQueConsultamos->Text))
        {
            MessageBox::Show(L"Complete los campos obligatorios");
            return;
        }

        int id = 1;

        for (int i = 0; i < bitacora->ObtenerTotal(); i++)
        {
            RegistroAI* registro = bitacora->ObtenerRegistro(i);

            if (registro->getID() >= id)
            {
                id = registro->getID() + 1;
            }
        }

        string fecha = marshal_as<string>(
            dtpFecha->Value.ToString("dd/MM/yyyy"));

        string curso = marshal_as<string>(cboCurso->Text);
        string categoria = marshal_as<string>(cboCategoria->Text);
        string herramienta = marshal_as<string>(comboBox1->Text);
        string consulta = marshal_as<string>(txtQueConsultamos->Text);
        string resultado = marshal_as<string>(txtResultadoIA->Text);
        string cambios = marshal_as<string>(txtQueSeCambio->Text);
        string validacion = marshal_as<string>(cboComoSeValido->Text);

        RegistroAI* nuevo = new RegistroAI
        (
            id, fecha, curso, categoria, herramienta,
            consulta, resultado, cambios, validacion);

        if (bitacora->Agregar(nuevo))
        {
            MessageBox::Show(L"Registro guardado correctamente");
        }
        else
        {
            delete nuevo;
            MessageBox::Show(L"No se pudo guardar el registro");
        }
    }

    private: System::Void btnLimpiar_Click(
        System::Object^ sender, System::EventArgs^ e)
    {
        
        dtpFecha->Value = DateTime::Today;
        cboCurso->SelectedIndex = -1;
        cboCategoria->SelectedIndex = -1;
        comboBox1->SelectedIndex = -1;
        cboComoSeValido->SelectedIndex = -1;

        txtQueConsultamos->Clear();
        txtResultadoIA->Clear();
        txtQueSeCambio->Clear();
        
    }

    private: System::Void btnGenerarDatos_Click(
        System::Object^ sender, System::EventArgs^ e)
    {
        int siguienteID = 1;

        for (int i = 0; i < bitacora->ObtenerTotal(); i++)
        {
            RegistroAI* registro = bitacora->ObtenerRegistro(i);

            if (registro->getID() >= siguienteID)
            {
                siguienteID = registro->getID() + 1;
            }
        }

        GeneradorAleatorio generador(100, siguienteID);
        generador.GenerarDatos(*bitacora);

        MessageBox::Show(
            L"Total de registros: " +
            Convert::ToString(bitacora->ObtenerTotal().ToString())
        );
    }

    private: System::Void btnVerDetalle_Click(
        System::Object^ sender, System::EventArgs^ e)
    {
        int total = bitacora->ObtenerTotal();

        if (total == 0)
        {
            MessageBox::Show(L"No hay registros guardados");
            return;
        }

        String^ mensaje = L"ULTIMOS REGISTROS\n\n";

        int inicio = total - 10;

        if (inicio < 0)
        {
            inicio = 0;
        }

        for (int i = inicio; i < total; i++)
        {
            RegistroAI* registro = bitacora->ObtenerRegistro(i);

            mensaje += L"ID: " + Convert::ToString(registro->getID()) + L"\n";

            mensaje += L"Curso: " +
                gcnew String(registro->getCurso().c_str()) + L"\n";

            mensaje += L"Consulta: " +
                gcnew String(registro->getConsulta().c_str()) + L"\n\n";
        }

        MessageBox::Show(mensaje, L"Detalle de registros");
    }
    };
}
