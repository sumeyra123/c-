#include <iostream>
using namespace std;



int main (){
	
	string sys_username ="mustafa_murat";
	string sys_password ="123456";
	
	
	string username ;
	string password;
	
	
	while (true){
		cout <<"Kullan�c� ad�:";
		cin >> username;
		cout<< "Parola:";
		cin >> password;
		
		if (username == sys_username && password ==sys_password){
			
			cout << "Ho�geldiniz," << username << endl;
			break;
		}
		else if (username != sys_username && password == sys_password ){
		    cout << "Kullan�c� ad� hatal�..." << endl;
		    break;
		}
		else if (username == sys_username && password != sys_password ){
			cout<< "Parolay� hatal� girdiniz:"<< endl;
		}
	    else {
	    	
	    	
	    	cout << "Kullan�c� ad� ve Parola hatal�..."<< endl;
		}
	
}
	
	return 0;
}
