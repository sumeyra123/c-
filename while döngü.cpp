#include <iostream>
using namespace std;


int main (){
	string parola = "123456";
	string input;
	
	
	do{
		cout << "Parolan�z� giriniz:";
		cin >> input;
		
		}while(input !=parola); // d�ng�de e�it de�ilse d�ng� dewam etsin,true olur do ya d�ner ,do�ru girene kadar d�ngu dewam eder,do�ru oldugunda false d�ner d�ngu sonlan�r
	    
	    cout << "Parolay� do�ru girdiniz ..."<<endl;
	
	
	return 0;
}
