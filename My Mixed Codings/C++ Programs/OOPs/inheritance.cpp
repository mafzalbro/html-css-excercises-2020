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
	class engineer:public employee{
		public: 
		float salary = 100000;
		
};


int main(){

employee o;
o.display();



cout<<endl<< endl<< "Now engineer with inheritance" <<endl<<endl;
engineer n;
n.name = "afzal bey";
n.id = 4;
n.salary = 20300;


cout<<n.name<< endl<<  n.id<< endl<< "Salary = " <<  n.salary;

}

