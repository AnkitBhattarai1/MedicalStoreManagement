#pragma once
#include "Admins.h"
#include "Tools.h"

namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for AdminLogin
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel7;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ tbpassword;
	private: System::Windows::Forms::TextBox^ tbusername;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;






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
		void InitializeComponent()
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(100, 80);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(20, 20, 0, 20);
			this->panel1->Size = System::Drawing::Size(1100, 640);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminLogin::backgroundPanelPaint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(644, 165);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(456, 455);
			this->panel4->TabIndex = 2;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button2);
			this->panel7->Controls->Add(this->button1);
			this->panel7->Controls->Add(this->tbpassword);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->tbusername);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(0, 76);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->panel7->Size = System::Drawing::Size(456, 379);
			this->panel7->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(254, 220);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminLogin::cancelButton);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(58, 220);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminLogin::loginButton);
			// 
			// tbpassword
			// 
			this->tbpassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->tbpassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbpassword->CausesValidation = false;
			this->tbpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbpassword->ForeColor = System::Drawing::Color::GhostWhite;
			this->tbpassword->Location = System::Drawing::Point(58, 141);
			this->tbpassword->Margin = System::Windows::Forms::Padding(0);
			this->tbpassword->Name = L"tbpassword";
			this->tbpassword->Size = System::Drawing::Size(270, 32);
			this->tbpassword->TabIndex = 3;
			this->tbpassword->UseSystemPasswordChar = true;
			this->tbpassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminLogin::tbpassword_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(53, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// tbusername
			// 
			this->tbusername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->tbusername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbusername->CausesValidation = false;
			this->tbusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbusername->ForeColor = System::Drawing::Color::GhostWhite;
			this->tbusername->Location = System::Drawing::Point(58, 58);
			this->tbusername->Margin = System::Windows::Forms::Padding(0);
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(270, 32);
			this->tbusername->TabIndex = 1;
			this->tbusername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminLogin::tbpassword_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(53, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Username:";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label1);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(456, 76);
			this->panel5->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(456, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(644, 20);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(456, 145);
			this->panel3->TabIndex = 1;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(169, 42);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 86);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(20, 20);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(624, 600);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(624, 600);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// AdminLogin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(1300, 800);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminLogin";
			this->Padding = System::Windows::Forms::Padding(100, 80, 100, 80);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminLogin";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminLogin::backgroundFormPaint);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		Admins^ admin = nullptr;     // Initializing the user  variable to nulptr.
		Tools Tool;			//Declaring the variable of the class Graphicstools

	private: System::Void cancelButton(System::Object^ sender, System::EventArgs^ e) {
			//Closes the Adminlogin page
			this->Close();
		} 

	private: System::Void loginButton(System::Object^ sender, System::EventArgs^ e) { 
		// When the button is clicked 
		// Reads the content in the text field 
		String^ username = this->tbusername->Text;
		String^ password = this->tbpassword->Text;

		if (username->Length == 0 || password->Length == 0) {
					//Checks if the Fields are incomplete or not 
			MessageBox::Show("Please enter all the fields", "Empty fields", MessageBoxButtons::OK);
			}

		else {
			try {   //Catches exception if occurs while connecting to the database
				
				//connection string to establish the connection to the database
				String^ Conn = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True";
				SqlConnection connection(Conn);
				connection.Open();

				String^ sqlquery = "SELECT * FROM Admins WHERE admin_username=@Name AND password=@Password";   //sqlquery 
				SqlCommand command(sqlquery, % connection);
				command.Parameters->AddWithValue("@Name", username);				
				command.Parameters->AddWithValue("@Password", password);

				SqlDataReader^ reader = command.ExecuteReader();

				if (reader->Read()) {
					admin = gcnew Admins;
					admin->id = reader->GetInt32(0); // gets the value at column 0 of the database and assign to admin->id;
					admin->Name = reader->GetString(1);
					admin->Email = reader->GetString(2);
					admin->Address = reader->GetString(3);
					admin->Phone = reader->GetString(4);
					admin->Password = reader->GetString(5);
					this->Close();

				}
				else {
					// blanks the username and password field.
					tbpassword->Text = "";
					tbusername->Text = "";
					MessageBox::Show("Invalid Username or Password", "Invalid input", MessageBoxButtons::OK);
					}
				}
			catch (Exception^ e) {
				MessageBox::Show("Failed to connect to the database", "Connection Error", MessageBoxButtons::OK);

				}
			}
		}	

	private: System::Void tbpassword_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { 
		//calls the loginButton function if the keychar is enter (Ascii value of enter is 13).
		if (e->KeyChar == 13) {
			loginButton(sender, e);
			}

		}		

	private: System::Void backgroundFormPaint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			   //Makes the background gradient
			   //Graphics^ g = e->Graphics;	
			   //Rectangle rect(0, 0, this->Width - 1, this->Height - 1);	
			   //LinearGradientBrush^ brush = gcnew LinearGradientBrush(rect,Color::FromArgb(196,232,194),Color::FromArgb(70,160,148),LinearGradientMode::BackwardDiagonal);
			   //g->FillRectangle(brush, rect);
			   //g->FillRectangle(brush, rect);)

			   Rectangle rect(0, 0, this->Width - 1, this->Height - 1);
			   Tool.Lineargradientpaint(sender, e, rect, 196, 232, 194, 70, 160, 148, LinearGradientMode::Vertical);
		   }

	private: System::Void backgroundPanelPaint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//Makes the bakcground gradient
		//Graphics^ g = e->Graphics;	
		//Rectangle rect(0, 0, this->Width - 1, this->Height - 1);	
		//LinearGradientBrush^ brush = gcnew LinearGradientBrush(rect,Color::FromArgb(196,232,194),Color::FromArgb(70,160,148),LinearGradientMode::BackwardDiagonal);
		//g->FillRectangle(brush, rect);
		//g->FillRectangle(brush, rect);)

		Rectangle rect(0, 0, this->Width - 1, this->Height - 1);
		Tool.Lineargradientpaint(sender, e, rect, 36, 77, 97, 86, 137, 192, LinearGradientMode::Vertical);
	}


};
}

