#include <Windows.h>
#include "MyForm.h"
#pragma comment( lib, "user32.lib" )

using namespace System;
using namespace System::Windows::Forms;
using namespace setup;
[STAThread]
INT WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	Application::Run( gcnew MyForm() );
	return FALSE;
}