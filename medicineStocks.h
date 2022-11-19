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
	/// Summary for medicineStocks
	/// </summary>
	public ref class medicineStocks : public System::Windows::Forms::Form
	{
	public:
		medicineStocks(void)
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
		~medicineStocks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel1;
	private: ns1::BunifuMaterialTextbox^ searchmedicineName;
	private: ns1::BunifuCustomDataGrid^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->searchmedicineName = (gcnew ns1::BunifuMaterialTextbox());
			this->dataGridView1 = (gcnew ns1::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(12, 19);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(264, 44);
			this->bunifuCustomLabel1->TabIndex = 1;
			this->bunifuCustomLabel1->Text = L"Name of Medicine:";
			this->bunifuCustomLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// searchmedicineName
			// 
			this->searchmedicineName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->searchmedicineName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->searchmedicineName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->searchmedicineName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchmedicineName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->searchmedicineName->HintText = L"Enter the name of medicine here";
			this->searchmedicineName->isPassword = false;
			this->searchmedicineName->LineFocusedColor = System::Drawing::Color::Blue;
			this->searchmedicineName->LineIdleColor = System::Drawing::Color::Gray;
			this->searchmedicineName->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->searchmedicineName->LineThickness = 3;
			this->searchmedicineName->Location = System::Drawing::Point(284, 13);
			this->searchmedicineName->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->searchmedicineName->Name = L"searchmedicineName";
			this->searchmedicineName->Size = System::Drawing::Size(348, 50);
			this->searchmedicineName->TabIndex = 2;
			this->searchmedicineName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->searchmedicineName->OnValueChanged += gcnew System::EventHandler(this, &medicineStocks::searchmedicineName_OnValueChanged);
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
			this->dataGridView1->BackgroundColor = System::Drawing::Color::GhostWhite;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
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
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->DoubleBuffered = true;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->dataGridView1->HeaderForeColor = System::Drawing::Color::White;
			this->dataGridView1->Location = System::Drawing::Point(0, 115);
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
			this->dataGridView1->Size = System::Drawing::Size(1205, 498);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Name";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"available_stock";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Description";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"retail_prize";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// medicineStocks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->ClientSize = System::Drawing::Size(1205, 613);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->searchmedicineName);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"medicineStocks";
			this->Text = L"medicineStocks";
			this->Load += gcnew System::EventHandler(this, &medicineStocks::medicineStocks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void medicineStocks_Load(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
		connection.Open();

		SqlCommand command("Select * from medicine_stock", % connection);
		SqlDataReader^ reader = command.ExecuteReader();
		while (reader->Read()) {
			this->dataGridView1->Rows->Add(reader->GetString(1), reader->GetInt32(4).ToString(), reader->GetString(5),reader->GetInt32(6).ToString());

		}
		}

	private: System::Void searchmedicineName_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->searchmedicineName->Text;
	SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
	connection.Open();

	SqlCommand cmd("Select * from medicine_stock where medicine_name like @name+'%'",%connection);
	cmd.Parameters->AddWithValue("@name", name);

	SqlDataReader^ reader= cmd.ExecuteReader();
	while (reader->Read()) {
		this->dataGridView1->Rows->Clear();
		this->dataGridView1->Rows->Add(reader->GetString(1), reader->GetInt32(4).ToString(), reader->GetString(5), reader->GetInt32(6).ToString());

	}


	}
	

};
}
