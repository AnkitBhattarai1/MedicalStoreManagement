#pragma once
#include "Tools.h"
#include "AdminLogin.h"
#include "employeeManagement.h"



namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ homeLabel;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ menuPanel;
	private: System::Windows::Forms::Button^ employeeButton;















	

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
			this->employeeButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->homeLabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->menuPanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
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
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Adminpage::panel1_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->employeeButton);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 130);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 623);
			this->panel3->TabIndex = 1;
			// 
			// employeeButton
			// 
			this->employeeButton->BackColor = System::Drawing::Color::Transparent;
			this->employeeButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->employeeButton->FlatAppearance->BorderSize = 0;
			this->employeeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(97)));
			this->employeeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employeeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeeButton->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->employeeButton->Location = System::Drawing::Point(0, 0);
			this->employeeButton->Name = L"employeeButton";
			this->employeeButton->Size = System::Drawing::Size(250, 58);
			this->employeeButton->TabIndex = 0;
			this->employeeButton->Text = L"EMPLOYEE";
			this->employeeButton->UseVisualStyleBackColor = false;
			this->employeeButton->Click += gcnew System::EventHandler(this, &Adminpage::employeeButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				static_cast<System::Int32>(static_cast<System::Byte>(97)));
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
			this->pictureBox1->Location = System::Drawing::Point(67, 12);
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
			this->panel4->Size = System::Drawing::Size(1082, 130);
			this->panel4->TabIndex = 1;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Adminpage::homePanelPaint);
			// 
			// homeLabel
			// 
			this->homeLabel->BackColor = System::Drawing::Color::Transparent;
			this->homeLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->homeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->homeLabel->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->homeLabel->Location = System::Drawing::Point(0, 0);
			this->homeLabel->Name = L"homeLabel";
			this->homeLabel->Size = System::Drawing::Size(1082, 130);
			this->homeLabel->TabIndex = 0;
			this->homeLabel->Text = L"HOME";
			this->homeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->menuPanel);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(250, 130);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1082, 623);
			this->panel5->TabIndex = 2;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Adminpage::Adminpage_Paint);
			// 
			// menuPanel
			// 
			this->menuPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuPanel->Location = System::Drawing::Point(0, 0);
			this->menuPanel->Name = L"menuPanel";
			this->menuPanel->Size = System::Drawing::Size(1082, 623);
			this->menuPanel->TabIndex = 0;
			// 
			// Adminpage
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(1332, 753);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"Adminpage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adminpage";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Adminpage::Adminpage_Paint);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Tools Tool;
	private: System::Void Adminpage_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//makes the background gradient
		Rectangle rect(0, 0, this->Width - 1, this->Height - 1);
		Tool.Lineargradientpaint(sender, e, rect, 196, 232, 194, 70, 160, 148, LinearGradientMode::Vertical);
		}
	
	private: System::Void panel1_Paint(Object^ sender, PaintEventArgs^ e) {
		//paint event form menu panel
		Rectangle rect(0, 0, this->Width, this->Height);
		Tool.Lineargradientpaint(sender, e, rect, 36, 77, 97, 86, 137, 192, LinearGradientMode::Vertical);
	}
	private: System::Void homePanelPaint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//paint event for home wala panel
		Rectangle rect(0, 0, this->panel4->Width, this->panel4->Height);
		 Tool.Lineargradientpaint(sender, e, rect,  86, 137, 192, 36, 77, 97, LinearGradientMode::Horizontal);
		   }

	

	private: System::Void employeeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//opens the employeeManagement form into the Adminpage form 
	this->homeLabel->Text = "EMPLOYEE";
	Form^ form = gcnew employeeManagement();
	Tools::childForm(form,this->panel5);  // calling the static childfrom function defined in Tools class
		}



};
}
