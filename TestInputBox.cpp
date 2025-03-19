// TestInputBox.cpp

#include "TestInputBox.h"

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE, LPTSTR, int )
{
	// Allocate string memory
	LPTSTR lpszInputText = new char[ STRING_LENGTH + sizeof( char ) ];

	// Set initial input text
	lstrcpy( lpszInputText, "Input some text" );

	// Show input box dialog box
	if( InputBoxDialog( NULL, hInstance, lpszInputText, "Please Input Some Text:" ) )
	{
		// Successfully shown input box dialog box

		// Display input text
		MessageBox( NULL, lpszInputText, INFORMATION_MESSAGE_CAPTION, ( MB_OK | MB_ICONINFORMATION ) );

	} // End of successfully shown input box dialog box

	return 0;

} // End of function WinMain
