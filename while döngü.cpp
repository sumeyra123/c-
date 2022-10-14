#include <iostream>
using namespace std;


int main (){
	string parola = "123456";
	string input;
	
	
	do{
		cout << "Parolanýzý giriniz:";
		cin >> input;
		
		}while(input !=parola); // döngüde eþit deðilse döngü dewam etsin,true olur do ya döner ,doðru girene kadar döngu dewam eder,doðru oldugunda false döner döngu sonlanýr
	    
	    cout << "Parolayý doðru girdiniz ..."<<endl;
	
	
	return 0;
}
