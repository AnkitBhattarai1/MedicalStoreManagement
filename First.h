#pragma once
#include "AdminLogin.h"
#include "UserLogin.h"
#include "Admins.h"
#include "Adminpage.h"
#include "Userspage.h"


namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for First
	/// </summary>
	public ref class First : public System::Windows::Forms::Form
	{
	public:
		First(void)
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
		~First()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(356, 215);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Admin";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &First::adminLoginButoon);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(455, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"User";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &First::userLoginButton);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(236, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &First::cancleButton);
			// 
			// First
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1082, 653);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"First";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"First";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void adminLoginButoon(System::Object^ sender, System::EventArgs^ e) { // Called when admin button is clicked
		this->Hide();  //Hides the first page	
		AdminLogin adminloginpage;
		adminloginpage.ShowDialog(); //Shows the adminloginpage

		if (adminloginpage.admin != nullptr) {			 
			Adminpage adminpage;      // Decalring the variable of the adminpage
			adminpage.ShowDialog();  // shows the adminpage form		

				}	

		this->Show();	//Shows the hidden page	

		}

	private: System::Void userLoginButton(System::Object^ sender, System::EventArgs^ e) { // called when User button is clicked
		this->Hide();  //Hides the first form
		UserLogin userloginpage;     
		userloginpage.ShowDialog();   //opens the userlogingform

		if (userloginpage.admin != nullptr) {			
			Userspage userpage;			
			if (userloginpage.admin->role == "seller"){  /// sets the role of the user 
				userpage.role = "seller";
			}
			userpage.ShowDialog();
		}
		this->Show();	
		}

	private: System::Void cancleButton(System::Object^ sender, System::EventArgs^ e) {    // called when cancel Button is clicked
		this->Close();  //closes the form

		}

	
};
}
