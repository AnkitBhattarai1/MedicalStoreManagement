#pragma once
#include "Tools.h"
#include "UserLogin.h"
#include "medicineEntry.h"
#include "medicineStocks.h"
#include "sellMedicine.h"


namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Userspage
	/// </summary>

	public ref class Userspage : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ menuPanel;
	private: ns1::BunifuGradientPanel^ mainPanel;
	private: ns1::BunifuFlatButton^ viewMedicineButton;
	private: ns1::BunifuFlatButton^ sellMedicineButton;
	private: ns1::BunifuFlatButton^ medicineEntryButton;
	private: ns1::BunifuThinButton2^ logOutButton;




	private: System::Windows::Forms::Label^ homeLabel;


		   
	public:
		Userspage(void)
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
		~Userspage()
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
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Userspage::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->logOutButton = (gcnew ns1::BunifuThinButton2());
			this->medicineEntryButton = (gcnew ns1::BunifuFlatButton());
			this->sellMedicineButton = (gcnew ns1::BunifuFlatButton());
			this->viewMedicineButton = (gcnew ns1::BunifuFlatButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->homeLabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->menuPanel = (gcnew System::Windows::Forms::Panel());
			this->mainPanel = (gcnew ns1::BunifuGradientPanel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->menuPanel->SuspendLayout();
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
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->logOutButton);
			this->panel3->Controls->Add(this->medicineEntryButton);
			this->panel3->Controls->Add(this->sellMedicineButton);
			this->panel3->Controls->Add(this->viewMedicineButton);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 130);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 623);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Userspage::panel3_Paint);
			// 
			// logOutButton
			// 
			this->logOutButton->ActiveBorderThickness = 2;
			this->logOutButton->ActiveCornerRadius = 20;
			this->logOutButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->logOutButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->logOutButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->logOutButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->logOutButton->BackColor = System::Drawing::Color::Transparent;
			this->logOutButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logOutButton.BackgroundImage")));
			this->logOutButton->ButtonText = L"Log out";
			this->logOutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logOutButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logOutButton->ForeColor = System::Drawing::Color::Transparent;
			this->logOutButton->IdleBorderThickness = 3;
			this->logOutButton->IdleCornerRadius = 30;
			this->logOutButton->IdleFillColor = System::Drawing::Color::Empty;
			this->logOutButton->IdleForecolor = System::Drawing::Color::Transparent;
			this->logOutButton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->logOutButton->Location = System::Drawing::Point(14, 531);
			this->logOutButton->Margin = System::Windows::Forms::Padding(5);
			this->logOutButton->Name = L"logOutButton";
			this->logOutButton->Size = System::Drawing::Size(203, 65);
			this->logOutButton->TabIndex = 22;
			this->logOutButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->logOutButton->Click += gcnew System::EventHandler(this, &Userspage::logoutButtonClick);
			// 
			// medicineEntryButton
			// 
			this->medicineEntryButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->medicineEntryButton->BackColor = System::Drawing::Color::Transparent;
			this->medicineEntryButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->medicineEntryButton->BorderRadius = 7;
			this->medicineEntryButton->ButtonText = L"Medicine Entry";
			this->medicineEntryButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->medicineEntryButton->DisabledColor = System::Drawing::Color::Gray;
			this->medicineEntryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->medicineEntryButton->Iconcolor = System::Drawing::Color::Transparent;
			this->medicineEntryButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"medicineEntryButton.Iconimage")));
			this->medicineEntryButton->Iconimage_right = nullptr;
			this->medicineEntryButton->Iconimage_right_Selected = nullptr;
			this->medicineEntryButton->Iconimage_Selected = nullptr;
			this->medicineEntryButton->IconMarginLeft = 0;
			this->medicineEntryButton->IconMarginRight = 0;
			this->medicineEntryButton->IconRightVisible = true;
			this->medicineEntryButton->IconRightZoom = 0;
			this->medicineEntryButton->IconVisible = true;
			this->medicineEntryButton->IconZoom = 90;
			this->medicineEntryButton->IsTab = false;
			this->medicineEntryButton->Location = System::Drawing::Point(0, 140);
			this->medicineEntryButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->medicineEntryButton->Name = L"medicineEntryButton";
			this->medicineEntryButton->Normalcolor = System::Drawing::Color::Transparent;
			this->medicineEntryButton->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->medicineEntryButton->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->medicineEntryButton->selected = false;
			this->medicineEntryButton->Size = System::Drawing::Size(250, 57);
			this->medicineEntryButton->TabIndex = 3;
			this->medicineEntryButton->Text = L"Medicine Entry";
			this->medicineEntryButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->medicineEntryButton->Textcolor = System::Drawing::Color::White;
			this->medicineEntryButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->medicineEntryButton->Click += gcnew System::EventHandler(this, &Userspage::medicineEntryButtonEntry);
			// 
			// sellMedicineButton
			// 
			this->sellMedicineButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->sellMedicineButton->BackColor = System::Drawing::Color::Transparent;
			this->sellMedicineButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->sellMedicineButton->BorderRadius = 7;
			this->sellMedicineButton->ButtonText = L"Sell Medicine";
			this->sellMedicineButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sellMedicineButton->DisabledColor = System::Drawing::Color::Gray;
			this->sellMedicineButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sellMedicineButton->Iconcolor = System::Drawing::Color::Transparent;
			this->sellMedicineButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sellMedicineButton.Iconimage")));
			this->sellMedicineButton->Iconimage_right = nullptr;
			this->sellMedicineButton->Iconimage_right_Selected = nullptr;
			this->sellMedicineButton->Iconimage_Selected = nullptr;
			this->sellMedicineButton->IconMarginLeft = 0;
			this->sellMedicineButton->IconMarginRight = 0;
			this->sellMedicineButton->IconRightVisible = true;
			this->sellMedicineButton->IconRightZoom = 0;
			this->sellMedicineButton->IconVisible = true;
			this->sellMedicineButton->IconZoom = 90;
			this->sellMedicineButton->IsTab = false;
			this->sellMedicineButton->Location = System::Drawing::Point(-2, 70);
			this->sellMedicineButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->sellMedicineButton->Name = L"sellMedicineButton";
			this->sellMedicineButton->Normalcolor = System::Drawing::Color::Transparent;
			this->sellMedicineButton->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->sellMedicineButton->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->sellMedicineButton->selected = false;
			this->sellMedicineButton->Size = System::Drawing::Size(252, 58);
			this->sellMedicineButton->TabIndex = 2;
			this->sellMedicineButton->Text = L"Sell Medicine";
			this->sellMedicineButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->sellMedicineButton->Textcolor = System::Drawing::Color::White;
			this->sellMedicineButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sellMedicineButton->Click += gcnew System::EventHandler(this, &Userspage::sellMedicineButtonClick);
			// 
			// viewMedicineButton
			// 
			this->viewMedicineButton->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->viewMedicineButton->BackColor = System::Drawing::Color::Transparent;
			this->viewMedicineButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->viewMedicineButton->BorderRadius = 7;
			this->viewMedicineButton->ButtonText = L"Medicine Stocks";
			this->viewMedicineButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->viewMedicineButton->DisabledColor = System::Drawing::Color::Gray;
			this->viewMedicineButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->viewMedicineButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewMedicineButton->Iconcolor = System::Drawing::Color::Transparent;
			this->viewMedicineButton->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"viewMedicineButton.Iconimage")));
			this->viewMedicineButton->Iconimage_right = nullptr;
			this->viewMedicineButton->Iconimage_right_Selected = nullptr;
			this->viewMedicineButton->Iconimage_Selected = nullptr;
			this->viewMedicineButton->IconMarginLeft = 0;
			this->viewMedicineButton->IconMarginRight = 0;
			this->viewMedicineButton->IconRightVisible = true;
			this->viewMedicineButton->IconRightZoom = 0;
			this->viewMedicineButton->IconVisible = true;
			this->viewMedicineButton->IconZoom = 90;
			this->viewMedicineButton->IsTab = false;
			this->viewMedicineButton->Location = System::Drawing::Point(0, 0);
			this->viewMedicineButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->viewMedicineButton->Name = L"viewMedicineButton";
			this->viewMedicineButton->Normalcolor = System::Drawing::Color::Transparent;
			this->viewMedicineButton->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->viewMedicineButton->OnHoverTextColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->viewMedicineButton->selected = false;
			this->viewMedicineButton->Size = System::Drawing::Size(250, 58);
			this->viewMedicineButton->TabIndex = 0;
			this->viewMedicineButton->Text = L"Medicine Stocks";
			this->viewMedicineButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->viewMedicineButton->Textcolor = System::Drawing::Color::White;
			this->viewMedicineButton->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->viewMedicineButton->Click += gcnew System::EventHandler(this, &Userspage::viewMedicineButtonClick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 130);
			this->panel2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(0, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"user1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(65, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->homeLabel);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(250, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1082, 80);
			this->panel4->TabIndex = 1;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Userspage::homePanelPaint);
			// 
			// homeLabel
			// 
			this->homeLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeLabel->Location = System::Drawing::Point(0, 0);
			this->homeLabel->Name = L"homeLabel";
			this->homeLabel->Size = System::Drawing::Size(1082, 80);
			this->homeLabel->TabIndex = 0;
			this->homeLabel->Text = L"HOME";
			this->homeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->menuPanel);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(250, 80);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1082, 673);
			this->panel5->TabIndex = 2;
			// 
			// menuPanel
			// 
			this->menuPanel->Controls->Add(this->mainPanel);
			this->menuPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuPanel->Location = System::Drawing::Point(0, 0);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(1082, 673);
			this->menuPanel->TabIndex = 0;
			// 
			// mainPanel
			// 
			this->mainPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainPanel.BackgroundImage")));
			this->mainPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mainPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainPanel->GradientBottomLeft = System::Drawing::Color::White;
			this->mainPanel->GradientBottomRight = System::Drawing::Color::White;
			this->mainPanel->GradientTopLeft = System::Drawing::Color::White;
			this->mainPanel->GradientTopRight = System::Drawing::Color::White;
			this->mainPanel->Location = System::Drawing::Point(0, 0);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Quality = 10;
			this->mainPanel->Size = System::Drawing::Size(1082, 673);
			this->mainPanel->TabIndex = 0;
			// 
			// Userspage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(1332, 753);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"Userspage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adminpage";
			this->Load += gcnew System::EventHandler(this, &Userspage::Userspage_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Userspage::Userpage_Paint);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->menuPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}



