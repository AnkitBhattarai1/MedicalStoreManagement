#include "First.h"
#include "AdminLogin.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MedicalStoreManagement::First firstpage;

	firstpage.ShowDialog();

	

}

