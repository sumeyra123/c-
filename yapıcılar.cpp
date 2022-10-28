#include <iostream>
using namespace std;

struct Employee {
	int id;
	string name;
	string department;
};
int main(){
	Employee employee1;
	employee1.id =12;
	employee1.name="Mustafa Murat";
	employee1.department="Biliþim";
	
	cout<< employee1.name<<endl;
	
	
	return 0;
}
