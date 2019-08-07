#pragma once

namespace hl_launcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label11;



	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(455, 22);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseDown);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(117, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"launcher";
			this->label4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label4_MouseDown);
			this->label4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label4_MouseUp);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(80, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L".Av";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			this->label3->MouseEnter += gcnew System::EventHandler(this, &MyForm::label3_MouseEnter);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &MyForm::label3_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(433, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &MyForm::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &MyForm::label2_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(67, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Half-Life";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label1_MouseDown);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label1_MouseUp);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 34);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Current protocol:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"46", L"47", L"48"});
			this->comboBox1->Location = System::Drawing::Point(139, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(66, 28);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(211, 34);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 20);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Your mod:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(294, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 27);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"valve";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(193, 131);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(455, 261);
			this->panel2->TabIndex = 6;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::Color::White;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Rofi\'s DLL", L"Standard", L"Lev DLL"});
			this->comboBox2->Location = System::Drawing::Point(223, 97);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(119, 28);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(96, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 20);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Current client.dll:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Peru;
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(373, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Visit FB group";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			this->label10->MouseEnter += gcnew System::EventHandler(this, &MyForm::label10_MouseEnter);
			this->label10->MouseLeave += gcnew System::EventHandler(this, &MyForm::label10_MouseLeave);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Peru;
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(294, 238);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 13);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Visit VK group";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			this->label9->MouseEnter += gcnew System::EventHandler(this, &MyForm::label9_MouseEnter);
			this->label9->MouseLeave += gcnew System::EventHandler(this, &MyForm::label9_MouseLeave);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Peru;
			this->label8->ForeColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(220, 238);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Visit web-site";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			this->label8->MouseEnter += gcnew System::EventHandler(this, &MyForm::label8_MouseEnter);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &MyForm::label8_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 168);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(455, 92);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(149, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(293, 27);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"-console";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(13, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Game parameters:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(455, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"Half-Life .Av Launcher";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void SetLinkStyle_(Label^ lbl){
				lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
		}
		void SetNormalStyle_(Label^ lbl){
				lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
		}

		array<String^, 1>^ cfg, ^newcfg;

		Point cursor_pos;
	private: System::Void label2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 label2->ForeColor = Color::Aqua;
			 }
	private: System::Void label2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 label2->ForeColor = Color::White;
			 }
private: System::Void label3_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			 label3->ForeColor = Color::Blue;
		 }
private: System::Void label3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			 label3->ForeColor = Color::White;
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start("https://vk.com/anvaclan");
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 newcfg = gcnew array<String^, 1>(16);
			 cfg = IO::File::ReadAllLines("config.dat");
			 comboBox1->SelectedIndex = Convert::ToInt16(cfg[2]);
			 textBox1->Text = cfg[0];
			 textBox2->Text = cfg[1];
			 comboBox2->SelectedIndex = Convert::ToInt16(cfg[3]);
			 //checkBox1->Checked = Convert::ToInt16( IO::File::ReadAllText("textures.dat") );
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 newcfg[2] = comboBox1->SelectedIndex.ToString();
			 IO::File::Delete("Core.dll");
			 IO::File::Copy("valve\\Core_"+comboBox1->SelectedIndex.ToString()+".dll", "Core.dll");
			 IO::File::WriteAllLines("config.dat", newcfg);
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 cursor_pos = Windows::Forms::Cursor::Position;
			 Location = Point(cursor_pos.X, cursor_pos.Y);
		 }
private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 timer1->Start();
		 }
private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 timer1->Stop();
		 }
private: System::Void label1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 timer1->Start();
		 }
private: System::Void label1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 timer1->Stop();
		 }
private: System::Void label4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 timer1->Start();
		 }
private: System::Void label4_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 timer1->Stop();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 IO::File::WriteAllText("_.bat", "hl.exe "+textBox2->Text+" -game "+textBox1->Text);
			 system("_.bat");
			 Application::Exit();
		 }
private: System::Void label8_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 SetLinkStyle_(label8);
		 }
private: System::Void label8_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 SetNormalStyle_(label8);
		 }
private: System::Void label9_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 SetLinkStyle_(label9);
		 }
private: System::Void label9_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 SetNormalStyle_(label9);
		 }
private: System::Void label10_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 SetLinkStyle_(label10);
		 }
private: System::Void label10_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 SetNormalStyle_(label10);
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start("https://avclan.000webhostapp.com");
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start("https://vk.com/anvaclan");
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Diagnostics::Process::Start("https://www.facebook.com/groups/576122316113827");
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 newcfg[0] = textBox1->Text;
			 IO::File::WriteAllLines("config.dat", newcfg);
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 newcfg[1] = textBox2->Text;
			 IO::File::WriteAllLines("config.dat", newcfg);
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void checkBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*if(checkBox1->Checked){
				 IO::File::WriteAllText("textures.dat", "1");
				 IO::File::Move("valve\\halflife.wad", "valve\\halflife_old.wad");
				 IO::File::Move("valve\\halflife_gray.wad", "valve\\halflife.wad");
			 }
			 else{
				 IO::File::WriteAllText("textures.dat", "0");
				 IO::File::Move("valve\\halflife.wad", "valve\\halflife_gray.wad");
				 IO::File::Move("valve\\halflife_old.wad", "valve\\halflife.wad");
			 }*/
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 newcfg[3] = comboBox2->SelectedIndex.ToString();
			 IO::File::Delete("valve\\cl_dlls\\client.dll");
			 switch( comboBox2->SelectedIndex) {
				 case 0:
					 //rofis
					 IO::File::Copy("valve\\rofi.dll", "valve\\cl_dlls\\client.dll");
				 break;
				 case 1:
					 //standard
					 IO::File::Copy("valve\\default.dll", "valve\\cl_dlls\\client.dll");
				 break;
				 case 2:
					 //lev
					 IO::File::Copy("valve\\lev.dll", "valve\\cl_dlls\\client.dll");
				 break;
			 }
			 IO::File::WriteAllLines("config.dat", newcfg);
		 }
};
}