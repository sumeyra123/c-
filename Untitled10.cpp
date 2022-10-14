#include <iostream>
using namespace std;

int main()
{
	double Number1, Number2, Result;

	// Request two numbers from the user
	cout << "Please provide two numbers\n";

	try {
		cout << "First Number: ";
		cin >> Number1;
		cout << "Second Number: ";
		cin >> Number2;

		if( Number2 == 0 )
			throw;

		// Perform a division and display the result
		Result = Number1 / Number2;
		cout << "\n" << Number1 << " / " << Number2 << " = " << Result << "\n\n";
	}
	catch(...)
	{

	}

	return 0;

}

