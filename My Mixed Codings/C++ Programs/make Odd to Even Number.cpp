#include<iostream>
using namespace std;

int main(){
	/*Input a number from user, if nimber is odd, make it even and display on screen or if it even display it is already Even*/
 int Number;
 cout<< "Input a Number to check whether it is Even or Odd : ";
 cin>> Number;
 
 if(Number%2==0){
 	cout<<"\n This Number is Already Even";
 }
 else{
 	Number+=1;
 	cout<< "\n That was odd Number and This is Even NOW Which is ";
 	cout<< Number;
 }
}