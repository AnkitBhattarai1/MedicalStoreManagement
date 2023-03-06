#pragma once
#include "Tools.h"
#include "AdminLogin.h"
#include "employeeManagement.h"
#include "Suppliers.h"
#include "Salesdetails.h"
#include "Purchasedetails.h"



namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlTypes;

	/// <summary>
	/// Summary for Adminpage
	/// </summary>
	public ref class Adminpage : public System::Windows::Forms::Form
	{
	public:
		Adminpage(void)
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
		~Adminpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;






	private: System::Windows::Forms::Button^ employeeButton;




	private: System::Windows::Forms::Button^ button1;
	private: ns1::BunifuThinButton2^ logOut;



	private: System::Windows::Forms::Button^ homeButton;
	private: System::Windows::Forms::Label^ homeLabel;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ menuPanel;
	private: ns1::BunifuCards^ bunifuCards3;
	private: ns1::BunifuCustomLabel^ noofexpiredmedicine;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel7;
	private: ns1::BunifuCards^ bunifuCards2;
	private: ns1::BunifuCustomLabel^ noofsuppliercompany;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel5;
	private: ns1::BunifuCards^ bunifuCards4;
	private: ns1::BunifuCustomLabel^ noofmedicineavailable;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel9;
	private: ns1::BunifuCards^ bunifuCards1;
	private: ns1::BunifuCustomLabel^ monthlyPurchase;
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel3;
	private: ns1::BunifuCards^ bunifuCards5;
	private: ns1::BunifuCustomLabel^ noofemployees;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel11;
	private: ns1::BunifuCards^ salesInfo;
	private: ns1::BunifuCustomLabel^ monthlySales;
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ salesDetailsButton;
























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminpage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->salesDetailsButton = (gcnew System::Windows::Forms::Button());
			this->homeButton = (gcnew System::Windows::Forms::Button());
			this->logOut = (gcnew ns1::BunifuThinButton2());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->employeeButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->homeLabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->menuPanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuCards3 = (gcnew ns1::BunifuCards());
			this->noofexpiredmedicine = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel7 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCards2 = (gcnew ns1::BunifuCards());
			this->noofsuppliercompany = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCards4 = (gcnew ns1::BunifuCards());
			this->noofmedicineavailable = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel9 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCards1 = (gcnew ns1::BunifuCards());
			this->monthlyPurchase = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCards5 = (gcnew ns1::BunifuCards());
			this->noofemployees = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel11 = (gcnew ns1::BunifuCustomLabel());
			this->salesInfo = (gcnew ns1::BunifuCards());
			this->monthlySales = (gcnew ns1::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->menuPanel->SuspendLayout();
			this->bunifuCards3->SuspendLayout();
			this->bunifuCards2->SuspendLayout();
			this->bunifuCards4->SuspendLayout();
			this->bunifuCards1->SuspendLayout();
			this->bunifuCards5->SuspendLayout();
			this->salesInfo->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 753);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->salesDetailsButton);
			this->panel3->Controls->Add(this->homeButton);
			this->panel3->Controls->Add(this->logOut);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->employeeButton);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 150);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 603);
			this->panel3->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(0, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(250, 60);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Purchase Details";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Adminpage::button3_Click);
			// 
			// salesDetailsButton
			// 
			this->salesDetailsButton->BackColor = System::Drawing::Color::Transparent;
			this->salesDetailsButton->FlatAppearance->BorderSize = 0;
			this->salesDetailsButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->salesDetailsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->salesDetailsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salesDetailsButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->salesDetailsButton->Location = System::Drawing::Point(-3, 198);
			this->salesDetailsButton->Name = L"salesDetailsButton";
			this->salesDetailsButton->Size = System::Drawing::Size(250, 60);
			this->salesDetailsButton->TabIndex = 23;
			this->salesDetailsButton->Text = L"Sales Details";
			this->salesDetailsButton->UseVisualStyleBackColor = false;
			this->salesDetailsButton->Click += gcnew System::EventHandler(this, &Adminpage::salesDetailsButtonClick);
			// 
			// homeButton
			// 
			this->homeButton->BackColor = System::Drawing::Color::Transparent;
			this->homeButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->homeButton->FlatAppearance->BorderSize = 0;
			this->homeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->homeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->homeButton->Location = System::Drawing::Point(0, 0);
			this->homeButton->Name = L"homeButton";
			this->homeButton->Size = System::Drawing::Size(250, 60);
			this->homeButton->TabIndex = 22;
			this->homeButton->Text = L"HOME";
			this->homeButton->UseVisualStyleBackColor = false;
			this->homeButton->Click += gcnew System::EventHandler(this, &Adminpage::homeButton_Click);
			// 
			// logOut
			// 
			this->logOut->ActiveBorderThickness = 2;
			this->logOut->ActiveCornerRadius = 20;
			this->logOut->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->logOut->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->logOut->ActiveLineColor = System::Drawing::Color::Transparent;
			this->logOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->logOut->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logOut.BackgroundImage")));
			this->logOut->ButtonText = L"Log out";
			this->logOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOut->ForeColor = System::Drawing::Color::Transparent;
			this->logOut->IdleBorderThickness = 3;
			this->logOut->IdleCornerRadius = 30;
			this->logOut->IdleFillColor = System::Drawing::Color::Empty;
			this->logOut->IdleForecolor = System::Drawing::Color::Transparent;
			this->logOut->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->logOut->Location = System::Drawing::Point(14, 533);
			this->logOut->Margin = System::Windows::Forms::Padding(5);
			this->logOut->Name = L"logOut";
			this->logOut->Size = System::Drawing::Size(203, 65);
			this->logOut->TabIndex = 21;
			this->logOut->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->logOut->Click += gcnew System::EventHandler(this, &Adminpage::logoutButtonClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(-6, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SUPPLIERS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Adminpage::supplierButtonClick);
			// 
			// employeeButton
			// 
			this->employeeButton->BackColor = System::Drawing::Color::Transparent;
			this->employeeButton->FlatAppearance->BorderSize = 0;
			this->employeeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->employeeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employeeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->employeeButton->Location = System::Drawing::Point(0, 66);
			this->employeeButton->Name = L"employeeButton";
			this->employeeButton->Size = System::Drawing::Size(250, 60);
			this->employeeButton->TabIndex = 0;
			this->employeeButton->Text = L"EMPLOYEE";
			this->employeeButton->UseVisualStyleBackColor = false;
			this->employeeButton->Click += gcnew System::EventHandler(this, &Adminpage::employeeButtonClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 150);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(0, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(67, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// homeLabel
			// 
			this->homeLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->homeLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->homeLabel->Location = System::Drawing::Point(0, 0);
			this->homeLabel->Name = L"homeLabel";
			this->homeLabel->Size = System::Drawing::Size(1082, 90);
			this->homeLabel->TabIndex = 0;
			this->homeLabel->Text = L"HOME";
			this->homeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->homeLabel);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(250, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1082, 90);
			this->panel4->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->menuPanel);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(250, 90);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1082, 663);
			this->panel5->TabIndex = 2;
			// 
			// menuPanel
			// 
			this->menuPanel->BackColor = System::Drawing::Color::White;
			this->menuPanel->Controls->Add(this->bunifuCards3);
			this->menuPanel->Controls->Add(this->bunifuCards2);
			this->menuPanel->Controls->Add(this->bunifuCards4);
			this->menuPanel->Controls->Add(this->bunifuCards1);
			this->menuPanel->Controls->Add(this->bunifuCards5);
			this->menuPanel->Controls->Add(this->salesInfo);
			this->menuPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuPanel->Location = System::Drawing::Point(0, 0);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(1082, 663);
			this->menuPanel->TabIndex = 0;
			this->menuPanel->Click += gcnew System::EventHandler(this, &Adminpage::logoutButtonClick);
			// 
			// bunifuCards3
			// 
			this->bunifuCards3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCards3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCards3->BorderRadius = 40;
			this->bunifuCards3->BottomSahddow = true;
			this->bunifuCards3->color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCards3->Controls->Add(this->noofexpiredmedicine);
			this->bunifuCards3->Controls->Add(this->bunifuCustomLabel7);
			this->bunifuCards3->ImeMode = System::Windows::Forms::ImeMode::On;
			this->bunifuCards3->LeftSahddow = true;
			this->bunifuCards3->Location = System::Drawing::Point(719, 377);
			this->bunifuCards3->Name = L"bunifuCards3";
			this->bunifuCards3->RightSahddow = true;
			this->bunifuCards3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuCards3->ShadowDepth = 50;
			this->bunifuCards3->Size = System::Drawing::Size(302, 187);
			this->bunifuCards3->TabIndex = 7;
			// 
			// noofexpiredmedicine
			// 
			this->noofexpiredmedicine->BackColor = System::Drawing::Color::Transparent;
			this->noofexpiredmedicine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noofexpiredmedicine->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->noofexpiredmedicine->Location = System::Drawing::Point(8, 75);
			this->noofexpiredmedicine->Name = L"noofexpiredmedicine";
			this->noofexpiredmedicine->Size = System::Drawing::Size(291, 75);
			this->noofexpiredmedicine->TabIndex = 3;
			this->noofexpiredmedicine->Text = L"Rs.";
			this->noofexpiredmedicine->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel7
			// 
			this->bunifuCustomLabel7->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bunifuCustomLabel7->Location = System::Drawing::Point(3, 12);
			this->bunifuCustomLabel7->Name = L"bunifuCustomLabel7";
			this->bunifuCustomLabel7->Size = System::Drawing::Size(296, 48);
			this->bunifuCustomLabel7->TabIndex = 1;
			this->bunifuCustomLabel7->Text = L"No. of Expired Medicine";
			this->bunifuCustomLabel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCards2
			// 
			this->bunifuCards2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCards2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCards2->BorderRadius = 40;
			this->bunifuCards2->BottomSahddow = true;
			this->bunifuCards2->color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCards2->Controls->Add(this->noofsuppliercompany);
			this->bunifuCards2->Controls->Add(this->bunifuCustomLabel5);
			this->bunifuCards2->LeftSahddow = true;
			this->bunifuCards2->Location = System::Drawing::Point(719, 88);
			this->bunifuCards2->Name = L"bunifuCards2";
			this->bunifuCards2->RightSahddow = true;
			this->bunifuCards2->ShadowDepth = 50;
			this->bunifuCards2->Size = System::Drawing::Size(302, 187);
			this->bunifuCards2->TabIndex = 4;
			// 
			// noofsuppliercompany
			// 
			this->noofsuppliercompany->BackColor = System::Drawing::Color::Transparent;
			this->noofsuppliercompany->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noofsuppliercompany->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->noofsuppliercompany->Location = System::Drawing::Point(8, 75);
			this->noofsuppliercompany->Name = L"noofsuppliercompany";
			this->noofsuppliercompany->Size = System::Drawing::Size(291, 75);
			this->noofsuppliercompany->TabIndex = 3;
			this->noofsuppliercompany->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bunifuCustomLabel5->Location = System::Drawing::Point(3, 12);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(296, 48);
			this->bunifuCustomLabel5->TabIndex = 1;
			this->bunifuCustomLabel5->Text = L"No. of Supplier Company";
			this->bunifuCustomLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCards4
			// 
			this->bunifuCards4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCards4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCards4->BorderRadius = 40;
			this->bunifuCards4->BottomSahddow = true;
			this->bunifuCards4->color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCards4->Controls->Add(this->noofmedicineavailable);
			this->bunifuCards4->Controls->Add(this->bunifuCustomLabel9);
			this->bunifuCards4->LeftSahddow = true;
			this->bunifuCards4->Location = System::Drawing::Point(365, 377);
			this->bunifuCards4->Name = L"bunifuCards4";
			this->bunifuCards4->RightSahddow = true;
			this->bunifuCards4->ShadowDepth = 50;
			this->bunifuCards4->Size = System::Drawing::Size(302, 187);
			this->bunifuCards4->TabIndex = 6;
			// 
			// noofmedicineavailable
			// 
			this->noofmedicineavailable->BackColor = System::Drawing::Color::Transparent;
			this->noofmedicineavailable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noofmedicineavailable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->noofmedicineavailable->Location = System::Drawing::Point(8, 75);
			this->noofmedicineavailable->Name = L"noofmedicineavailable";
			this->noofmedicineavailable->Size = System::Drawing::Size(291, 75);
			this->noofmedicineavailable->TabIndex = 3;
			this->noofmedicineavailable->Text = L"Rs.";
			this->noofmedicineavailable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel9
			// 
			this->bunifuCustomLabel9->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bunifuCustomLabel9->Location = System::Drawing::Point(3, 12);
			this->bunifuCustomLabel9->Name = L"bunifuCustomLabel9";
			this->bunifuCustomLabel9->Size = System::Drawing::Size(296, 48);
			this->bunifuCustomLabel9->TabIndex = 1;
			this->bunifuCustomLabel9->Text = L"No. of Medicnine available";
			this->bunifuCustomLabel9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCards1
			// 
			this->bunifuCards1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCards1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCards1->BorderRadius = 40;
			this->bunifuCards1->BottomSahddow = true;
			this->bunifuCards1->color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCards1->Controls->Add(this->monthlyPurchase);
			this->bunifuCards1->Controls->Add(this->bunifuCustomLabel3);
			this->bunifuCards1->LeftSahddow = true;
			this->bunifuCards1->Location = System::Drawing::Point(365, 88);
			this->bunifuCards1->Name = L"bunifuCards1";
			this->bunifuCards1->RightSahddow = true;
			this->bunifuCards1->ShadowDepth = 50;
			this->bunifuCards1->Size = System::Drawing::Size(302, 187);
			this->bunifuCards1->TabIndex = 4;
			// 
			// monthlyPurchase
			// 
			this->monthlyPurchase->BackColor = System::Drawing::Color::Transparent;
			this->monthlyPurchase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthlyPurchase->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->monthlyPurchase->Location = System::Drawing::Point(8, 75);
			this->monthlyPurchase->Name = L"monthlyPurchase";
			this->monthlyPurchase->Size = System::Drawing::Size(291, 75);
			this->monthlyPurchase->TabIndex = 3;
			this->monthlyPurchase->Text = L"Rs.";
			this->monthlyPurchase->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bunifuCustomLabel3->Location = System::Drawing::Point(3, 12);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(296, 48);
			this->bunifuCustomLabel3->TabIndex = 1;
			this->bunifuCustomLabel3->Text = L"Monthly Purchase:";
			this->bunifuCustomLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCards5
			// 
			this->bunifuCards5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->bunifuCards5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCards5->BorderRadius = 40;
			this->bunifuCards5->BottomSahddow = true;
			this->bunifuCards5->color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bunifuCards5->Controls->Add(this->noofemployees);
			this->bunifuCards5->Controls->Add(this->bunifuCustomLabel11);
			this->bunifuCards5->LeftSahddow = true;
			this->bunifuCards5->Location = System::Drawing::Point(7, 377);
			this->bunifuCards5->Name = L"bunifuCards5";
			this->bunifuCards5->RightSahddow = true;
			this->bunifuCards5->ShadowDepth = 50;
			this->bunifuCards5->Size = System::Drawing::Size(302, 187);
			this->bunifuCards5->TabIndex = 5;
			// 
			// noofemployees
			// 
			this->noofemployees->BackColor = System::Drawing::Color::Transparent;
			this->noofemployees->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noofemployees->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->noofemployees->Location = System::Drawing::Point(8, 75);
			this->noofemployees->Name = L"noofemployees";
			this->noofemployees->Size = System::Drawing::Size(291, 75);
			this->noofemployees->TabIndex = 3;
			this->noofemployees->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel11
			// 
			this->bunifuCustomLabel11->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bunifuCustomLabel11->Location = System::Drawing::Point(3, 12);
			this->bunifuCustomLabel11->Name = L"bunifuCustomLabel11";
			this->bunifuCustomLabel11->Size = System::Drawing::Size(296, 48);
			this->bunifuCustomLabel11->TabIndex = 1;
			this->bunifuCustomLabel11->Text = L"NO. of Employees:";
			this->bunifuCustomLabel11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// salesInfo
			// 
			this->salesInfo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->salesInfo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->salesInfo->BorderRadius = 40;
			this->salesInfo->BottomSahddow = true;
			this->salesInfo->color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->salesInfo->Controls->Add(this->monthlySales);
			this->salesInfo->Controls->Add(this->bunifuCustomLabel1);
			this->salesInfo->LeftSahddow = true;
			this->salesInfo->Location = System::Drawing::Point(7, 88);
			this->salesInfo->Name = L"salesInfo";
			this->salesInfo->RightSahddow = true;
			this->salesInfo->ShadowDepth = 50;
			this->salesInfo->Size = System::Drawing::Size(302, 187);
			this->salesInfo->TabIndex = 0;
			// 
			// monthlySales
			// 
			this->monthlySales->BackColor = System::Drawing::Color::Transparent;
			this->monthlySales->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthlySales->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->monthlySales->Location = System::Drawing::Point(8, 75);
			this->monthlySales->Name = L"monthlySales";
			this->monthlySales->Size = System::Drawing::Size(291, 75);
			this->monthlySales->TabIndex = 3;
			this->monthlySales->Text = L"Rs.";
			this->monthlySales->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bunifuCustomLabel1->Location = System::Drawing::Point(3, 12);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(296, 48);
			this->bunifuCustomLabel1->TabIndex = 1;
			this->bunifuCustomLabel1->Text = L"Monthly Sales";
			this->bunifuCustomLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Adminpage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1332, 753);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"Adminpage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adminpage";
			this->Load += gcnew System::EventHandler(this, &Adminpage::Adminpage_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->menuPanel->ResumeLayout(false);
			this->bunifuCards3->ResumeLayout(false);
			this->bunifuCards2->ResumeLayout(false);
			this->bunifuCards4->ResumeLayout(false);
			this->bunifuCards1->ResumeLayout(false);
			this->bunifuCards5->ResumeLayout(false);
			this->salesInfo->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Tools Tool;
		Form^ currentform = gcnew Form();

private: System::Void Adminpage_Load(System::Object^ sender, System::EventArgs^ e) { 
	//Admin Page Load

			DateTime today = DateTime::Today;
			DateTime start(today.Year, today.Month, 1);
			DateTime end;
			String^ startdate = start.ToShortDateString();

			if (today.Month == 12) {
				end = DateTime(today.Year + 1, 1, 1);
			}
			else {
				end = DateTime(today.Year, today.Month + 1, 1);
			}
			String^ enddate = end.ToShortDateString(); 

			int sales;//to store the monthly sales.
			int purchase;//to store the monthly purchase.
			SqlDataReader^ reader; //data reader.
			int No_of_companies;
			int No_of_employees;
			int No_of_medicines;


			SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
			connection.Open();

			//..Displays monthly sales	
			SqlCommand cmd("Select Sum(transaction_price) from sales where  Date<=@enddate and Date>=@startdate", % connection);
			cmd.Parameters->AddWithValue("@enddate", enddate);
			cmd.Parameters->AddWithValue("@startdate", startdate);
			reader = cmd.ExecuteReader();
			if (Tools::checkfornullvalues(reader)) {
				sales = reader->GetInt32(0);
				reader->Close();
			}
			else {
				sales = 0;
				reader->Close();

			}

			this->monthlySales->Text = this->monthlySales->Text + sales.ToString();
			///.....

			//Displays monthly purchase
			SqlCommand cmd2("Select Sum(total_price) from medicine_entry where entry_date<=@enddate and entry_date>=@startdate", % connection);
			cmd2.Parameters->AddWithValue("@enddate", enddate);
			cmd2.Parameters->AddWithValue("@startdate", startdate);
			reader = cmd2.ExecuteReader();

			if (Tools::checkfornullvalues(reader)) {
				purchase = reader->GetInt32(0);
				reader->Close();
			}
			else {
				purchase = 0;
				reader->Close();
			}

			this->monthlyPurchase->Text = this->monthlyPurchase->Text + purchase.ToString();


			//.. displays the total no. of supplier company.

			SqlCommand cmdnoofcompany("Select Count(company_id) from supplier_company", % connection);
			reader = cmdnoofcompany.ExecuteReader();

			if (Tools::checkfornullvalues(reader)) {
				No_of_companies = reader->GetInt32(0);
				reader->Close();

			}
			else {
				No_of_companies = 0;
				reader->Close();
			}
			this->noofsuppliercompany->Text = No_of_companies.ToString();
			//......

			//displays the no. of employees 
			SqlCommand cmdnoofemployees("Select Count(emp_id) from employees", % connection);
			reader = cmdnoofemployees.ExecuteReader();

			if(Tools::checkfornullvalues(reader)) {
				No_of_employees = reader->GetInt32(0);
				reader->Close();
			}
			else {
				No_of_employees = 0;
				reader->Close();
			}
			this->noofemployees->Text = No_of_employees.ToString();
				

			//.....

			//displays the no. of medicine available 
			
			reader = SqlCommand("Select Count(medicine_id) from medicine_stock", % connection).ExecuteReader();
			if (Tools::checkfornullvalues(reader)) {
				No_of_medicines = reader->GetInt32(0);
				reader->Close();
			}
			else {
				No_of_medicines = 0;
				reader->Close();
			}
			this->noofmedicineavailable->Text = No_of_medicines.ToString();\

			//....

			//displays the no. of expired medicine
			
			//.....

		}	
		
private: System::Void employeeButtonClick(System::Object^ sender, System::EventArgs^ e) {
	currentform->Close();
	//opens the employeeManagement form into the Adminpage form 
	this->homeLabel->Text = "EMPLOYEE";
	Form^ form = gcnew employeeManagement();
	currentform = form;
	Tools::childForm(form,this->panel5);  // calling the static childfrom function defined in Tools class
		}

private: System::Void supplierButtonClick(System::Object^ sender, System::EventArgs^ e) {
	//opens the Suppliers form into the Admins Page's Panel
		currentform->Close();
	this->homeLabel->Text = "SUPPLIERS";
	Form^ form = gcnew Suppliers();
	currentform = form;
	Tools::childForm(form, this->panel5);

}
private: System::Void salesDetailsButtonClick(System::Object^ sender, System::EventArgs^ e) {
		   //opens the Sales details page
	  currentform->Close();
	  this->homeLabel->Text = "Sales Details";
	  Form^ form = gcnew Salesdetails();
	  currentform = form;
	  Tools::childForm(form, this->panel5);
	   }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	currentform->Close();
	this->homeLabel->Text = "Purchase Details";
	Form^ form = gcnew Purchasedetails();
	currentform = form;
	Tools::childForm(form, this->panel5);

}


private: System::Void homeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->homeLabel->Text = "HOME";
	currentform->Close();
}

private: System::Void logoutButtonClick(System::Object^ sender, System::EventArgs^ e) {
		   this->Close();
	   }








	  




};
}

