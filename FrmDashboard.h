#pragma once

namespace GameJam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmDashboard
	/// </summary>
	public ref class FrmDashboard : public System::Windows::Forms::Form
	{
	public:
		FrmDashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmDashboard()
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
			// FrmDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1880, 780);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"FrmDashboard";
			this->Text = L"FrmDashboard";
			this->Load += gcnew System::EventHandler(this, &FrmDashboard::FrmDashboard_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FrmDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
