#include <iostream>
using namespace std;

int main(){
	
	
	int sayi;
	cout << "Say�:";
	
	cin >> sayi;
	
	int faktoriyel = 1;
	
	for (int i =1; i <= sayi ; i++){
		faktoriyel *= i;
		cout << faktoriyel <<endl;
	}
	
}
