#pragma once

namespace setup {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Win32;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Your Half-Life folder:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(121, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(338, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Browse...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(174, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Install";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 73);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"- RezWaki\'s HL Launcher setup - v4.0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void CopyDataFile( String^ filename ) {
			IO::File::Copy( "data\\"+filename, textBox1->Text+filename, TRUE );
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog1->ShowDialog();
				 if( IO::File::Exists(folderBrowserDialog1->SelectedPath + "\\hl.exe") ) {
					 textBox1->Text = folderBrowserDialog1->SelectedPath;
					 button2->Enabled = TRUE;
				 }
				 else{
					 MessageBoxA( NULL, "You picked the wrong HL directory, fool!", "Error", MB_ICONERROR );
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 CopyDataFile( "\\hl_launcher.exe" );
			 CopyDataFile( "\\config.dat" );
			 CopyDataFile( "\\valve\\Core_0.dll" );
			 CopyDataFile( "\\valve\\Core_1.dll" );
			 CopyDataFile( "\\valve\\Core_2.dll" );
			 CopyDataFile( "\\valve\\Core_p47.dll" );
			 CopyDataFile( "\\valve\\Core_p48.dll" );
			 CopyDataFile( "\\valve\\default.dll" );
			 CopyDataFile( "\\valve\\lev.dll" );
			 CopyDataFile( "\\valve\\rofi.dll" );
			 CopyDataFile( "\\valve\\cl_dlls\\client.dll" );
			 CopyDataFile( "\\valve\\cl_dlls\\GameUI.dll" );
			 CopyDataFile( "\\valve\\cl_dlls\\particleman.dll" );
			 RegistryKey^ reg = Registry::CurrentUser->OpenSubKey( "Software\\Microsoft\\Windows\\CurrentVersion\\Run", TRUE );
			 reg->SetValue( "HL_Launcher", textBox1->Text+"\\hl_launcher.exe" );
			 MessageBoxA( NULL, "Installation completed successfully!\nIt's highly recommended to restart your computer!", "Information", MB_ICONINFORMATION );
			 Application::Exit();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if( IO::File::Exists(textBox1->Text + "\\hl.exe") ) {
					 button2->Enabled = TRUE;
				 }
		 }
};
}