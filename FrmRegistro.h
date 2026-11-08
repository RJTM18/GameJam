#pragma once
#include "pch.h"
#include "GestorBitacora.h"
#include "RegistroIA.h"
#include "GeneradorAleatorio.h"
#include "FrmEditarRegistro.h"
#include "FrmEliminarRegistro.h"
#include <string>
#include <msclr/marshal_cppstd.h>
#include "FrmListado.h"

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
        GestorBitacora* gestorB;

    public:
        FrmRegistro(GestorBitacora* gestor) {
            InitializeComponent();
            gestorB = gestor;
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
    private: System::Windows::Forms::Button^ btnEditarRegistro;
    private: System::Windows::Forms::Button^ btnEliminar;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            this->grpNuevoRegistro = (gcnew System::Windows::Forms::GroupBox());
            this->btnGuardar = (gcnew System::Windows::Forms::Button());
            this->btnLimpiar = (gcnew System::Windows::Forms::Button());
            this->btnEditarRegistro = (gcnew System::Windows::Forms::Button());
            this->btnEliminar = (gcnew System::Windows::Forms::Button());
            this->btnGenerarDatos = (gcnew System::Windows::Forms::Button());
            this->btnVerDetalle = (gcnew System::Windows::Forms::Button());
            this->cboComoSeValido = (gcnew System::Windows::Forms::ComboBox());
            this->lblComoSeValido = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->lblHerramienta = (gcnew System::Windows::Forms::Label());
            this->cboCurso = (gcnew System::Windows::Forms::ComboBox());
            this->lblCurso = (gcnew System::Windows::Forms::Label());
            this->txtQueSeCambio = (gcnew System::Windows::Forms::TextBox());
            this->lblQueSeCambio = (gcnew System::Windows::Forms::Label());
            this->txtResultadoIA = (gcnew System::Windows::Forms::TextBox());
            this->lblResultadoIA = (gcnew System::Windows::Forms::Label());
            this->txtQueConsultamos = (gcnew System::Windows::Forms::TextBox());
            this->lblQueConsultamos = (gcnew System::Windows::Forms::Label());
            this->cboCategoria = (gcnew System::Windows::Forms::ComboBox());
            this->lblCategoriaConsulta = (gcnew System::Windows::Forms::Label());
            this->dtpFecha = (gcnew System::Windows::Forms::DateTimePicker());
            this->lblFecha = (gcnew System::Windows::Forms::Label());
            this->grpNuevoRegistro->SuspendLayout();
            this->SuspendLayout();
            // 
            // grpNuevoRegistro
            // 
            this->grpNuevoRegistro->Controls->Add(this->btnGuardar);
            this->grpNuevoRegistro->Controls->Add(this->btnLimpiar);
            this->grpNuevoRegistro->Controls->Add(this->btnEditarRegistro);
            this->grpNuevoRegistro->Controls->Add(this->btnEliminar);
            this->grpNuevoRegistro->Controls->Add(this->btnGenerarDatos);
            this->grpNuevoRegistro->Controls->Add(this->btnVerDetalle);
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
            this->grpNuevoRegistro->Location = System::Drawing::Point(29, 22);
            this->grpNuevoRegistro->Name = L"grpNuevoRegistro";
            this->grpNuevoRegistro->Size = System::Drawing::Size(664, 370);
            this->grpNuevoRegistro->TabIndex = 4;
            this->grpNuevoRegistro->TabStop = false;
            this->grpNuevoRegistro->Text = L"Nuevo registro";
            // 
            // btnGuardar
            // 
            this->btnGuardar->Location = System::Drawing::Point(43, 296);
            this->btnGuardar->Name = L"btnGuardar";
            this->btnGuardar->Size = System::Drawing::Size(104, 23);
            this->btnGuardar->TabIndex = 3;
            this->btnGuardar->Text = L"Guardar";
            this->btnGuardar->Click += gcnew System::EventHandler(this, &FrmRegistro::btnGuardar_Click);
            // 
            // btnLimpiar
            // 
            this->btnLimpiar->Location = System::Drawing::Point(167, 296);
            this->btnLimpiar->Name = L"btnLimpiar";
            this->btnLimpiar->Size = System::Drawing::Size(104, 23);
            this->btnLimpiar->TabIndex = 2;
            this->btnLimpiar->Text = L"Limpiar";
            this->btnLimpiar->Click += gcnew System::EventHandler(this, &FrmRegistro::btnLimpiar_Click);
            // 
            // btnEditarRegistro
            // 
            this->btnEditarRegistro->Location = System::Drawing::Point(107, 325);
            this->btnEditarRegistro->Name = L"btnEditarRegistro";
            this->btnEditarRegistro->Size = System::Drawing::Size(103, 23);
            this->btnEditarRegistro->TabIndex = 1;
            this->btnEditarRegistro->Text = L"Editar un Registro";
            this->btnEditarRegistro->Click += gcnew System::EventHandler(this, &FrmRegistro::btnEditar_click);
            // 
            // btnEliminar
            // 
            this->btnEliminar->Location = System::Drawing::Point(238, 325);
            this->btnEliminar->Name = L"btnEliminar";
            this->btnEliminar->Size = System::Drawing::Size(103, 23);
            this->btnEliminar->TabIndex = 1;
            this->btnEliminar->Text = L"Eliminar Registro";
            this->btnEliminar->Click += gcnew System::EventHandler(this, &FrmRegistro::btnEliminarRegistro_click);
            // 
            // btnGenerarDatos
            // 
            this->btnGenerarDatos->Location = System::Drawing::Point(292, 296);
            this->btnGenerarDatos->Name = L"btnGenerarDatos";
            this->btnGenerarDatos->Size = System::Drawing::Size(156, 23);
            this->btnGenerarDatos->TabIndex = 1;
            this->btnGenerarDatos->Text = L"Generar datos aleatorios";
            this->btnGenerarDatos->Click += gcnew System::EventHandler(this, &FrmRegistro::btnGenerarDatos_Click);
            // 
            // btnVerDetalle
            // 
            this->btnVerDetalle->Location = System::Drawing::Point(545, 296);
            this->btnVerDetalle->Name = L"btnVerDetalle";
            this->btnVerDetalle->Size = System::Drawing::Size(75, 23);
            this->btnVerDetalle->TabIndex = 0;
            this->btnVerDetalle->Text = L"Ver Detalle";
            this->btnVerDetalle->Click += gcnew System::EventHandler(this, &FrmRegistro::btnVerDetalle_Click);
            // 
            // cboComoSeValido
            // 
            this->cboComoSeValido->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cboComoSeValido->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Comprobando el resultado", L"Ejecutando el programa",
                    L"Comparando con apuntes"
            });
            this->cboComoSeValido->Location = System::Drawing::Point(352, 254);
            this->cboComoSeValido->Name = L"cboComoSeValido";
            this->cboComoSeValido->Size = System::Drawing::Size(268, 21);
            this->cboComoSeValido->TabIndex = 0;
            // 
            // lblComoSeValido
            // 
            this->lblComoSeValido->AutoSize = true;
            this->lblComoSeValido->Location = System::Drawing::Point(349, 235);
            this->lblComoSeValido->Name = L"lblComoSeValido";
            this->lblComoSeValido->Size = System::Drawing::Size(85, 13);
            this->lblComoSeValido->TabIndex = 1;
            this->lblComoSeValido->Text = L"Como se valido: ";
            // 
            // comboBox1
            // 
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ChatGPT", L"Gemini", L"Copilot", L"Claude" });
            this->comboBox1->Location = System::Drawing::Point(407, 105);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 21);
            this->comboBox1->TabIndex = 2;
            // 
            // lblHerramienta
            // 
            this->lblHerramienta->AutoSize = true;
            this->lblHerramienta->Location = System::Drawing::Point(404, 87);
            this->lblHerramienta->Name = L"lblHerramienta";
            this->lblHerramienta->Size = System::Drawing::Size(92, 13);
            this->lblHerramienta->TabIndex = 3;
            this->lblHerramienta->Text = L"Herramienta de IA";
            // 
            // cboCurso
            // 
            this->cboCurso->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cboCurso->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Algoritmos", L"Calculo I", L"Matematica Discreta" });
            this->cboCurso->Location = System::Drawing::Point(407, 58);
            this->cboCurso->Name = L"cboCurso";
            this->cboCurso->Size = System::Drawing::Size(121, 21);
            this->cboCurso->TabIndex = 4;
            // 
            // lblCurso
            // 
            this->lblCurso->AutoSize = true;
            this->lblCurso->Location = System::Drawing::Point(404, 39);
            this->lblCurso->Name = L"lblCurso";
            this->lblCurso->Size = System::Drawing::Size(34, 13);
            this->lblCurso->TabIndex = 5;
            this->lblCurso->Text = L"Curso";
            // 
            // txtQueSeCambio
            // 
            this->txtQueSeCambio->Location = System::Drawing::Point(43, 254);
            this->txtQueSeCambio->Name = L"txtQueSeCambio";
            this->txtQueSeCambio->Size = System::Drawing::Size(277, 20);
            this->txtQueSeCambio->TabIndex = 6;
            // 
            // lblQueSeCambio
            // 
            this->lblQueSeCambio->AutoSize = true;
            this->lblQueSeCambio->Location = System::Drawing::Point(40, 235);
            this->lblQueSeCambio->Name = L"lblQueSeCambio";
            this->lblQueSeCambio->Size = System::Drawing::Size(78, 13);
            this->lblQueSeCambio->TabIndex = 7;
            this->lblQueSeCambio->Text = L"Que se cambio";
            // 
            // txtResultadoIA
            // 
            this->txtResultadoIA->Location = System::Drawing::Point(43, 202);
            this->txtResultadoIA->Multiline = true;
            this->txtResultadoIA->Name = L"txtResultadoIA";
            this->txtResultadoIA->Size = System::Drawing::Size(577, 20);
            this->txtResultadoIA->TabIndex = 8;
            // 
            // lblResultadoIA
            // 
            this->lblResultadoIA->AutoSize = true;
            this->lblResultadoIA->Location = System::Drawing::Point(40, 186);
            this->lblResultadoIA->Name = L"lblResultadoIA";
            this->lblResultadoIA->Size = System::Drawing::Size(143, 13);
            this->lblResultadoIA->TabIndex = 9;
            this->lblResultadoIA->Text = L"Resultado de la IA (resumen)";
            // 
            // txtQueConsultamos
            // 
            this->txtQueConsultamos->Location = System::Drawing::Point(43, 153);
            this->txtQueConsultamos->Multiline = true;
            this->txtQueConsultamos->Name = L"txtQueConsultamos";
            this->txtQueConsultamos->Size = System::Drawing::Size(577, 20);
            this->txtQueConsultamos->TabIndex = 10;
            // 
            // lblQueConsultamos
            // 
            this->lblQueConsultamos->AutoSize = true;
            this->lblQueConsultamos->Location = System::Drawing::Point(40, 135);
            this->lblQueConsultamos->Name = L"lblQueConsultamos";
            this->lblQueConsultamos->Size = System::Drawing::Size(89, 13);
            this->lblQueConsultamos->TabIndex = 11;
            this->lblQueConsultamos->Text = L"Que consultamos";
            // 
            // cboCategoria
            // 
            this->cboCategoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->cboCategoria->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
                L"Tarea", L"Examen", L"LB1", L"EA1", L"Reto",
                    L"Proyecto/Trabajo", L"Teoría/Consulta conceptual", L"Depuración de errores", L"Otro"
            });
            this->cboCategoria->Location = System::Drawing::Point(43, 105);
            this->cboCategoria->Name = L"cboCategoria";
            this->cboCategoria->Size = System::Drawing::Size(121, 21);
            this->cboCategoria->TabIndex = 12;
            // 
            // lblCategoriaConsulta
            // 
            this->lblCategoriaConsulta->AutoSize = true;
            this->lblCategoriaConsulta->Location = System::Drawing::Point(40, 87);
            this->lblCategoriaConsulta->Name = L"lblCategoriaConsulta";
            this->lblCategoriaConsulta->Size = System::Drawing::Size(121, 13);
            this->lblCategoriaConsulta->TabIndex = 13;
            this->lblCategoriaConsulta->Text = L"Categoria de la consulta";
            // 
            // dtpFecha
            // 
            this->dtpFecha->Location = System::Drawing::Point(43, 59);
            this->dtpFecha->Name = L"dtpFecha";
            this->dtpFecha->Size = System::Drawing::Size(200, 20);
            this->dtpFecha->TabIndex = 14;
            // 
            // lblFecha
            // 
            this->lblFecha->AutoSize = true;
            this->lblFecha->Location = System::Drawing::Point(40, 39);
            this->lblFecha->Name = L"lblFecha";
            this->lblFecha->Size = System::Drawing::Size(37, 13);
            this->lblFecha->TabIndex = 15;
            this->lblFecha->Text = L"Fecha";
            // 
            // FrmRegistro
            // 
            this->ClientSize = System::Drawing::Size(793, 496);
            this->Controls->Add(this->grpNuevoRegistro);
            this->Name = L"FrmRegistro";
            this->Text = L"AI-TRACE - Registro de Bitacora de Uso de IA";
            this->grpNuevoRegistro->ResumeLayout(false);
            this->grpNuevoRegistro->PerformLayout();
            this->ResumeLayout(false);

        }

