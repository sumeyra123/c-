#include <iostream>
using namespace std;
void degerDegistirir(int *ptr){
	*ptr=20;
	cout<<"Fonksiyonun i�indeki de�er:"<< *ptr <<endl;
	
}
int main(){
	int a=10;
	cout<<"a degisken�n de�eri:"<< a << endl;
	degerDegistirir(&a);
	cout<<"a degi�kenin yeni de�eri:"<< a <<endl;
}
