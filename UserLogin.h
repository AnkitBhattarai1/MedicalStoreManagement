#pragma once
#include "Tools.h"
#include "Admins.h"

namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for UserLogin
	/// </summary>
	public ref class UserLogin : public System::Windows::Forms::Form
	{
	public:
		UserLogin(void)
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
		~UserLogin()
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
	private: System::Windows::Forms::TextBox^ tbUsername;





	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ cancelButton;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserLogin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
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
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserLogin::panel1_Paint);
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
			this->panel7->Controls->Add(this->cancelButton);
			this->panel7->Controls->Add(this->loginButton);
			this->panel7->Controls->Add(this->tbPassword);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->tbUsername);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(0, 76);
			this->panel7->Margin = System::Windows::Forms::Padding(0);
			this->panel7->Name = L"panel7";
			this->panel7->Padding = System::Windows::Forms::Padding(50, 0, 0, 0);
			this->panel7->Size = System::Drawing::Size(456, 379);
			this->panel7->TabIndex = 2;
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::Transparent;
			this->cancelButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->cancelButton->FlatAppearance->BorderSize = 0;
			this->cancelButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelButton->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->cancelButton->Location = System::Drawing::Point(248, 218);
			this->cancelButton->Margin = System::Windows::Forms::Padding(0);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(129, 40);
			this->cancelButton->TabIndex = 8;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &UserLogin::cancelButton_click);
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->loginButton->FlatAppearance->BorderSize = 0;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->loginButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->loginButton->Location = System::Drawing::Point(58, 218);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(129, 40);
			this->loginButton->TabIndex = 7;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &UserLogin::loginButton_click);
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->CausesValidation = false;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::Color::GhostWhite;
			this->tbPassword->Location = System::Drawing::Point(58, 138);
			this->tbPassword->Margin = System::Windows::Forms::Padding(0);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(270, 32);
			this->tbPassword->TabIndex = 6;
			this->tbPassword->UseSystemPasswordChar = true;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &UserLogin::tbPassword_TextChanged);
			this->tbPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserLogin::UserLogin_KeyPress);
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
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbUsername->CausesValidation = false;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::Color::GhostWhite;
			this->tbUsername->Location = System::Drawing::Point(58, 58);
			this->tbUsername->Margin = System::Windows::Forms::Padding(0);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(270, 32);
			this->tbUsername->TabIndex = 1;
			this->tbUsername->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserLogin::UserLogin_KeyPress);
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
			this->label1->Text = L"User Login";
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
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// toolTip1
			// 
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Warning;
			// 
			// UserLogin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(196)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->ClientSize = System::Drawing::Size(1300, 800);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UserLogin";
			this->Padding = System::Windows::Forms::Padding(100, 80, 100, 80);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminLogin";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UserLogin::UserLogin_Paint);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserLogin::UserLogin_KeyPress);
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
		public: Tools Tool;	
			  Admins^ admin = nullptr;
			  
		
	private: System::Void UserLogin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {//Makes the background gradient
		//Graphics^ g = e->Graphics;
		//Rectangle rect(0, 0, this->Width - 1, this->Height - 1);			
		//LinearGradientBrush^ brush = gcnew LinearGradientBrush(rect, Color::FromArgb(196, 232, 194), Color::FromArgb(70, 160, 148), LinearGradientMode::BackwardDiagonal);
		//g->FillRectangle(brush, rect)			
	Rectangle rect(0, 0, this->Width - 1, this->Height - 1);
	Tool.Lineargradientpaint(sender, e, rect, 196, 232, 194, 70, 160, 148, LinearGradientMode::Vertical);
}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//Makes the bakcground gradient
		//Graphics^ g = e->Graphics;	
		//Rectangle rect(0, 0, this->Width - 1, this->Height - 1);	
		//LinearGradientBrush^ brush = gcnew LinearGradientBrush(rect,Color::FromArgb(196,232,194),Color::FromArgb(70,160,148),LinearGradientMode::BackwardDiagonal);
		//g->FillRectangle(brush, rect);
		//g->FillRectangle(brush, rect);)
	Rectangle rect(0, 0, this->Width - 1, this->Height - 1);
	Tool.Lineargradientpaint(sender, e, rect, 36, 77, 97, 86, 137, 192, LinearGradientMode::Vertical);

}

	private: System::Void cancelButton_click(System::Object^ sender, System::EventArgs^ e) {
		   //Closes the userlogin page 
		   this->Close();
	   }

	private: System::Void loginButton_click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String ^  username = this->tbUsername->Text;
		String^ password = this->tbPassword->Text;

		SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
		connection.Open();

		SqlCommand command("Select * from users where username=@username and password = @password ",%connection);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);
		SqlDataReader^ reader = command.ExecuteReader();


		if (reader->Read()) {	
			admin = gcnew Admins();
			admin->id = reader->GetInt32(0);
			admin->Name = reader->GetString(1);
			admin->Phone = reader->GetString(3);
			admin->Address = reader->GetString(5);
			admin->Email = reader->GetString(4);
			connection.Close();	
			this->Close();


		}
		else {
			this->tbUsername->Text = "";
			this->tbPassword->Text = "";
			MessageBox::Show("Invalid username or password");
		}
		

	}
	catch(Exception^ e) {

		MessageBox::Show("unable to connect to the database");
	}
}

	private: System::Void UserLogin_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 13) {
		loginButton_click(sender, e);
	}
}

	private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {  //warns if the password is not greater than 6 characters
	if (this->tbPassword->Text->Length <= 8) {
		this->toolTip1->Show("Password must have more than 8 characters",this->tbPassword);
	}
	if (this->tbPassword->Text->Length > 8) {
		this->toolTip1->RemoveAll();
	}
}
};
}
