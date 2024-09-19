#include <iostream>
using namespace std;

class employee{
	public:
	string name = "Afzal";
	int id = 456;
	
	void display(){
		cout<<"name : "<< name <<endl;
		cout<<"id of employee : #"<<id << endl;
		
	}
};

int main(){

employee o;
o.display();

employee n;
n.name = "afzal bey";
n.id = 4;
n.display();


// How many possible data members in the class of medicine

/*
data members 
medicine_name
medicine_no
med_weight
med_company
med_


*/

}