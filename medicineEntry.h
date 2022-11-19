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
	/// Summary for medicineEntry
	/// </summary>
	public ref class medicineEntry : public System::Windows::Forms::Form
	{
	public:
		medicineEntry(void)
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
		~medicineEntry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: ns1::BunifuMaterialTextbox^ medicineName;
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: WindowsFormsControlLibrary1::BunifuCustomTextbox^ description;

	private: ns1::BunifuCustomLabel^ bunifuCustomLabel2;
	private: ns1::BunifuCustomLabel^ expiryDateLabel;
	private: ns1::BunifuCustomLabel^ manufactureDateLabel;
	private: ns1::BunifuCustomLabel^ totalStockPrizeLabel;




	private: ns1::BunifuCustomLabel^ perPiecePrizeLabel;
	private: ns1::BunifuDatepicker^ expiryDate;
	private: ns1::BunifuDatepicker^ manufactureDate;





	private: System::Windows::Forms::ComboBox^ companyName;

	private: ns1::BunifuThinButton2^ bunifuThinButton21;
	private: ns1::BunifuCustomLabel^ bunifuCustomLabel3;
	private: System::Windows::Forms::NumericUpDown^ perPiecePrize;
	private: System::Windows::Forms::NumericUpDown^ totalStock;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(medicineEntry::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->perPiecePrize = (gcnew System::Windows::Forms::NumericUpDown());
			this->totalStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->companyName = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton21 = (gcnew ns1::BunifuThinButton2());
			this->bunifuCustomLabel3 = (gcnew ns1::BunifuCustomLabel());
			this->expiryDate = (gcnew ns1::BunifuDatepicker());
			this->manufactureDate = (gcnew ns1::BunifuDatepicker());
			this->totalStockPrizeLabel = (gcnew ns1::BunifuCustomLabel());
			this->perPiecePrizeLabel = (gcnew ns1::BunifuCustomLabel());
			this->expiryDateLabel = (gcnew ns1::BunifuCustomLabel());
			this->manufactureDateLabel = (gcnew ns1::BunifuCustomLabel());
			this->description = (gcnew WindowsFormsControlLibrary1::BunifuCustomTextbox());
			this->bunifuCustomLabel2 = (gcnew ns1::BunifuCustomLabel());
			this->medicineName = (gcnew ns1::BunifuMaterialTextbox());
			this->bunifuCustomLabel1 = (gcnew ns1::BunifuCustomLabel());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perPiecePrize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->totalStock))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->HotTrack = true;
			this->tabControl1->ItemSize = System::Drawing::Size(50, 50);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1082, 623);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->tabPage2->Controls->Add(this->perPiecePrize);
			this->tabPage2->Controls->Add(this->totalStock);
			this->tabPage2->Controls->Add(this->companyName);
			this->tabPage2->Controls->Add(this->bunifuThinButton21);
			this->tabPage2->Controls->Add(this->bunifuCustomLabel3);
			this->tabPage2->Controls->Add(this->expiryDate);
			this->tabPage2->Controls->Add(this->manufactureDate);
			this->tabPage2->Controls->Add(this->totalStockPrizeLabel);
			this->tabPage2->Controls->Add(this->perPiecePrizeLabel);
			this->tabPage2->Controls->Add(this->expiryDateLabel);
			this->tabPage2->Controls->Add(this->manufactureDateLabel);
			this->tabPage2->Controls->Add(this->description);
			this->tabPage2->Controls->Add(this->bunifuCustomLabel2);
			this->tabPage2->Controls->Add(this->medicineName);
			this->tabPage2->Controls->Add(this->bunifuCustomLabel1);
			this->tabPage2->Location = System::Drawing::Point(4, 54);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1074, 565);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Entry Medicine";
			// 
			// perPiecePrize
			// 
			this->perPiecePrize->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->perPiecePrize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perPiecePrize->Location = System::Drawing::Point(256, 288);
			this->perPiecePrize->Name = L"perPiecePrize";
			this->perPiecePrize->Size = System::Drawing::Size(293, 28);
			this->perPiecePrize->TabIndex = 17;
			// 
			// totalStock
			// 
			this->totalStock->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->totalStock->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalStock->Location = System::Drawing::Point(256, 351);
			this->totalStock->Name = L"totalStock";
			this->totalStock->Size = System::Drawing::Size(293, 28);
			this->totalStock->TabIndex = 16;
			// 
			// companyName
			// 
			this->companyName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->companyName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->companyName->FormattingEnabled = true;
			this->companyName->Location = System::Drawing::Point(826, 37);
			this->companyName->Name = L"companyName";
			this->companyName->Size = System::Drawing::Size(237, 33);
			this->companyName->TabIndex = 15;
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Add ";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->Location = System::Drawing::Point(888, 494);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(181, 46);
			this->bunifuThinButton21->TabIndex = 14;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &medicineEntry::addMedicineClick);
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(578, 26);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(354, 44);
			this->bunifuCustomLabel3->TabIndex = 13;
			this->bunifuCustomLabel3->Text = L"Supplier Company:";
			this->bunifuCustomLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// expiryDate
			// 
			this->expiryDate->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->expiryDate->BackColor = System::Drawing::Color::SeaGreen;
			this->expiryDate->BorderRadius = 0;
			this->expiryDate->ForeColor = System::Drawing::Color::White;
			this->expiryDate->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->expiryDate->FormatCustom = nullptr;
			this->expiryDate->Location = System::Drawing::Point(256, 204);
			this->expiryDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->expiryDate->Name = L"expiryDate";
			this->expiryDate->Size = System::Drawing::Size(293, 57);
			this->expiryDate->TabIndex = 12;
			this->expiryDate->Value = System::DateTime(2022, 11, 14, 0, 57, 22, 594);
			// 
			// manufactureDate
			// 
			this->manufactureDate->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->manufactureDate->BackColor = System::Drawing::Color::SeaGreen;
			this->manufactureDate->BorderRadius = 0;
			this->manufactureDate->ForeColor = System::Drawing::Color::White;
			this->manufactureDate->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->manufactureDate->FormatCustom = nullptr;
			this->manufactureDate->Location = System::Drawing::Point(258, 123);
			this->manufactureDate->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->manufactureDate->Name = L"manufactureDate";
			this->manufactureDate->Size = System::Drawing::Size(291, 59);
			this->manufactureDate->TabIndex = 11;
			this->manufactureDate->Value = System::DateTime(2022, 11, 14, 0, 57, 22, 594);
			// 
			// totalStockPrizeLabel
			// 
			this->totalStockPrizeLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->totalStockPrizeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->totalStockPrizeLabel->Location = System::Drawing::Point(3, 332);
			this->totalStockPrizeLabel->Name = L"totalStockPrizeLabel";
			this->totalStockPrizeLabel->Size = System::Drawing::Size(354, 47);
			this->totalStockPrizeLabel->TabIndex = 9;
			this->totalStockPrizeLabel->Text = L"Total Stock:";
			this->totalStockPrizeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// perPiecePrizeLabel
			// 
			this->perPiecePrizeLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->perPiecePrizeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->perPiecePrizeLabel->Location = System::Drawing::Point(6, 274);
			this->perPiecePrizeLabel->Name = L"perPiecePrizeLabel";
			this->perPiecePrizeLabel->Size = System::Drawing::Size(354, 47);
			this->perPiecePrizeLabel->TabIndex = 8;
			this->perPiecePrizeLabel->Text = L"Prize per piece:";
			this->perPiecePrizeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// expiryDateLabel
			// 
			this->expiryDateLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->expiryDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->expiryDateLabel->Location = System::Drawing::Point(3, 204);
			this->expiryDateLabel->Name = L"expiryDateLabel";
			this->expiryDateLabel->Size = System::Drawing::Size(354, 57);
			this->expiryDateLabel->TabIndex = 7;
			this->expiryDateLabel->Text = L"Expiry  Date:";
			this->expiryDateLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// manufactureDateLabel
			// 
			this->manufactureDateLabel->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->manufactureDateLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->manufactureDateLabel->Location = System::Drawing::Point(6, 123);
			this->manufactureDateLabel->Name = L"manufactureDateLabel";
			this->manufactureDateLabel->Size = System::Drawing::Size(354, 59);
			this->manufactureDateLabel->TabIndex = 6;
			this->manufactureDateLabel->Text = L"Manufacture Date:";
			this->manufactureDateLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// description
			// 
			this->description->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->description->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->description->BorderColor = System::Drawing::Color::SeaGreen;
			this->description->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->description->Location = System::Drawing::Point(680, 269);
			this->description->Multiline = true;
			this->description->Name = L"description";
			this->description->Size = System::Drawing::Size(386, 202);
			this->description->TabIndex = 5;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(674, 227);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(354, 50);
			this->bunifuCustomLabel2->TabIndex = 4;
			this->bunifuCustomLabel2->Text = L"Description:";
			this->bunifuCustomLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// medicineName
			// 
			this->medicineName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->medicineName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->medicineName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->medicineName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->medicineName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->medicineName->HintText = L"Enter the name of medicine here";
			this->medicineName->isPassword = false;
			this->medicineName->LineFocusedColor = System::Drawing::Color::Blue;
			this->medicineName->LineIdleColor = System::Drawing::Color::Gray;
			this->medicineName->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->medicineName->LineThickness = 3;
			this->medicineName->Location = System::Drawing::Point(12, 51);
			this->medicineName->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->medicineName->Name = L"medicineName";
			this->medicineName->Size = System::Drawing::Size(348, 50);
			this->medicineName->TabIndex = 1;
			this->medicineName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(6, 3);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(354, 44);
			this->bunifuCustomLabel1->TabIndex = 0;
			this->bunifuCustomLabel1->Text = L"Name of Medicine:";
			this->bunifuCustomLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->tabPage1->Location = System::Drawing::Point(4, 54);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1074, 565);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Medicine Details";
			// 
			// medicineEntry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->ClientSize = System::Drawing::Size(1082, 623);
			this->Controls->Add(this->tabControl1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"medicineEntry";
			this->Text = L"medicineEntry";
			this->Load += gcnew System::EventHandler(this, &medicineEntry::medicineEntry_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->perPiecePrize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->totalStock))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ todaydate = DateTime::Today.ToShortDateString();
	
