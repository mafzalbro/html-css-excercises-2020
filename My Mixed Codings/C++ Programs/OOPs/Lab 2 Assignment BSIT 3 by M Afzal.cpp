#include <iostream>
#include <string>
using namespace std;

class Employee{
	private:
	int Employee_code;
	string Employee_Name;
	int Employee_Age;
	public:
		Employee(){
		Employee_code = 0.0;
		Employee_Name = " Name ";
	    Employee_Age = 0;	
		}
		
        Employee(int eCode, string eName, int eAge){
		Employee_code = eCode;
		Employee_Name = eName;
	    Employee_Age = eAge;	
		}
		
		
		
		void setEmployee_code(int eCode){
		Employee_code = eCode;			
		}
		
		int getEmployee_code(){
		return Employee_code;
		}                      
		                               

		void setEmployee_Name(string eName){
		Employee_Name = eName;			
		}
		
		int getEmployee_Name(){
		 cout<<Employee_Name;
		}                      

		void setEmployee_Age(int eAge){
		Employee_Age = eAge;			
		}
		
		int getEmployee_Age(){
		return Employee_Age;
		}                      

        void display(){
			cout<<"Employee code : "<<Employee_code<<endl<<"Employee Name : "<<Employee_Name<<endl<<"Employee Age : "<<Employee_Age;
		}
};

int main(){


cout<<"The Record of Employee 1"<<endl;
Employee emp1;
emp1.setEmployee_code(251);
emp1.setEmployee_Name("Muhammad Afzal");
emp1.setEmployee_Age(21);
emp1.display();

cout<<endl<<endl<<"The Record of Employee 2"<<endl;
Employee emp2;
emp2.setEmployee_code(252);
emp2.setEmployee_Name("Muhammad Ali");
emp2.setEmployee_Age(23);
emp2.display();




return 0;
}

/*                  
Write a C++ program that creates a class named as Employee which contains the attributes
Employee_code,Employee_Name,Empoyee_Age.Create the following functions.
? A Nullary/default constructor that initialize to data member with default values.
? Setter fucntions that sets the values of data members.
? Getter functions that return the values of data members.
Create the Record of two Employees and display.

*/