#pragma endregion

    private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
        if (cboCurso->SelectedIndex == -1 ||
            cboCategoria->SelectedIndex == -1 ||
            comboBox1->SelectedIndex == -1 ||
            cboComoSeValido->SelectedIndex == -1 ||
            String::IsNullOrWhiteSpace(txtQueConsultamos->Text)) {
            MessageBox::Show(L"Complete los campos obligatorios");
            return;
        }

        int nuevaID = gestorB->getUltimoIDRegistro() + 1;
        string fecha = marshal_as<string>(dtpFecha->Value.ToString("dd/MM/yyyy"));
        string curso = marshal_as<string>(cboCurso->Text);
        string categoria = marshal_as<string>(cboCategoria->Text);
        string herramienta = marshal_as<string>(comboBox1->Text);
        string consulta = marshal_as<string>(txtQueConsultamos->Text);
        string resultado = marshal_as<string>(txtResultadoIA->Text);
        string cambios = marshal_as<string>(txtQueSeCambio->Text);
        string validacion = marshal_as<string>(cboComoSeValido->Text);

        RegistroAI* nuevo = new RegistroAI (
            nuevaID, fecha, curso, categoria, herramienta,
            consulta, resultado, cambios, validacion);

        if (gestorB->Agregar(nuevo)) { MessageBox::Show(L"Registro guardado correctamente"); }
        else {
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

    private: System::Void btnGenerarDatos_Click(System::Object^ sender, System::EventArgs^ e) {
        int siguienteID = 1;

        for (int i = 0; i < gestorB->ObtenerTotal(); i++) {
            RegistroAI* registro = gestorB->ObtenerRegistro(i);
            if (registro->getID() >= siguienteID) { siguienteID = registro->getID() + 1; }
        }

        GeneradorAleatorio generador(100, siguienteID);
        generador.GenerarDatos(*gestorB);

        MessageBox::Show(L"Total de registros: " + 
            Convert::ToString(gestorB->ObtenerTotal().ToString())
        );
    }

    private: System::Void btnVerDetalle_Click(System::Object^ sender, System::EventArgs^ e) {
        FrmListado^ listado = gcnew FrmListado(gestorB);
        listado->MdiParent = this->MdiParent;
        listado->Show();
    }
    private: System::Void btnEditar_click(System::Object^ sender, System::EventArgs^ e) {
        FrmEditarRegistro^ edicion = gcnew FrmEditarRegistro(gestorB);
        edicion->Show();
    }
    private: System::Void btnEliminarRegistro_click(System::Object^ sender, System::EventArgs^ e) {
        FrmEliminarRegistro^ eliminacion = gcnew FrmEliminarRegistro(gestorB);
        eliminacion->Show();
    }
};
}
