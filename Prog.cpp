#include <stdio.h>
#include<Windows.h>
#include "MainForm.h"



namespace EmptytOne
{

	using namespace System;
	using namespace System::Windows::Forms;

	int main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(true);

		Application::Run(gcnew MainForm());
		return 0;
	}
}