#include "Tools.h"
#pragma once


namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for employeeManagement
	/// </summary>
	public ref class employeeManagement : public System::Windows::Forms::Form
	{
	public:
		employeeManagement(void)
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
		~employeeManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ tabPage2;
	protected:

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ contactNumber;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ others;


	private: System::Windows::Forms::RadioButton^ female;

	private: System::Windows::Forms::RadioButton^ male;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ employeeRole;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ employeeName;
	private: System::Windows::Forms::Button^ removeEmployee;

	private: System::Windows::Forms::TextBox^ searchEmployeeName;
	private: System::Windows::Forms::Label^ label10;







	private: System::Windows::Forms::Button^ searchButton;







	private: ns1::BunifuThinButton2^ addEmployeebuttton;
	private: ns1::BunifuMaterialTextbox^ firstName;
	private: ns1::BunifuDatepicker^ birthDate;
	private: ns1::BunifuMaterialTextbox^ address;
	private: ns1::BunifuMaterialTextbox^ email;
	private: ns1::BunifuMaterialTextbox^ lastName;
	private: ns1::BunifuCustomDataGrid^ dataGridView1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;

	protected:
	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(employeeManagement::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->removeEmployee = (gcnew System::Windows::Forms::Button());
			this->employeeName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->birthDate = (gcnew ns1::BunifuDatepicker());
			this->address = (gcnew ns1::BunifuMaterialTextbox());
			this->email = (gcnew ns1::BunifuMaterialTextbox());
			this->lastName = (gcnew ns1::BunifuMaterialTextbox());
			this->firstName = (gcnew ns1::BunifuMaterialTextbox());
			this->addEmployeebuttton = (gcnew ns1::BunifuThinButton2());
			this->others = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->female = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->employeeRole = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->contactNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->male = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew ns1::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->searchEmployeeName = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPage2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contactNumber))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->tabPage2->Controls->Add(this->removeEmployee);
			this->tabPage2->Controls->Add(this->employeeName);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->tabPage2->Location = System::Drawing::Point(4, 54);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1233, 649);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Remove Employee";
			// 
			// removeEmployee
			// 
			this->removeEmployee->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->removeEmployee->Location = System::Drawing::Point(544, 91);
			this->removeEmployee->Name = L"removeEmployee";
			this->removeEmployee->Size = System::Drawing::Size(88, 35);
			this->removeEmployee->TabIndex = 2;
			this->removeEmployee->Text = L"Remove";
			this->removeEmployee->UseVisualStyleBackColor = true;
			this->removeEmployee->Click += gcnew System::EventHandler(this, &employeeManagement::removeEmployee_Click);
			// 
			// employeeName
			// 
			this->employeeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeName->Location = System::Drawing::Point(288, 27);
			this->employeeName->Name = L"employeeName";
			this->employeeName->Size = System::Drawing::Size(331, 34);
			this->employeeName->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(46, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(236, 41);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Employee Name:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->ItemSize = System::Drawing::Size(50, 50);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(0, 0);
			this->tabControl1->RightToLeftLayout = true;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1241, 707);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->tabPage1->Controls->Add(this->birthDate);
			this->tabPage1->Controls->Add(this->address);
			this->tabPage1->Controls->Add(this->email);
			this->tabPage1->Controls->Add(this->lastName);
			this->tabPage1->Controls->Add(this->firstName);
			this->tabPage1->Controls->Add(this->addEmployeebuttton);
			this->tabPage1->Controls->Add(this->others);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->female);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->employeeRole);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->contactNumber);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->male);
			this->tabPage1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->tabPage1->Location = System::Drawing::Point(4, 54);
			this->tabPage1->Margin = System::Windows::Forms::Padding(0);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(1233, 649);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add Employee";
			// 
			// birthDate
			// 
			this->birthDate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->birthDate->BorderRadius = 0;
			this->birthDate->ForeColor = System::Drawing::Color::White;
			this->birthDate->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->birthDate->FormatCustom = nullptr;
			this->birthDate->Location = System::Drawing::Point(9, 513);
			this->birthDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->birthDate->Name = L"birthDate";
			this->birthDate->Size = System::Drawing::Size(348, 37);
			this->birthDate->TabIndex = 25;
			this->birthDate->Value = System::DateTime(2022, 11, 11, 16, 11, 41, 815);
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->address->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->address->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->address->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->address->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->address->HintText = L"Kathmandu,Nepal";
			this->address->isPassword = false;
			this->address->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->address->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->address->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->address->LineThickness = 3;
			this->address->Location = System::Drawing::Point(9, 342);
			this->address->Margin = System::Windows::Forms::Padding(4);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(348, 45);
			this->address->TabIndex = 24;
			this->address->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->email->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->email->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->email->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->email->HintText = L"example@gmail.com";
			this->email->isPassword = false;
			this->email->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->email->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->email->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->email->LineThickness = 3;
			this->email->Location = System::Drawing::Point(9, 255);
			this->email->Margin = System::Windows::Forms::Padding(4);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(348, 42);
			this->email->TabIndex = 23;
			this->email->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// lastName
			// 
			this->lastName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->lastName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->lastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->lastName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->lastName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->lastName->HintText = L"last name";
			this->lastName->isPassword = false;
			this->lastName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->lastName->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->lastName->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->lastName->LineThickness = 3;
			this->lastName->Location = System::Drawing::Point(4, 166);
			this->lastName->Margin = System::Windows::Forms::Padding(4);
			this->lastName->Name = L"lastName";
			this->lastName->Size = System::Drawing::Size(353, 43);
			this->lastName->TabIndex = 22;
			this->lastName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// firstName
			// 
			this->firstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->firstName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->firstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->firstName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->firstName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->firstName->HintText = L"First name";
			this->firstName->isPassword = false;
			this->firstName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->firstName->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->firstName->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->firstName->LineThickness = 3;
			this->firstName->Location = System::Drawing::Point(9, 84);
			this->firstName->Margin = System::Windows::Forms::Padding(4);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(348, 41);
			this->firstName->TabIndex = 21;
			this->firstName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// addEmployeebuttton
			// 
			this->addEmployeebuttton->ActiveBorderThickness = 2;
			this->addEmployeebuttton->ActiveCornerRadius = 20;
			this->addEmployeebuttton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->addEmployeebuttton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->addEmployeebuttton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->addEmployeebuttton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->addEmployeebuttton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addEmployeebuttton.BackgroundImage")));
			this->addEmployeebuttton->ButtonText = L"Add  Employee";
			this->addEmployeebuttton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addEmployeebuttton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addEmployeebuttton->ForeColor = System::Drawing::Color::Transparent;
			this->addEmployeebuttton->IdleBorderThickness = 2;
			this->addEmployeebuttton->IdleCornerRadius = 15;
			this->addEmployeebuttton->IdleFillColor = System::Drawing::Color::Empty;
			this->addEmployeebuttton->IdleForecolor = System::Drawing::Color::Transparent;
			this->addEmployeebuttton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->addEmployeebuttton->Location = System::Drawing::Point(997, 541);
			this->addEmployeebuttton->Margin = System::Windows::Forms::Padding(5);
			this->addEmployeebuttton->Name = L"addEmployeebuttton";
			this->addEmployeebuttton->Size = System::Drawing::Size(195, 57);
			this->addEmployeebuttton->TabIndex = 20;
			this->addEmployeebuttton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->addEmployeebuttton->Click += gcnew System::EventHandler(this, &employeeManagement::addButtonclick);
			// 
			// others
			// 
			this->others->AutoSize = true;
			this->others->BackColor = System::Drawing::Color::Transparent;
			this->others->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->others->Location = System::Drawing::Point(276, 574);
			this->others->Name = L"others";
			this->others->Size = System::Drawing::Size(81, 24);
			this->others->TabIndex = 15;
			this->others->TabStop = true;
			this->others->Text = L"Others";
			this->others->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 41);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 569);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 29);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Gender:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(2, 391);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 41);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Contact:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 301);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 41);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Address:";
			// 
			// female
			// 
			this->female->AutoSize = true;
			this->female->BackColor = System::Drawing::Color::Transparent;
			this->female->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female->Location = System::Drawing::Point(185, 574);
			this->female->Name = L"female";
			this->female->Size = System::Drawing::Size(85, 24);
			this->female->TabIndex = 14;
			this->female->TabStop = true;
			this->female->Text = L"Female";
			this->female->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 41);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name:";
			// 
			// employeeRole
			// 
			this->employeeRole->AccessibleRole = System::Windows::Forms::AccessibleRole::Text;
			this->employeeRole->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->employeeRole->CausesValidation = false;
			this->employeeRole->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->employeeRole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeRole->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->employeeRole->Location = System::Drawing::Point(947, 89);
			this->employeeRole->Name = L"employeeRole";
			this->employeeRole->Size = System::Drawing::Size(195, 30);
			this->employeeRole->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 41);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Email:";
			// 
			// contactNumber
			// 
			this->contactNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->contactNumber->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contactNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contactNumber->Location = System::Drawing::Point(8, 435);
			this->contactNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->contactNumber->Name = L"contactNumber";
			this->contactNumber->Size = System::Drawing::Size(349, 22);
			this->contactNumber->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(2, 481);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(188, 28);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date Of Birth:";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(723, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(218, 41);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Employee Role:";
			// 
			// male
			// 
			this->male->AutoSize = true;
			this->male->BackColor = System::Drawing::Color::Transparent;
			this->male->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male->Location = System::Drawing::Point(113, 574);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(66, 24);
			this->male->TabIndex = 13;
			this->male->TabStop = true;
			this->male->Text = L"Male";
			this->male->UseVisualStyleBackColor = false;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->searchButton);
			this->tabPage3->Controls->Add(this->searchEmployeeName);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->tabPage3->Location = System::Drawing::Point(4, 54);
			this->tabPage3->Margin = System::Windows::Forms::Padding(0);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1233, 649);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Search Employee";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::GhostWhite;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->DoubleBuffered = true;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->dataGridView1->HeaderForeColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(0, 151);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->Size = System::Drawing::Size(1233, 498);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Email";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Address";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Contact";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Date of Birth";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Employee Role";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Gender";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->searchButton->FlatAppearance->BorderSize = 0;
			this->searchButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Indigo;
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchButton->Location = System::Drawing::Point(612, 55);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(123, 42);
			this->searchButton->TabIndex = 3;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &employeeManagement::searchEmployeeName_TextChanged);
			// 
			// searchEmployeeName
			// 
			this->searchEmployeeName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->searchEmployeeName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->searchEmployeeName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchEmployeeName->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->searchEmployeeName->Location = System::Drawing::Point(273, 61);
			this->searchEmployeeName->Name = L"searchEmployeeName";
			this->searchEmployeeName->Size = System::Drawing::Size(323, 27);
			this->searchEmployeeName->TabIndex = 1;
			this->searchEmployeeName->TextChanged += gcnew System::EventHandler(this, &employeeManagement::searchEmployeeName_TextChanged);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(41, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(226, 41);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Employee Name:";
			// 
			// employeeManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->ClientSize = System::Drawing::Size(1241, 707);
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"employeeManagement";
			this->Text = L"employeeManagement";
			this->TransparencyKey = System::Drawing::Color::Cyan;
			this->Load += gcnew System::EventHandler(this, &employeeManagement::employeeManagement_Load);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contactNumber))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion	
		//called when the employeMangement is loaded
	private: System::Void employeeManagement_Load(System::Object^ sender, System::EventArgs^ e) {  
		//gets the data into the combobox
		try {
			SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
			connection.Open();
			SqlCommand command("Select type_name from employee_type ", % connection);
			SqlDataReader^ reader = command.ExecuteReader();

			DataTable^ dt = gcnew DataTable();
			dt->Load(reader);
			this->employeeRole->ValueMember = ("type_name");
			this->employeeRole->DataSource = dt;


			SqlCommand cmd2("Select * from employees", % connection);
			//loads the data in the datagird view 
			SqlDataReader^ reader2 = cmd2.ExecuteReader();

			while (reader2->Read()) {

				String^ name = reader2->GetString(1) + " " + reader2->GetString(2);
				String^ email = reader2->GetString(3);
				String^ address = reader2->GetString(4);
				String^ contact = reader2->GetString(5);
				String^ Date = reader2->GetDateTime(6).ToShortDateString();
				String^ employeetype = reader2->GetString(8);
				String^ gender = reader2->GetString(7);

				this->dataGridView1->Rows->Add(name, email, address, contact, Date, employeetype, gender);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("An error occurred");
		}

		
	}

		//called when add button is clicked
	private: System::Void addButtonclick(System::Object^ sender, System::EventArgs^ e) {		
		String^ firstname = this->firstName->Text;
		String^ lastname = this->lastName->Text;
		String^ email = this->email->Text;
		String^ address = this->address->Text;
		String^ contact = this->contactNumber->Value.ToString();
		String^ DOB = this->birthDate->Value.ToShortDateString();
		String^ gender="null";
		RadioButton^ checkedbutton =gcnew RadioButton();

		if (this->male->Checked) {
			 gender = "Male";
			 checkedbutton = this->male;
		}
		if (this->female->Checked) {
			 gender = "Female";
			 checkedbutton = this->female;
		}
		if (this->others->Checked) {
			 gender = "Others";
			 checkedbutton = this->others;
		}

		String^ employeerole = this->employeeRole->Text;	
		
			try {
			SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
			connection.Open();

			SqlCommand command("Insert into employees values ( @firstname, @lastname,@email, @address, @contact, @DOB,@employeeroleid,@gender)", % connection);
			command.Parameters->AddWithValue("@firstname", firstname);
			command.Parameters->AddWithValue("@lastname",lastname);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@address",address);
			command.Parameters->AddWithValue("@contact",contact);
			command.Parameters->AddWithValue("@DOB",DOB);
			command.Parameters->AddWithValue("@gender",gender);
			command.Parameters->AddWithValue("@employeeroleid",employeerole);
			
			command.ExecuteNonQuery();
			connection.Close();
			
			this->firstName->Text = "";
			this->lastName->Text = "";
			this->email->Text = "";
			this->address->Text = "";
			this->contactNumber->Text = "";
			this->birthDate->Text = "";
			this->employeeRole->Text = "";
			
				checkedbutton->Checked = false;
		
		}		
		catch (NullReferenceException^ e) {
			MessageBox::Show("All fields are not filled");
		}
		catch (SqlException^ e) {
			MessageBox::Show("Invalid email");
		}

		searchEmployeeName_TextChanged(sender, e);
	}

		//called when remove button is clicked
	private: System::Void removeEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
	// removes the existing employee from the database
	
	String^ employeename = this->employeeName->Text;
	try {

		SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
		connection.Open();
		

		SqlCommand command1("Select Count(*)from employees where firstname+ ' ' + lastname = @employeename", % connection);
		command1.Parameters->AddWithValue("@employeename", employeename);
		int x  = (int)command1.ExecuteScalar();
		
		
		if (x>0) {		

			SqlCommand command("Delete from employees where firstname+ ' ' + lastname = @employeename", % connection);
			command.Parameters->AddWithValue("@employeename", employeename);
			command.ExecuteNonQuery();
			this->employeeName->Text = "";
			MessageBox::Show("Employee removed");
			connection.Close();
		}
		else {
			MessageBox::Show("The employee doesnot exist");
			connection.Close();
			this->employeeName->Text = "";			
				}		
				
	}
	
	catch (SqlException^ e) {
		MessageBox::Show("Employee not found");
	}
	catch (Exception^ e) {
		MessageBox::Show("An error occured");
	}

}

		//called when the text in  the searchEmployeeName text is changed
	private: System::Void searchEmployeeName_TextChanged(System::Object^ sender, System::EventArgs^ e) { 
		//displays the data in the data grid view when the text in the search field changes
		this->dataGridView1->Rows->Clear();
		
		try {
			String^ employeename = this->searchEmployeeName->Text;
			SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
			SqlCommand command("Select * from employees where firstname+' '+lastname  like @employeename +'%' ", % connection);
			command.Parameters->AddWithValue("@employeename", employeename);
			connection.Open();

			SqlDataReader^ reader = command.ExecuteReader();
			
			while (reader->Read()) {

				String^ name = reader->GetString(1) + " " + reader->GetString(2);
				String^ email = reader->GetString(3);				
				String^ address = reader->GetString(4);
				String^ contact = reader->GetString(5);
				String^ Date = reader->GetDateTime(6).ToShortDateString();
				String^ employeetype = reader->GetString(8);

				String^ Gender = reader->GetString(7);
				

				this->dataGridView1->Rows->Add(name, email, address, contact, Date, Gender,employeetype); 

			}

		}
		catch (Exception^ e) {
			MessageBox::Show(" Some Error occured ");
		}
	}
	



};

	



}
