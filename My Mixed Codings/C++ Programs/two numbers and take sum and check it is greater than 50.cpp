#include<iostream>
using namespace std;

int main(){
	/*Take two numbers from user, take their sum and display that the sum is greater than 50 or not?*/
	int a,b;
	cout<<"first Number = ";
	cin>>a;
	
	cout<<"Secound Number = ";
	cin>>b;
	
	cout<<"Sum is ";
	cout<<a+b;
	
	if(a+b>50){
		cout<<" and this sum is greater than 50";
	}
	else{
		cout<<" and it is not greater than 50";
	}
	
	
	
	
}