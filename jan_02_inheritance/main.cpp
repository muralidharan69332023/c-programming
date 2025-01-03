#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public:
    string brand = "Ford ";
    string rand = "ord ";
    void honk ()
     {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main()
{
  Car myCar;
  myCar.honk();
  cout << myCar.model + myCar.brand + myCar.rand  ;
  return 0;
}