private: System::Void medicineEntry_Load(System::Object^ sender, System::EventArgs^ e) {

	SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
	connection.Open();

	SqlCommand cmd("Select * from supplier_company", % connection);

	SqlDataReader^ reader = cmd.ExecuteReader();

	DataTable^ dt = gcnew DataTable();
	dt->Load(reader);
	this->companyName->ValueMember = ("company_name");
	this->companyName->DataSource = dt;

	
}

private: System::Void addMedicineClick(System::Object^ sender, System::EventArgs^ e) {
	
	String^ name = this->medicineName->Text;
	String^ mfgdate = this->manufactureDate->Value.ToShortDateString();
	String^ expdate = this->expiryDate->Value.ToShortDateString();
	Decimal perpieceprize = this->perPiecePrize->Value;
	Decimal stockamount = this->totalStock->Value;
	Decimal totalprize = perpieceprize * stockamount;
	String^ companyname = this->companyName->Text;
	String^ description = this->description->Text;;

	int medicineid;

	SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
	connection.Open();

label1:
	SqlCommand cmd1("Select * from medicine_stock where medicine_name = @name",%connection);  //checks if the medicine already exists or not
	cmd1.Parameters->AddWithValue("@name", name);
	SqlDataReader^ reader = cmd1.ExecuteReader();

	//....
	if (reader->Read()) { //update the medicine stock table if the medicine already exists
		Decimal retailprize = (Decimal)reader->GetInt32(6);
		if (retailprize < perpieceprize * (Decimal)(1.5)) {
			retailprize = perpieceprize * (Decimal)(1.5);
		}
		medicineid = reader->GetInt32(0); //gets the medicine id
		reader->Close();//don't know just throws exception so......		
		SqlCommand cmd2("update medicine_stock set available_stock = available_stock+@stock , retail_price = @price where medicine_name = @name", % connection);
		cmd2.Parameters->AddWithValue("@name",name);
		cmd2.Parameters->AddWithValue("@stock", stockamount);	
		cmd2.Parameters->AddWithValue("@price", retailprize);
		
		cmd2.ExecuteNonQuery();

	}
	///problem with medicine id (dealed)

	else {   //add a new medicine to the medicine stocks table if the medicine doesnot already exists.
		reader->Close();
		SqlCommand cmd3("Insert into medicine_stock values(@name,@category,@type,@stock,@description,@retail_price)", % connection);
		cmd3.Parameters->AddWithValue("@category",6);
		cmd3.Parameters->AddWithValue("@name", name);
		cmd3.Parameters->AddWithValue("@type", 0);
		cmd3.Parameters->AddWithValue("@stock", 0);
		cmd3.Parameters->AddWithValue("@description", description);
		cmd3.Parameters->AddWithValue("retail_price",0);
		cmd3.ExecuteNonQuery();	
		goto label1;
				
	}	
	//...//

	//.....

	SqlCommand cmd5("Select * from supplier_company where company_name = @name",%connection);/// gets the companyid of the supplier commpany
	cmd5.Parameters->AddWithValue("@name", companyname);
	SqlDataReader^ reader1 = cmd5.ExecuteReader();
	Decimal companyid;
	if (reader1->Read()) {
		 companyid = (Decimal)reader1->GetInt32(0);
		reader1->Close();
	}
	else {
		reader1->Close();
	}

	SqlCommand cmd4("Insert into medicine_entry values (@medicineid, @supplierid, @buyprize, @mfgdate, @expdate,@perprize,@totalstock,@totalprize,@entrydate )", % connection);
	//insert the data into the medicine_entry database

	cmd4.Parameters->AddWithValue("@medicineid", medicineid);
	cmd4.Parameters->AddWithValue("@supplierid", companyid);
	cmd4.Parameters->AddWithValue("@buyprize",0);
	cmd4.Parameters->AddWithValue("@mfgdate",mfgdate);
	cmd4.Parameters->AddWithValue("@expdate",expdate);
	cmd4.Parameters->AddWithValue("@perprize",perpieceprize);
	cmd4.Parameters->AddWithValue("@totalstock", stockamount);
	cmd4.Parameters->AddWithValue("@totalprize",totalprize);
	cmd4.Parameters->AddWithValue("@entrydate",DateTime::Today.ToShortDateString());
	cmd4.ExecuteNonQuery();
	//.....//

	//....

	this->medicineName->Text = "";
	this->manufactureDate->Value = DateTime::Today;
	this->expiryDate->Value = DateTime::Today;
	this->perPiecePrize->Value = 0;
	this->totalStock->Value = 0;
	this->companyName->Text = "";
	this->description->Clear();
}


};
}
