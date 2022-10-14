#include <iostream>

using namespace std;

int main()
{
	int a,b;
	string islem;
	
	cout << "Hesap makinesi programýna hoþgeldniz..."<<endl;
	
	
	cout << "1. iþlem:Toplamý Ýþlemi" << endl;
	cout << "2.iþlem:Çýkarma Ýþlemi" << endl;
	cout << "3. iþlem : Çarpma iþlemi " << endl;
	cout << "4. iþlem: Bölme Ýþlemi" << endl;
	
	cout <<"Ýþlem Giriniz:";
	
	cin >> islem;
	
	if (islem == "1"){
		cout << "a:";
		cin >>a;
		cout << "b";
		cin >> b;
		cout << "Toplamlarý:" << a+b << endl;
		
	}
	else if (islem == "2"){
		cout << "a:";
		cin >> a;
		cout <<"b";
		cin >> b;
		cout << "Farklarý :" << a-b << endl;
		
	}
	else if (islem == "3"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Çarpýmlarý:" << a * b << endl;
		
	}
	else if (islem == "4"){
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "Bölümleri:" << a / b << endl;
	}
	else {
		
	}
}
