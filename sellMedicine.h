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
	/// Summary for sellMedicine
	/// </summary>
	public ref class sellMedicine : public System::Windows::Forms::Form
	{
	public:
		sellMedicine(void)
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
		~sellMedicine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: ns1::BunifuMaterialTextbox^ customerName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ medicineName;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: ns1::BunifuMaterialTextbox^ customerAddress;

	private: System::Windows::Forms::NumericUpDown^ customerContact;
	private: System::Windows::Forms::NumericUpDown^ stockAmount;


	private: ns1::BunifuThinButton2^ sellButton;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ discount;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sellMedicine::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->customerName = (gcnew ns1::BunifuMaterialTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->medicineName = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->customerAddress = (gcnew ns1::BunifuMaterialTextbox());
			this->customerContact = (gcnew System::Windows::Forms::NumericUpDown());
			this->stockAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->sellButton = (gcnew ns1::BunifuThinButton2());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->discount = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customerContact))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockAmount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->discount))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 41);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name of Customer:";
			// 
			// customerName
			// 
			this->customerName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->customerName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->customerName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->customerName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerName->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerName->HintText = L"";
			this->customerName->isPassword = false;
			this->customerName->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerName->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->customerName->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerName->LineThickness = 3;
			this->customerName->Location = System::Drawing::Point(285, 47);
			this->customerName->Margin = System::Windows::Forms::Padding(4);
			this->customerName->Name = L"customerName";
			this->customerName->Size = System::Drawing::Size(348, 41);
			this->customerName->TabIndex = 22;
			this->customerName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 41);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Name of Medicine";
			// 
			// medicineName
			// 
			this->medicineName->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->medicineName->FormattingEnabled = true;
			this->medicineName->Location = System::Drawing::Point(285, 262);
			this->medicineName->Name = L"medicineName";
			this->medicineName->Size = System::Drawing::Size(348, 24);
			this->medicineName->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(266, 41);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Stock Amount";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 128);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(266, 41);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Contact:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 41);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Address:";
			// 
			// customerAddress
			// 
			this->customerAddress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->customerAddress->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->customerAddress->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11));
			this->customerAddress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerAddress->HintForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerAddress->HintText = L"";
			this->customerAddress->isPassword = false;
			this->customerAddress->LineFocusedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerAddress->LineIdleColor = System::Drawing::Color::BurlyWood;
			this->customerAddress->LineMouseHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->customerAddress->LineThickness = 3;
			this->customerAddress->Location = System::Drawing::Point(285, 188);
			this->customerAddress->Margin = System::Windows::Forms::Padding(4);
			this->customerAddress->Name = L"customerAddress";
			this->customerAddress->Size = System::Drawing::Size(348, 41);
			this->customerAddress->TabIndex = 29;
			this->customerAddress->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// customerContact
			// 
			this->customerContact->Location = System::Drawing::Point(285, 139);
			this->customerContact->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->customerContact->Name = L"customerContact";
			this->customerContact->Size = System::Drawing::Size(348, 22);
			this->customerContact->TabIndex = 30;
			// 
			// stockAmount
			// 
			this->stockAmount->Location = System::Drawing::Point(284, 326);
			this->stockAmount->Name = L"stockAmount";
			this->stockAmount->Size = System::Drawing::Size(348, 22);
			this->stockAmount->TabIndex = 31;
			// 
			// sellButton
			// 
			this->sellButton->ActiveBorderThickness = 2;
			this->sellButton->ActiveCornerRadius = 20;
			this->sellButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->sellButton->ActiveForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->sellButton->ActiveLineColor = System::Drawing::Color::Transparent;
			this->sellButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->sellButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->sellButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sellButton.BackgroundImage")));
			this->sellButton->ButtonText = L"Check Out";
			this->sellButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sellButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sellButton->ForeColor = System::Drawing::Color::Transparent;
			this->sellButton->IdleBorderThickness = 2;
			this->sellButton->IdleCornerRadius = 15;
			this->sellButton->IdleFillColor = System::Drawing::Color::Empty;
			this->sellButton->IdleForecolor = System::Drawing::Color::Transparent;
			this->sellButton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->sellButton->Location = System::Drawing::Point(774, 417);
			this->sellButton->Margin = System::Windows::Forms::Padding(5);
			this->sellButton->Name = L"sellButton";
			this->sellButton->Size = System::Drawing::Size(195, 57);
			this->sellButton->TabIndex = 32;
			this->sellButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->sellButton->Click += gcnew System::EventHandler(this, &sellMedicine::sellButton_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 379);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(266, 41);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Discount";
			// 
			// discount
			// 
			this->discount->Location = System::Drawing::Point(284, 390);
			this->discount->Name = L"discount";
			this->discount->Size = System::Drawing::Size(348, 22);
			this->discount->TabIndex = 34;
			// 
			// sellMedicine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(63)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->ClientSize = System::Drawing::Size(1241, 604);
			this->Controls->Add(this->discount);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->sellButton);
			this->Controls->Add(this->stockAmount);
			this->Controls->Add(this->customerContact);
			this->Controls->Add(this->customerAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->medicineName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->customerName);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"sellMedicine";
			this->Text = L"sellMedicine";
			this->Load += gcnew System::EventHandler(this, &sellMedicine::sellMedicine_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->customerContact))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stockAmount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->discount))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		
	private: System::Void sellMedicine_Load(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection connection("Data Source = localhost\\SQLEXPRESS; Initial Catalog = Mydatabase; Integrated Security = True");
		connection.Open();

		SqlCommand cmd ("Select medicine_name from medicine_stock", % connection);
		SqlDataReader^ reader = cmd.ExecuteReader();

		//loads in combobox..
		DataTable^ dt = gcnew DataTable();
		dt->Load(reader);
		this->medicineName->ValueMember = "medicine_name";
		this->medicineName->DataSource = dt;

	}


	private: System::Void sellButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ customername = this->customerName->Text;
		String^ customerContact = this->customerContact->Value.ToString();
		String^ customeraddress = this->customerAddress->Text;
		String^ purchasedate = DateTime::Today.ToShortDateString();
		Decimal stockamount = this->stockAmount->Value;
		Decimal discount = this->discount->Value;
		int medicineid;
		int  retailprize;
		int customerid;
		int availablestock;

		//gets the medicine id and retail prize from medicine_stock table
		SqlConnection connection("Data Source=localhost\\SQLEXPRESS;Initial Catalog=Mydatabase;Integrated Security=True");
		connection.Open();

		SqlCommand cmd1("Select medicine_id,retail_price,available_stock from medicine_stock where medicine_name = @name",%connection);
		cmd1.Parameters->AddWithValue("@name", this->medicineName->Text);
		SqlDataReader^  reader = cmd1.ExecuteReader();
		
		if (reader->Read()) {
			medicineid = reader->GetInt32(0);
			 retailprize = reader->GetInt32(1);
			 availablestock = reader->GetInt32(2);

			 reader->Close();
		}
		else {
			reader->Close();
		}

		if (availablestock < stockamount) {
			MessageBox::Show("Not Enough stock Available", "Out of Stock");
		}
		else {

			Decimal totalprize = (Decimal)retailprize * stockamount;
			Decimal transactionprize = totalprize;
			///...

			//inset into customer table
			SqlCommand cmd("Insert into customer values( @medicineid, @name,@contact, @address, @purchasedate)", % connection);
			cmd.Parameters->AddWithValue("@name", customername);
			cmd.Parameters->AddWithValue("@medicineid", medicineid);
			cmd.Parameters->AddWithValue("@contact", customerContact);
			cmd.Parameters->AddWithValue("@address", customeraddress);
			cmd.Parameters->AddWithValue("@purchasedate", purchasedate);
			cmd.ExecuteNonQuery();
			//...

			//MessageBox::Show("Totalprize::" + (Decimal)retailprize * stockamount);

			//gets the customer_id from customer table
			SqlCommand cmd3("Select customer_id from customer where name = @name", % connection);
			cmd3.Parameters->AddWithValue("@name", customername);
			customerid = (int)cmd3.ExecuteScalar();
			//.....


			if (discount != 0) {
				transactionprize = totalprize * (1 - (discount / 100));
			}

			//insert into the sales table..
			SqlCommand cmd2("Insert into sales values(@customerid,@medicineid,@totalprize,@discount,@transactionprice)", % connection);
			cmd2.Parameters->AddWithValue("@customerid", customerid);
			cmd2.Parameters->AddWithValue("medicineid", medicineid);
			cmd2.Parameters->AddWithValue("@totalprize", totalprize);
			cmd2.Parameters->AddWithValue("@discount", discount);
			cmd2.Parameters->AddWithValue("@transactionprice", transactionprize);
			cmd2.ExecuteNonQuery();
			//.....

			//update the medicine_stock table

			SqlCommand cmd4("Update  medicine_stock set available_stock = available_stock-@stockamount", % connection);
			cmd4.Parameters->AddWithValue("@stockamount", stockamount);
			cmd4.ExecuteNonQuery();

			MessageBox::Show("The Prize is: " + transactionprize);

		}
	}

};
}
