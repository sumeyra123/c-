#include <iostream>

using namespace std;

int main()
{
	int a,b;
	string islem;
	
	cout << "Hesap makinesi program�na ho�geldniz..."<<endl;
	
	
	cout << "1. i�lem:Toplam� ��lemi" << endl;
	cout << "2.i�lem:��karma ��lemi" << endl;
	cout << "3. i�lem : �arpma i�lemi " << endl;
	cout << "4. i�lem: B�lme ��lemi" << endl;
	
	cout <<"��lem Giriniz:";
	
	cin >> islem;
	
	if (islem == "1"){
		cout << "a:";
		cin >>a;
		cout << "b";
		cin >> b;
		cout << "Toplamlar�:" << a+b << endl;
		
	}
	else if (islem == "2"){
		cout << "a:";
		cin >> a;
		cout <<"b";
		cin >> b;
		cout << "Farklar� :" << a-b << endl;
		
	}
	else if (islem == "3"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "�arp�mlar�:" << a * b << endl;
		
	}
	else if (islem == "4"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "B�l�mleri:" << a / b << endl;
	}
	else {
		
	}
}
