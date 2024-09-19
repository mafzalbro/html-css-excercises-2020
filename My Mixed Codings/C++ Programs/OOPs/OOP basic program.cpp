#include <iostream>
using namespace std;

class student {
	private:
		int copy = 30;
		char grade = 'A';
		int gpa = 3.5;
		string remark = "Good Practice";

    public:
		void display() {
			cout<<copy<<endl<<grade<<endl<<gpa<<endl<<remark;
		}
};

int main() {

	student obj;
	obj.display();

	return 0;
}




/*	int a[5];
	cout<<"enter your 5 elements array"<<endl;
	*
	for(int j=0; j<5; j++){
		cin>> a[j];
	}
	cout<<"\n";
	for(int i=0; i<5; i++){
	cout<< a[i] << " ";

	}
	*/