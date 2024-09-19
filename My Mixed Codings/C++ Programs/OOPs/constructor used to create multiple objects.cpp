#include <iostream>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) {  // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);
  Car carObj3("Ford1", "Mustang", 1969);
  Car carObj4("Ford2", "Mustang", 1969);
  Car carObj5("Ford3", "Mustang", 1969);
  Car carObj6("Ford4", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";
  cout << carObj4.brand << " " << carObj4.model << " " << carObj4.year << "\n";
  cout << carObj5.brand << " " << carObj5.model << " " << carObj5.year << "\n";
  cout << carObj6.brand << " " << carObj6.model << " " << carObj6.year << "\n";
  return 0;
}
