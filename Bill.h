#pragma once

namespace MedicalStoreManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ns1::BunifuThinButton2^ addEmployeebuttton;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ nameofCustomer;
	private:

	private: System::Windows::Forms::Label^ addressofCustomerr;

	public: ns1::BunifuCustomDataGrid^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	public: System::Windows::Forms::Label^ addressofcustomer;
	public: System::Windows::Forms::Label^ date;
	private:
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bill::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->addEmployeebuttton = (gcnew ns1::BunifuThinButton2());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameofCustomer = (gcnew System::Windows::Forms::Label());
			this->addressofCustomerr = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew ns1::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->addressofcustomer = (gcnew System::Windows::Forms::Label());
			this->date = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
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
			this->addEmployeebuttton->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->addEmployeebuttton->BackColor = System::Drawing::SystemColors::Control;
			this->addEmployeebuttton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addEmployeebuttton.BackgroundImage")));
			this->addEmployeebuttton->ButtonText = L"Print";
			this->addEmployeebuttton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addEmployeebuttton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addEmployeebuttton->ForeColor = System::Drawing::Color::Transparent;
			this->addEmployeebuttton->IdleBorderThickness = 2;
			this->addEmployeebuttton->IdleCornerRadius = 15;
			this->addEmployeebuttton->IdleFillColor = System::Drawing::Color::Empty;
			this->addEmployeebuttton->IdleForecolor = System::Drawing::Color::Black;
			this->addEmployeebuttton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->addEmployeebuttton->Location = System::Drawing::Point(371, 619);
			this->addEmployeebuttton->Margin = System::Windows::Forms::Padding(5);
			this->addEmployeebuttton->Name = L"addEmployeebuttton";
			this->addEmployeebuttton->Size = System::Drawing::Size(190, 57);
			this->addEmployeebuttton->TabIndex = 21;
			this->addEmployeebuttton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 41);
			this->label1->TabIndex = 22;
			this->label1->Text = L" Name:";
			// 
			// nameofCustomer
			// 
			this->nameofCustomer->BackColor = System::Drawing::Color::Transparent;
			this->nameofCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameofCustomer->Location = System::Drawing::Point(119, 123);
			this->nameofCustomer->Name = L"nameofCustomer";
			this->nameofCustomer->Size = System::Drawing::Size(216, 26);
			this->nameofCustomer->TabIndex = 23;
			// 
			// addressofCustomerr
			// 
			this->addressofCustomerr->BackColor = System::Drawing::Color::Transparent;
			this->addressofCustomerr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addressofCustomerr->Location = System::Drawing::Point(12, 152);
			this->addressofCustomerr->Name = L"addressofCustomerr";
			this->addressofCustomerr->Size = System::Drawing::Size(129, 41);
			this->addressofCustomerr->TabIndex = 24;
			this->addressofCustomerr->Text = L"Address:";
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
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSlateGray;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::DarkGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 50;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column7, this->Column4, this->Column8, this->Column2
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
			this->dataGridView1->DoubleBuffered = true;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->HeaderBgColor = System::Drawing::Color::DarkGreen;
			this->dataGridView1->HeaderForeColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(-1, 196);
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
			this->dataGridView1->Size = System::Drawing::Size(564, 415);
			this->dataGridView1->TabIndex = 25;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Piece prize";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Amount";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"discount";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Total Prize";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// addressofcustomer
			// 
			this->addressofcustomer->BackColor = System::Drawing::Color::Transparent;
			this->addressofcustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addressofcustomer->Location = System::Drawing::Point(147, 164);
			this->addressofcustomer->Name = L"addressofcustomer";
			this->addressofcustomer->Size = System::Drawing::Size(216, 26);
			this->addressofcustomer->TabIndex = 26;
			// 
			// date
			// 
			this->date->BackColor = System::Drawing::Color::Transparent;
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->Location = System::Drawing::Point(345, 23);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(216, 26);
			this->date->TabIndex = 27;
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 675);
			this->Controls->Add(this->date);
			this->Controls->Add(this->addressofcustomer);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->addressofCustomerr);
			this->Controls->Add(this->nameofCustomer);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addEmployeebuttton);
			this->Name = L"Bill";
			this->Text = L"Bill";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion	

};
}