#pragma endregion

		Form^ currentform = gcnew Form();//flag to keep which form is in the panel

	public:String^ role;


	private: System::Void Userpage_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//makes the background gradient
		Rectangle rect(0, 0, this->Width - 1, this->Height - 1);
		Tools::Lineargradientpaint(sender, e, rect, 196, 232, 194, 70, 160, 148, LinearGradientMode::Vertical);
	}

	private: System::Void homePanelPaint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Rectangle rect(0, 0, this->Width, this->Height);
		Tools::Lineargradientpaint(sender, e, rect, 98, 79, 130, 63, 59, 108, LinearGradientMode::Vertical);
	}

	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Rectangle rect(0, 0, this->Width, this->Height);
		Tools::Lineargradientpaint(sender, e, rect, 98, 79, 130, 63, 59, 108, LinearGradientMode::Vertical);
	}

	private: System::Void Userspage_Load(System::Object^ sender, System::EventArgs^ e) {

		if (role == "seller") {  // checks whats the role of the user		
			this->medicineEntryButton->Hide();
		}
		else if (role = "Data") {
			this->sellMedicineButton->Hide();
			this->viewMedicineButton->Hide();
		}

	}

	private: System::Void medicineEntryButtonEntry(System::Object^ sender, System::EventArgs^ e) {
		currentform->Close();
		this->homeLabel->Text = "Medicine Entry";
		medicineEntry^ form = gcnew medicineEntry();
		currentform = form;
		Tools::childForm(form, this->mainPanel);


	}

	private: System::Void viewMedicineButtonClick(System::Object^ sender, System::EventArgs^ e) {
		currentform->Close();
		this->homeLabel->Text = "Medicine Stocks";
		medicineStocks^ form = gcnew medicineStocks();
		currentform = form;
		Tools::childForm(form, this->mainPanel);
	}

	private: System::Void sellMedicineButtonClick(System::Object^ sender, System::EventArgs^ e) {
		currentform->Close();
		this->homeLabel->Text = "Sell Medicine";
		sellMedicine^ form = gcnew sellMedicine();
		currentform = form;
		Tools::childForm(form, this->mainPanel);

	}


	private: System::Void logoutButtonClick(Object^ sender, EventArgs^ e) {
		this->Close();
	}
};


}



