#pragma once

using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Data::SqlTypes;

public ref class Tools {


public:	System::Void static Lineargradientpaint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e, Rectangle rect, int r1, int g1, int b1, int r2, int g2, int b2, LinearGradientMode m) {
		Graphics^ g = e->Graphics;
		LinearGradientBrush^ brush = gcnew LinearGradientBrush(rect, Color::FromArgb(r1, g1, b1), Color::FromArgb(r2, g2, b2), m);
		g->FillRectangle(brush, rect);	
	}

public: System::Void static childForm(Form^ form,Panel^ panel) {
	//adds a form to the panel as specified by the caller.
	form->TopLevel = false;
	form->Dock = DockStyle::Fill;
	panel->Controls->Add(form);
	form->BringToFront();
	form->Show();
}

public: int static checkfornullvalues(SqlDataReader^ reader) { 
	//check for the null values and returns the first element of the table if the value is not null
	// if the value is null returns zero.

	int temp;
	try{
		if (reader->Read()) {
			temp = reader->GetInt32(0);
		}
		
	}

	catch (SqlNullValueException^ e) {
		temp = 0;
	}
	return temp;

}

	  
};
