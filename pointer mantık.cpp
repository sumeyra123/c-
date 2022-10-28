#include <iostream>
using namespace std;
void degerDegistirir(int *ptr){
	*ptr=20;
	cout<<"Fonksiyonun içindeki deðer:"<< *ptr <<endl;
	
}
int main(){
	int a=10;
	cout<<"a degiskenýn deðeri:"<< a << endl;
	degerDegistirir(&a);
	cout<<"a degiþkenin yeni deðeri:"<< a <<endl;
}
