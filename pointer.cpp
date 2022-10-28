#include <iostream>
using namespace std;
int main() {
	int a = 5;
	int *ptr =&a;
	
	cout << "Degiskenin adresi:"<< &a <<endl;
	cout<<"Degiskenin adresi:"<< ptr <<endl;
	*ptr=6;
	
	cout<<"Degiskenin deðeri:"<< a <<endl;
}
