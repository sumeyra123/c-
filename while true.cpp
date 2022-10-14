#include <iostream>
using namespace std;



int main (){
	
	string sys_username ="mustafa_murat";
	string sys_password ="123456";
	
	
	string username ;
	string password;
	
	
	while (true){
		cout <<"Kullanýcý adý:";
		cin >> username;
		cout<< "Parola:";
		cin >> password;
		
		if (username == sys_username && password ==sys_password){
			
			cout << "Hoþgeldiniz," << username << endl;
			break;
		}
		else if (username != sys_username && password == sys_password ){
		    cout << "Kullanýcý adý hatalý..." << endl;
		    break;
		}
		else if (username == sys_username && password != sys_password ){
			cout<< "Parolayý hatalý girdiniz:"<< endl;
		}
	    else {
	    	
	    	
	    	cout << "Kullanýcý adý ve Parola hatalý..."<< endl;
		}
	
}
	
	return 0;
}
