#include <iostream>

using namespace std;
int main (){
	
	
	/*
	or operat�r� \\ ----> en az bir durum do�ruysa genel sonu� true ,aksi halde false 
	and operat�r� && ----> en az bir durum yanl��sa genel sonuc false ,aks� halde true 
	not operat�r� ! -----> false i�lemi true 'ya ,true i�lemi false ' a �evirir.
	
	
	*/
	 string sys_username = "Mustafa_Murat";
	 string sys_passworrd = "123456";
	 
	 
	 string username;
	 string password;
	 
	 
	 
	 cout << "Kulan�c� Ad� Giriniz:";
	 
	 
	 cin >> username;
	 
	 
	 cout << "Parola:";
	 
	 cin >> password;
	 
	 
	 if (sys_username == username &&  sys_password == password){
	 	
		 cout << "Hosgeldiniz..." << endl;
	 	
	 }
	else if (sys_username != username && sys_password == password){
		cout << " Kullan�c� Ad� Hatal�..." << endl ;
	}
	else if (sys_username == username && sys_password != password){
		cout << "Parola Hatal�..." << endl;
	}
	else {
		cout << "Kullan�c� Ad� 	Hatal�..."<< endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
