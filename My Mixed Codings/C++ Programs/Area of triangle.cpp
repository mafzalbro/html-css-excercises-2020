#include<iostream>
#include<math.h>
using namespace std;

int main(){
	/* Find the Area of triangle and input three sides*/
	int a,b,c;
	int s = (a+b+c)/2;
	int area = sqrt(s*s-a*s-b*s-c);
	
	cin>> a;
	cin>> b;
	cin>> c;
	cout<< area;
	cout<< " is Area of triangle";
	return 0;
}