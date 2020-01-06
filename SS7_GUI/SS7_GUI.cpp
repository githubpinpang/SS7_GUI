// SS7_GUI.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace SS7_GUI;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());

//	 SqlConnection^ connection = gcnew SqlConnection();
//    connection->ConnectionString = "Data Source=RRIEDEL\SQLEXPRESS;Initial Catalog=LAM;";
//
//	#define SQL_RESULT_LEN 240
//#define SQL_RETURN_CODE_LEN 1000
//    //define handles and variables
//   SQLHANDLE sqlConnHandle;
//    SQLHANDLE sqlStmtHandle;
//    SQLHANDLE sqlEnvHandle;
//    SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];



	//messageBox.show("Successfully connected to SQL Server");

	return 0;
}
