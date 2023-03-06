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
	/// Summary for Purchasedetails
	/// </summary>
	public ref class Purchasedetails : public System::Windows::Forms::Form
	{
	public:
		Purchasedetails(void)
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
		~Purchasedetails()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ns1::BunifuCustomDataGrid^ purchaseDetailTable;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

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
			this->purchaseDetailTable = (gcnew ns1::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->purchaseDetailTable))->BeginInit();
			this->SuspendLayout();
			// 
			// purchaseDetailTable
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->purchaseDetailTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->purchaseDetailTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->purchaseDetailTable->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->purchaseDetailTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->purchaseDetailTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->purchaseDetailTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->purchaseDetailTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->purchaseDetailTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->purchaseDetailTable->Dock = System::Windows::Forms::DockStyle::Fill;
			this->purchaseDetailTable->DoubleBuffered = true;
			this->purchaseDetailTable->EnableHeadersVisualStyles = false;
			this->purchaseDetailTable->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->purchaseDetailTable->HeaderForeColor = System::Drawing::Color::White;
			this->purchaseDetailTable->Location = System::Drawing::Point(0, 0);
			this->purchaseDetailTable->Name = L"purchaseDetailTable";
			this->purchaseDetailTable->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->purchaseDetailTable->RowHeadersWidth = 51;
			this->purchaseDetailTable->RowTemplate->Height = 24;
			this->purchaseDetailTable->Size = System::Drawing::Size(1205, 510);
			this->purchaseDetailTable->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Date";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name of medicine";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Supplier Company";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Stock Amount";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Total prize";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Purchasedetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1205, 510);
			this->Controls->Add(this->purchaseDetailTable);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Purchasedetails";
			this->Text = L"Purchasedetails";
			this->Load += gcnew System::EventHandler(this, &Purchasedetails::Purchasedetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->purchaseDetailTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void Purchasedetails_Load(System::Object^ sender, System::EventArgs^ e) {
		//

		//try {
			SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
			connection.Open();

			String^ query = "select medicine_entry.entry_date, medicine_stock.medicine_name, supplier_company.company_name, medicine_entry.amount, medicine_entry.total_price " +
				"from " +
				"((medicine_entry join medicine_stock on medicine_stock.medicine_id = medicine_entry.medicine_id) " +
				"join supplier_company on  medicine_entry.supplier_id = supplier_company.company_id)";

			SqlCommand cmd(query, % connection);
			this->purchaseDetailTable->Rows->Clear();

			SqlDataReader^ reader = cmd.ExecuteReader();
			while (reader->Read()) {
				String^ Date = reader->GetDateTime(0).ToShortDateString();
				String^ medicinename = reader->GetString(1);
				String^ suppliercompany = reader->GetString(2);
				String^ stockamount = reader->GetInt32(3).ToString();
				String^ totalprice = reader->GetInt32(4).ToString();

				this->purchaseDetailTable->Rows->Add(Date, medicinename, suppliercompany, stockamount, totalprice);

			}
		//}
		//catch (Exception^ e) {
		//	MessageBox::Show("Some error occured");
		//}
	}
};
}
