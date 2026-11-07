#include "pch.h"
#include "FrmInicio.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew GameJam::FrmInicio());
    return 0;
}
