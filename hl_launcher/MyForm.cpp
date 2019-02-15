#include <Windows.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace hl_launcher;

INT WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	Application::EnableVisualStyles();
	Application::Run( gcnew MyForm() );
	return FALSE;
}

