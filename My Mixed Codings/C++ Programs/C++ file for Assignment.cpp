#include <iostream>
#include <math.h>
using namespace std;
int main(){
	


	/* 1--print your name using cout */
	
	/*
	cout<<"My------------------\n";
	cout<<"----   Name----------\n";
	cout<<"------------   Is------- Muhammad Afzal.\n";
*/









    /*2-- shape of diamond*/
/*
cout<<"     * \n";
cout<<"    *** \n";
cout<<"   ***** \n";
cout<<"  ******* \n";
cout<<" ********* \n";
cout<<" ********* \n";
cout<<"  ******* \n";
cout<<"   ***** \n";
cout<<"    *** \n";
cout<<"     * \n"<<endl;
*/

  /*---------------------------------*/












    /*3-- shape like Room with door*/

/*
cout<<"     * \n";
cout<<"    *** \n";
cout<<"   ***** \n";
cout<<"  ******* \n";
cout<<" ********* \n";
cout<<" ********* \n";
cout<<" ********* \n";
cout<<" ***   *** \n";
cout<<" ***   *** \n";
cout<<" ***   *** \n";
cout<<" ***   *** \n";
 */
 
 
 
  /*---------------------------------*/
    










    /*4-- print Number, Square, and Cube 
	Using that techniques that you have learn*/

  /*---------------------------------*/
	
   /*cout<<" Number  Square   Cube \n";
   cout<<	" 1        1       1 \n";
   cout<<	" 2        4       8 \n";
   cout<<	" 3        9       27 \n";
   cout<<	" 4        16      64 \n";
   cout<<	" 5        25      125 \n";
   cout<<	" 6        36      216 \n";
   cout<<	" 7        49      343 \n";
   cout<<	" 8        64      512 \n";
   cout<<	" 9        81      729 \n";
   cout<<	" 10       100     1000";*/
  
  /*---------------------------------*/










    /*5--print the Table of any Number*/
   
  /* int num=0;
   cout<<"enter any number to input its table \n";
   cin>>num;
   cout<<num << " x 1 = "<< num*1 << "\n";
   cout<<num << " x 2 = "<< num*2 << "\n";
   cout<<num << " x 3 = "<< num*3 << "\n";
   cout<<num << " x 4 = "<< num*4 << "\n";
   cout<<num << " x 5 = "<< num*5 << "\n";
   cout<<num << " x 6 = "<< num*6 << "\n";
   cout<<num << " x 7 = "<< num*7 << "\n";
   cout<<num << " x 8 = "<< num*8 << "\n";
   cout<<num << " x 9 = "<< num*9 << "\n";
   cout<<num << " x 10 = "<<num*10 << "\n";  */
   
   /*-----------------------------------------------------------------------*/














   
   /*6-- Print the value of Variables*/
   
   /*
   int first_number = 50;
   int second_number = 100;
   
   cout<<"The value of First Number is "<<first_number<<endl;
   cout<<"The value of Second Number is "<<second_number<<endl;
   */
   
    /*-----------------------------------------------------------------------*/







   
   /*7-- Initialize variables as many as required 
   and print the following. */
  
  /* int ten = 10;
   int twenty = 20;
    
   cout<<"I have " <<ten << " rupees and you have " << twenty <<" rupees."<<endl;
   cout<<"So we have enough money for to buy a coffee.Yahooooo.... "<<endl;
   */
   





   
   
   /*8-- Take three inputs from user and divide first by second and divide answer by
third input. */
   
   
   /*
   float num1,num2,num3,answer;
   cout<<"Enter three numbers \n";
   cin>>num1>>num2>>num3;
   answer = num1/num2;
   cout<<"The division of first by second no. is "<< answer <<endl;
   cout<<"The division of Answer by Third no. is "<<answer/num3<<endl;
   */
   










   
   
   
   /*9-- Find the distance of inputting the points by user*/
   /*
   float x1,x2,y1,y2,distance;
   cout<<"Enter four inputs with same pattern x1,x2,y1,y2 \n";
   cin>> x1 >> x2 >> y1 >> y2;
   distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
   cout<< distance;
   */
   










   
   /*10--  Find the discriminant D=b2-4ac*/
   
   /*
   int D,b,a,c;
   cout<<"input b = ";
   cin>> b;
   cout<<"input a = ";
   cin>> a;
   cout<<"input c = ";
   cin>> c;
   D = b*b - 4*a*c;
   cout<< "The Discriminant D is "<< D;
   */
   
   
   /*--------------------------------------------------------------------------------*/











   
   /*11-- Find roots of quadratic equation -b+sqrt(b2-4ac) /2a , -b-sqrt(b2-4ac) /2a*/   
   
 
 /*
   int b,a,c,First_part,Second_part;
  
   cout<<"input b = ";
   cin>> b;
   cout<<"input a = ";
   cin>> a;
   cout<<"input c = ";
   cin>> c;
   
   First_part = -b + sqrt(b*b - 4*a*c);
   cout<<"The First part is "<<First_part<<endl;
   Second_part = -b - sqrt(b*b - 4*a*c);
   cout<<"The Second part is "<<Second_part;
 */










 
 /*12-- Take two inputs from user and perform the operations addition, subtraction,
quotient and remainder*/
   
  /* int num_1,num_2;
   cout<< "input Number 1 = ";
   cin>> num_1;
   cout<< "input Number 2 = ";
   cin>> num_2;
   int addition = num_1 + num_2;
   int subtraction = num_1 - num_2;
   int quotient = num_1 / num_2;
   int remainder = num_1 % num_2;
   
   cout<< " Addition = "<< addition<<endl;
   cout<< " Subtraction = "<< subtraction<<endl;
   cout<< " Quotient = "<< quotient<<endl;
   cout<< " Remainder = "<< remainder<<endl;
*/










 /*13-- Take negative input from user and convert it into positive number */
 
/*
 int a_number = 0;
 cout<< "Enter a Negative Number : ";
 cin>> a_number;

 if(a_number < 0){
 cout<< " The Number is now positive : " << -1*(a_number);
 }
 else if(a_number > 0){
	cout<<" The Number is Already positive : " << a_number;
}
else{
	cout<<"Invalid";
}
*/












/*14-- Find area and perimeter of triangle.  */

 /*
 int A, B, C, base, height, area, perimeter;
  cout<<"Enter The base and height \n";
  cin >> base >> height;
  area = 0.5 * base * height;
  cout << area << " is the Area of the triangle. \n"<< endl;
  
    
  cout<<"Enter The A, B, C for Perimeter \n";
  cin >> A >> B >> C;
  perimeter =  A + B + C;
  cout << perimeter << " is the Perimeter of the triangle.";
*/






/*  15-- Take five inputs from user and find their average */
  
  /*
  int one1, two2, three3, four4, five5, average;
  cout<< " Enter the five inputs to take Average : \n";
  cin >> one1 >> two2 >> three3 >> four4 >> five5;
  average = (one1+ two2 + three3 + four4 + five5) / 5;
  cout << "The average is : "<< average;
  */
  
  
  /*16-- A soft drinks company recently surveyed 12,467 of its customers and found
that approximately 14 percent of those purchase one or more energy drinks
per week. From those customers who purchase energy drinks, approximately
64 percent of them prefer flavored energy drinks, write a program that
displays the following:
 The approximate number of customers in the survey who purchase one or
more energy drinks per week.
 The approximate number of customer in the survey who prefers flavored
energy drinks. */

 /*
 int customer, E_drink , f_E_drink;
 customer = 12467;
 E_drink = 0.14 * customer;
 f_E_drink = 0.64 * E_drink;
 
 cout<< "The no of customers are "<< customer<<endl;
 cout<< "Approximate no of Energy drink customers are "<<E_drink<<endl;
 cout<< "Approximate no of Flavored Energy drink customers are "<< f_E_drink <<endl;
*/















/* 17-- Talal s basic salary is input through the keyboard. His dearness allowance is
40% of basic salary, and house rent allowance is 20% of basic salary. Write
C++ code to calculate his gross salary.*/

 /*
 int salary, DA, rent, gross;
 cout<< "Input the basic salary : ";
 cin>> salary;
 
 DA = 0.4 * salary;
 rent = 0.2 * salary;
 gross = salary + DA + rent;

 cout<< "The gross salary is "<< gross;
*/








/*18-- The distance between two cities (in km.) is input through the keyboard.
Write C++ code to convert and print this distance in meters, feet, inches and
centimeters. */

  /*
  float distance,meters,centimeters,inches,feets;
  cout<< "entrer the distance between two cities ";
  cin>>distance;
  meters = distance / 1000;
  centimeters = meters / 100;
  inches = 2.54 * centimeters;
  feets = 12 * inches;
  cout<< "\n The distance is : "<< distance << " KM ";
  cout<< "\n In meters : "<< meters;
  cout<< "\n In centimeters : "<< centimeters;
  cout<< "\n In inches : "<< inches;
  cout<< "\n In feets : "<< feets;
*/












/* 19-- If the marks obtained by a student in five different subjects are input through
the keyboard, find out the aggregate marks and percentage marks obtained
by the student. Assume that the maximum marks that can be obtained by a
student in each subject is 100. 
*/
  
  /*
  float total,s1,s2,s3,s4,s5,s6,percent;  
  cout<< "Enter the Six subjects and Total marks of every subject is 100 \n";
  cin >> s1>> s2 >> s3 >> s4 >> s5 >> s6;
  total = s1 + s2 + s3 + s4 + s5 + s6;
  percent = (total / 600) * 100;
  cout << " The total marks is "<< total;
  cout<< " The percentage of total marks is "<< percent;
  */






  
  
  
  /* 20-- Temperature of a city in Fahrenheit degrees is input through the keyboard.
 Write C++ code to convert this temperature into Centigrade degrees.t*/
  
 /*
  int celcius,fahren;
  cout << "Enter the temperature in farhenite \n";
  cin >> fahren;
  celcius = 5 * (fahren - 32) / 9;
  cout << "\n The tempreture in celcius is " << celcius;
 */
 
 






 
 
 
 /* 21-- The length & breadth of a rectangle and radius of a circle are input through
the keyboard. Write C++ code to calculate the area & perimeter of the
rectangle, and the area & circumference of the circle. */
 

/* float length, breadth, radius, area_of_circle, perimeter_of_circle, area_of_rectangle, perimeter_of_rectangle;
 
 cout<<" Enter the length, breadth of rectangle, and radius of circle \n";
 cin>> length >>breadth >> radius;
 area_of_circle = 3.14 * radius * radius;
 perimeter_of_circle = 2 * 3.14 * radius;
 area_of_rectangle = length * breadth;
 perimeter_of_rectangle = (length + breadth) * 2;
 
 cout<< " Area of circle = "<< area_of_circle <<endl;
 cout<< " Perimeter of circle = "<< perimeter_of_circle <<endl;
 cout<< " Area of Rectangle = "<< area_of_rectangle <<endl;
 cout<< " Perimeter of Rectangle = "<< perimeter_of_rectangle <<endl;
*/











/*22-- Two numbers are input through the keyboard into two locations C and D.
Write C++ code to interchange the contents of C and D. */

 /*
 int C,D;
 cout<< "Enter the value of C \n";
 cin>>C;
 cout<< "Enter the value of D \n";
 cin>>D;
 C = C + D;
 D = C - D;
 C = C - D;

 cout<< " \n The of D is now of C = "<<C;
 cout<< "\n The of C is now of D = "<<D;
 */
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /* 23-- If the total selling price of 15 items and the total profit earned on them is
input through the keyboard, write C++ code to find the cost price of one item*/
 
 
 /*
 int no_of_items, total_selling, total_profits, cost_one_item, original_cost;
 no_of_items = 15;
 cout<< "Enter total selling price \n";
 cin >> total_selling;
 
 cout<< "Enter total selling price \n";
 cin >> total_profits;
  
 original_cost = total_selling - total_profits;
 cost_one_item = original_cost / no_of_items;
 
 cout<< "The cost of item is "<< cost_one_item;
 */
  
  
 
 
 
 
 
 
 
 
 
 /*24-- Find the Distance between two points*/ 
 
 
 /* float x1,x2,y1,y2,distance;
   cout<<"Enter four inputs with same pattern x1,x2,y1,y2 \n";
   cin>> x1 >> x2 >> y1 >> y2;
   distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
   cout<< "The distance between these given points is "<<distance;
 */
 
 
 
 
 
 
 
 
 
 /* 25-- The standard one kilogram is a platinum-iridium cylinder 39.0 mm in height and 39.0 mm in diameter.
  What is the density of the material? */
 
 /*float height,diameter, density, radius, mass;
 height = 39.0;
 diameter = 39.0;
 cout<< "Enter the radius, mass \n";
 cin >> radius >> mass;
 density = mass / (3.14 * radius * radius * height);
 cout<< " The density is now "<<density;
 */
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
  
	return 0;
}