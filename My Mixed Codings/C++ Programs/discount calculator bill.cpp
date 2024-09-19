#include <iostream>
using namespace std;
int main(){
	int no_of_items;
	int price_of_item;
	int cost;
	
	cout<<"input no of items \n";
	cin>> no_of_items;
	cout<<"input price of items \n";
	cin>> price_of_item;
	cost = no_of_items * price_of_item;
	if(cost>2000){
		cout<< cost + (cost/10 * 100);
	}
	else{
		cout<< cost;
	}
	return 0;
}