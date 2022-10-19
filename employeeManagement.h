#include "Tools.h"
#pragma once


namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ addEmployeeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ removeEmployeeToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ searchEmployeeToolStripMenuItem;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->addEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removeEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchEmployeeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1279, 74);
			this->panel1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addEmployeeToolStripMenuItem,
					this->removeEmployeeToolStripMenuItem, this->searchEmployeeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1279, 74);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// addEmployeeToolStripMenuItem
			// 
			this->addEmployeeToolStripMenuItem->Name = L"addEmployeeToolStripMenuItem";
			this->addEmployeeToolStripMenuItem->Size = System::Drawing::Size(154, 92);
			this->addEmployeeToolStripMenuItem->Text = L"Add Employee";
			// 
			// removeEmployeeToolStripMenuItem
			// 
			this->removeEmployeeToolStripMenuItem->Name = L"removeEmployeeToolStripMenuItem";
			this->removeEmployeeToolStripMenuItem->Size = System::Drawing::Size(187, 92);
			this->removeEmployeeToolStripMenuItem->Text = L"Remove Employee";
			// 
			// searchEmployeeToolStripMenuItem
			// 
			this->searchEmployeeToolStripMenuItem->Name = L"searchEmployeeToolStripMenuItem";
			this->searchEmployeeToolStripMenuItem->Size = System::Drawing::Size(175, 92);
			this->searchEmployeeToolStripMenuItem->Text = L"Search Employee";
			// 
			// employeeManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1279, 793);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"employeeManagement";
			this->Text = L"employeeManagement";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	Tools Tool;
		
	
};
	



}
