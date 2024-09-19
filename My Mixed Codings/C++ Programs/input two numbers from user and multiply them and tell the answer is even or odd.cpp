#include<iostream>
using namespace std;

int main(){
	/*input two numbers from user and multiply them and tell the answer is even or odd*/
	int a,b;
	
	cout<< "Enter First Number = ";
	cin>> a;
	
	cout<< "Enter Second Number = ";
	cin>> b;
	
	int m = a*b;
	
	cout<< "The multiplication is ";
	cout<<m;
	
	if(m%2==0){
		cout<< " and This Answer is Even";
	}
	else{
		cout<< " and This Answer is Odd";
	}
}