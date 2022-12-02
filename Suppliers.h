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
	/// Summary for Suppliers
	/// </summary>
	public ref class Suppliers : public System::Windows::Forms::Form
	{
	public:
		Suppliers(void)
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
		~Suppliers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPageaddcompany;

	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel1;
	private: ns1::BunifuMaterialTextbox^ companyName;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel2;
	private: ns1::BunifuMaterialTextbox^ companyAddress;

	private: ns1::BunifuThinButton2^ addCompany;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: ns1::BunifuMaterialTextbox^ searchCompanyName;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel3;
	private: ns1::BunifuCustomDataGrid^ bunifuCustomDataGrid1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::NumericUpDown^ contactno;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel4;
	private: ns1::BunifuThinButton2^ searchButton;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel5;
	private: ns1::BunifuMaterialTextbox^ removeCompanyName;
	private: ns1::BunifuThinButton2^ removeEmployeeButton;


	private: System::ComponentModel::IContainer^ components;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Suppliers::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageaddcompany = (gcnew System::Windows::Forms::TabPage());
			this->contactno = (gcnew System::Windows::Forms::NumericUpDown());
			this->bunifuCustomLabel4 = (gcnew ns1::BunifuCustomLabel());
			this->addCompany = (gcnew ns1::BunifuThinButton2());
			this->companyAddress = (gcnew ns1::BunifuMaterialTextbox());
			this->companyName = (gcnew ns1::BunifuMaterialTextbox());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->removeEmployeeButton = (gcnew ns1::BunifuThinButton2());
			this->removeCompanyName = (gcnew ns1::BunifuMaterialTextbox());
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->searchButton = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomDataGrid1 = (gcnew ns1::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchCompanyName = (gcnew ns1::BunifuMaterialTextbox());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPageaddcompany->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contactno))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPageaddcompany);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->ItemSize = System::Drawing::Size(50, 50);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1223, 660);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageaddcompany
			// 
			this->tabPageaddcompany->BackColor = System::Drawing::Color::MistyRose;
			this->tabPageaddcompany->Controls->Add(this->contactno);
			this->tabPageaddcompany->Controls->Add(this->bunifuCustomLabel4);
			this->tabPageaddcompany->Controls->Add(this->addCompany);
			this->tabPageaddcompany->Controls->Add(this->companyAddress);
			this->tabPageaddcompany->Controls->Add(this->companyName);
			this->tabPageaddcompany->Controls->Add(this->bunifuCustomLabel2);
			this->tabPageaddcompany->Controls->Add(this->bunifuCustomLabel1);
			this->tabPageaddcompany->Location = System::Drawing::Point(4, 54);
			this->tabPageaddcompany->Name = L"tabPageaddcompany";
			this->tabPageaddcompany->Padding = System::Windows::Forms::Padding(3);
			this->tabPageaddcompany->Size = System::Drawing::Size(1215, 602);
			this->tabPageaddcompany->TabIndex = 0;
			this->tabPageaddcompany->Text = L"Add Company";


			// 
			// contactno
			// 
			this->contactno->BackColor = System::Drawing::Color::MistyRose;
			this->contactno->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->contactno->Location = System::Drawing::Point(297, 197);
			this->contactno->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->contactno->Name = L"contactno";
			this->contactno->Size = System::Drawing::Size(359, 26);
			this->contactno->TabIndex = 23;
			this->contactno->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Suppliers::addKeyPress);
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCustomLabel4->Location = System::Drawing::Point(8, 182);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(283, 44);
			this->bunifuCustomLabel4->TabIndex = 22;
			this->bunifuCustomLabel4->Text = L"Contact No.  :";
			this->bunifuCustomLabel4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// addCompany
			// 
			this->addCompany->ActiveBorderThickness = 2;
			this->addCompany->ActiveCornerRadius = 20;
			this->addCompany->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->addCompany->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->addCompany->ActiveLineColor = System::Drawing::Color::Transparent;
			this->addCompany->BackColor = System::Drawing::Color::MistyRose;
			this->addCompany->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addCompany.BackgroundImage")));
			this->addCompany->ButtonText = L"Add Company";
			this->addCompany->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addCompany->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addCompany->ForeColor = System::Drawing::Color::Transparent;
			this->addCompany->IdleBorderThickness = 2;
			this->addCompany->IdleCornerRadius = 15;
			this->addCompany->IdleFillColor = System::Drawing::Color::Empty;
			this->addCompany->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->addCompany->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->addCompany->Location = System::Drawing::Point(462, 266);
			this->addCompany->Margin = System::Windows::Forms::Padding(5);
			this->addCompany->Name = L"addCompany";
			this->addCompany->Size = System::Drawing::Size(195, 57);
			this->addCompany->TabIndex = 21;
			this->addCompany->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->addCompany->Click += gcnew System::EventHandler(this, &Suppliers::addCompany_Click);
			// 
			// companyAddress
			// 
			this->companyAddress->BackColor = System::Drawing::Color::MistyRose;
			this->companyAddress->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->companyAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->companyAddress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->companyAddress->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->companyAddress->HintText = L"Enter the location of the company";
			this->companyAddress->isPassword = false;
			this->companyAddress->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->companyAddress->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->companyAddress->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->companyAddress->LineThickness = 3;
			this->companyAddress->Location = System::Drawing::Point(298, 113);
			this->companyAddress->Margin = System::Windows::Forms::Padding(4);
			this->companyAddress->Name = L"companyAddress";
			this->companyAddress->Size = System::Drawing::Size(359, 44);
			this->companyAddress->TabIndex = 3;
			this->companyAddress->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->companyAddress->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Suppliers::addKeyPress);
			// 
			// companyName
			// 
			this->companyName->BackColor = System::Drawing::Color::MistyRose;
			this->companyName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->companyName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->companyName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->companyName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->companyName->HintText = L"Enter the name of the company";
			this->companyName->isPassword = false;
			this->companyName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->companyName->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->companyName->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->companyName->LineThickness = 3;
			this->companyName->Location = System::Drawing::Point(298, 44);
			this->companyName->Margin = System::Windows::Forms::Padding(4);
			this->companyName->Name = L"companyName";
			this->companyName->Size = System::Drawing::Size(359, 44);
			this->companyName->TabIndex = 2;
			this->companyName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->companyName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Suppliers::addKeyPress);
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(8, 113);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(283, 44);
			this->bunifuCustomLabel2->TabIndex = 1;
			this->bunifuCustomLabel2->Text = L"Company Address:";
			this->bunifuCustomLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(3, 44);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(283, 44);
			this->bunifuCustomLabel1->TabIndex = 0;
			this->bunifuCustomLabel1->Text = L"Company Name:";
			this->bunifuCustomLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::MistyRose;
			this->tabPage2->Controls->Add(this->removeEmployeeButton);
			this->tabPage2->Controls->Add(this->removeCompanyName);
			this->tabPage2->Controls->Add(this->bunifuCustomLabel5);
			this->tabPage2->Location = System::Drawing::Point(4, 54);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1215, 602);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Remove Company";
			// 
			// removeEmployeeButton
			// 
			this->removeEmployeeButton->ActiveBorderThickness = 2;
			this->removeEmployeeButton->ActiveCornerRadius = 20;
			this->removeEmployeeButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->removeEmployeeButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->removeEmployeeButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->removeEmployeeButton->BackColor = System::Drawing::Color::MistyRose;
			this->removeEmployeeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"removeEmployeeButton.BackgroundImage")));
			this->removeEmployeeButton->ButtonText = L"Remove";
			this->removeEmployeeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->removeEmployeeButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->removeEmployeeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->removeEmployeeButton->IdleBorderThickness = 2;
			this->removeEmployeeButton->IdleCornerRadius = 15;
			this->removeEmployeeButton->IdleFillColor = System::Drawing::Color::Empty;
			this->removeEmployeeButton->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->removeEmployeeButton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->removeEmployeeButton->Location = System::Drawing::Point(586, 85);
			this->removeEmployeeButton->Margin = System::Windows::Forms::Padding(5);
			this->removeEmployeeButton->Name = L"removeEmployeeButton";
			this->removeEmployeeButton->Size = System::Drawing::Size(197, 63);
			this->removeEmployeeButton->TabIndex = 23;
			this->removeEmployeeButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->removeEmployeeButton->Click += gcnew System::EventHandler(this, &Suppliers::removeCompanyButtonClick);
			// 
			// removeCompanyName
			// 
			this->removeCompanyName->BackColor = System::Drawing::Color::MistyRose;
			this->removeCompanyName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->removeCompanyName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->removeCompanyName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->removeCompanyName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->removeCompanyName->HintText = L"";
			this->removeCompanyName->isPassword = false;
			this->removeCompanyName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->removeCompanyName->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->removeCompanyName->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->removeCompanyName->LineThickness = 3;
			this->removeCompanyName->Location = System::Drawing::Point(276, 35);
			this->removeCompanyName->Margin = System::Windows::Forms::Padding(4);
			this->removeCompanyName->Name = L"removeCompanyName";
			this->removeCompanyName->Size = System::Drawing::Size(348, 41);
			this->removeCompanyName->TabIndex = 22;
			this->removeCompanyName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->removeCompanyName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Suppliers::removeKeyPress);
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(9, 32);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(273, 44);
			this->bunifuCustomLabel5->TabIndex = 2;
			this->bunifuCustomLabel5->Text = L"Name of Company:";
			this->bunifuCustomLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::MistyRose;
			this->tabPage3->Controls->Add(this->searchButton);
			this->tabPage3->Controls->Add(this->bunifuCustomDataGrid1);
			this->tabPage3->Controls->Add(this->searchCompanyName);
			this->tabPage3->Controls->Add(this->bunifuCustomLabel3);
			this->tabPage3->Location = System::Drawing::Point(4, 54);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1215, 602);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Company Details";
			// 
			// searchButton
			// 
			this->searchButton->ActiveBorderThickness = 2;
			this->searchButton->ActiveCornerRadius = 20;
			this->searchButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->searchButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->searchButton->BackColor = System::Drawing::Color::MistyRose;
			this->searchButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchButton.BackgroundImage")));
			this->searchButton->ButtonText = L"Search";
			this->searchButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->ForeColor = System::Drawing::Color::Transparent;
			this->searchButton->IdleBorderThickness = 2;
			this->searchButton->IdleCornerRadius = 15;
			this->searchButton->IdleFillColor = System::Drawing::Color::Empty;
			this->searchButton->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->searchButton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->searchButton->Location = System::Drawing::Point(534, 93);
			this->searchButton->Margin = System::Windows::Forms::Padding(5);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(195, 57);
			this->searchButton->TabIndex = 22;
			this->searchButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->searchButton->Click += gcnew System::EventHandler(this, &Suppliers::searchButtonClick);
			// 
			// bunifuCustomDataGrid1
			// 
			this->bunifuCustomDataGrid1->AllowUserToAddRows = false;
			this->bunifuCustomDataGrid1->AllowUserToDeleteRows = false;
			this->bunifuCustomDataGrid1->AllowUserToResizeColumns = false;
			this->bunifuCustomDataGrid1->AllowUserToResizeRows = false;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->bunifuCustomDataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->bunifuCustomDataGrid1->ColumnHeadersHeight = 30;
			this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->bunifuCustomDataGrid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->bunifuCustomDataGrid1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(3, 173);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->RowHeadersWidth = 51;
			this->bunifuCustomDataGrid1->RowTemplate->Height = 24;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(1209, 426);
			this->bunifuCustomDataGrid1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Company Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Company Address";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Company Contact Number";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// searchCompanyName
			// 
			this->searchCompanyName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->searchCompanyName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->searchCompanyName->ForeColor = System::Drawing::Color::Cyan;
			this->searchCompanyName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchCompanyName->HintText = L"Enter the name of the company here";
			this->searchCompanyName->isPassword = false;
			this->searchCompanyName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchCompanyName->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->searchCompanyName->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchCompanyName->LineThickness = 2;
			this->searchCompanyName->Location = System::Drawing::Point(223, 32);
			this->searchCompanyName->Margin = System::Windows::Forms::Padding(4);
			this->searchCompanyName->Name = L"searchCompanyName";
			this->searchCompanyName->Size = System::Drawing::Size(370, 42);
			this->searchCompanyName->TabIndex = 1;
			this->searchCompanyName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->searchCompanyName->OnValueChanged += gcnew System::EventHandler(this, &Suppliers::searchCompanyName_OnValueChanged);
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::Color::Cyan;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(6, 41);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(283, 44);
			this->bunifuCustomLabel3->TabIndex = 0;
			this->bunifuCustomLabel3->Text = L"Company Name:";
			// 
			// Suppliers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1223, 660);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Suppliers";
			this->Text = L"Suppliers";
			this->Load += gcnew System::EventHandler(this, &Suppliers::Suppliers_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPageaddcompany->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->contactno))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuCustomDataGrid1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void addCompany_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ companyname = this->companyName->Text;
	String^ companyaddress = this->companyAddress->Text;
	String^ contact = this->contactno->Value.ToString();

	if (companyname->Length == 0 || companyaddress->Length == 0 || contact->Length==0) {
		MessageBox::Show("All the fields are not filled");
	}
	else{
	//try {
		SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
		// a separate function is to be create to establish the connection and return connection each time 
		connection.Open();
		SqlCommand command("Insert into supplier_company values (@companyname,@contact,@companyaddress)", % connection);
		command.Parameters->AddWithValue("@companyname", companyname);
		command.Parameters->AddWithValue("@companyaddress", companyaddress);
		command.Parameters->AddWithValue("@contact", contact);
		command.ExecuteNonQuery();
		connection.Close();
		this->companyName->Text = "";
		companyAddress->Text = "";
		this->contactno->Value = 0;
		searchButtonClick(sender, e);
	}
	//catch (Exception^ e) {
		//MessageBox::Show("Error Occured");
	//}
	//}

}

	private: System::Void Suppliers_Load(System::Object^ sender, System::EventArgs^ e) {
		this->bunifuCustomDataGrid1->Rows->Clear();

		SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
		connection.Open();
		SqlCommand command("Select * from supplier_company", % connection);
		SqlDataReader^ reader = command.ExecuteReader();
		showDataOnDataGridView(reader);
		connection.Close();
		
	}

	private: System::Void searchButtonClick(System::Object^ sender, System::EventArgs^ e) {

		searchCompanyName_OnValueChanged(sender,e);
		   }

	private: System::Void removeCompanyButtonClick(System::Object^ sender, System::EventArgs^ e) {
			   
		String^ companyname = this->removeCompanyName->Text;
		try {
		SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
		connection.Open();

		SqlCommand cmd("Delete from supplier_company where company_name = @name", % connection);
		cmd.Parameters->AddWithValue("@name", companyname);
		cmd.ExecuteNonQuery();
		//delete company form database
		MessageBox::Show("Company Removed Successufully");
		this->removeCompanyName->Text = "";
		searchButtonClick(sender,e);
				   
			}
		catch (Exception^ e) {
		 MessageBox::Show("An error occured");
			   }
		   }

	private: System::Void searchCompanyName_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ companyname = this->searchCompanyName->Text;
		this->bunifuCustomDataGrid1->Rows->Clear();
		SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
		connection.Open();
		SqlCommand command("Select * from supplier_company where company_name like @companyname+'%'", % connection);
		command.Parameters->AddWithValue("@companyname", companyname);
		SqlDataReader^ reader = command.ExecuteReader();

		showDataOnDataGridView(reader);
	}

	private: System::Void addKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13) {
		addCompany_Click(sender, e);
			   }
		   }

	private: System::Void removeKeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 13) {
		removeCompanyButtonClick(sender, e);
	}
}
 











		   //accepts the sqldatareader and insert the data in the reader datagridview	
		 private: Void showDataOnDataGridView(SqlDataReader^ reader) {
		   

		   while (reader->Read()) {

			   String^ name = reader->GetString(1);
			   String^ contact = reader->GetString(2);
			   String^ location = reader->GetString(3);

			   this->bunifuCustomDataGrid1->Rows->Add(name, location, contact);
		   }	  

}



};

}
