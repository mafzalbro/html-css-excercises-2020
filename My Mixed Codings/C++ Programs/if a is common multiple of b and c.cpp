#include<iostream>
using namespace std;
int main()
{
 cout<<"PUT three numbers  \n";
 int a,b,c;
 cout<<"a = ";
 cin>>a;
 
 cout<<"b = ";
 cin>>b;
 
 cout<<"c = ";
 cin>>c;
 
 if(a!=0&&b%a==0&&c%a==0)
 {
 	cout<<"a is devider";
 }
 else{
 	cout<<"a is not a devider";
 }
 
 return 0;
}