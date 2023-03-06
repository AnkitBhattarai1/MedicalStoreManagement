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
	/// Summary for Salesdetails
	/// </summary>
	public ref class Salesdetails : public System::Windows::Forms::Form
	{
	public:
		Salesdetails(void)
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
		~Salesdetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ns1::BunifuCustomDataGrid^ salesTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	protected:

	protected:

	protected:






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->salesTable = (gcnew ns1::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesTable))->BeginInit();
			this->SuspendLayout();
			// 
			// salesTable
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->salesTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->salesTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->salesTable->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->salesTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->salesTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->salesTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->salesTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->salesTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1, this->Column6,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->salesTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->salesTable->DoubleBuffered = true;
			this->salesTable->EnableHeadersVisualStyles = false;
			this->salesTable->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->salesTable->HeaderForeColor = System::Drawing::Color::White;
			this->salesTable->Location = System::Drawing::Point(0, 0);
			this->salesTable->Name = L"salesTable";
			this->salesTable->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->salesTable->RowHeadersWidth = 50;
			this->salesTable->RowTemplate->Height = 24;
			this->salesTable->Size = System::Drawing::Size(1223, 557);
			this->salesTable->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Date";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Name of Customer";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name of medicine";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Stock Amount";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Discount(in %)";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Transaction price";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Salesdetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1223, 557);
			this->Controls->Add(this->salesTable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Salesdetails";
			this->Text = L"Salesdetails";
			this->Load += gcnew System::EventHandler(this, &Salesdetails::Salesdetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->salesTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void Salesdetails_Load(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
	connection.Open();


	this->salesTable->Rows->Clear();

	// loads the data in the datagridview
	String^ sqlquery = "select sales.Date, customer.name, medicine_stock.medicine_name,sales.stock, sales.discount , sales.transaction_price " +
		"from" +
		"((sales join customer on sales.customer_id = customer.customer_id)"
		"join medicine_stock on sales.medicine_id = medicine_stock.medicine_id)";

	SqlCommand cmd(sqlquery, % connection);

	SqlDataReader^ reader = cmd.ExecuteReader();
	try {

		while (reader->Read()) {
			String^ date = reader->GetDateTime(0).ToShortDateString();
			String^ customername = reader->GetString(1);
			String^ medicinename = reader->GetString(2);
			String^ stockamount = reader->GetInt32(3).ToString();
			String^ discount = reader->GetInt32(4).ToString();
			String^ transaction_price = reader->GetInt32(5).ToString();


			this->salesTable->Rows->Add(date, customername, medicinename, stockamount, discount, transaction_price);
		}
	}
	catch (Exception^ e) {

		MessageBox::Show("some error occured");
	}

}
};
}
