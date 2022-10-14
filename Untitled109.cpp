#include <iostream>

using namespace std;
int main (){
	
	
	/*
	or operatörü \\ ----> en az bir durum doðruysa genel sonuç true ,aksi halde false 
	and operatörü && ----> en az bir durum yanlýþsa genel sonuc false ,aksý halde true 
	not operatörü ! -----> false iþlemi true 'ya ,true iþlemi false ' a çevirir.
	
	
	*/
	 string sys_username = "Mustafa_Murat";
	 string sys_passworrd = "123456";
	 
	 
	 string username;
	 string password;
	 
	 
	 
	 cout << "Kulanýcý Adý Giriniz:";
	 
	 
	 cin >> username;
	 
	 
	 cout << "Parola:";
	 
	 cin >> password;
	 
	 
	 if (sys_username == username &&  sys_password == password){
	 	
		 cout << "Hosgeldiniz..." << endl;
	 	
	 }
	else if (sys_username != username && sys_password == password){
		cout << " Kullanýcý Adý Hatalý..." << endl ;
	}
	else if (sys_username == username && sys_password != password){
		cout << "Parola Hatalý..." << endl;
	}
	else {
		cout << "Kullanýcý Adý 	Hatalý..."<< endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
