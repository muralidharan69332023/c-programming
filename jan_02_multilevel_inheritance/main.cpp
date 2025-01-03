//#include <iostream>
//using namespace std;
//
//// Parent class
//class MyClass {
//  public:
//    void myFunction() {
//      cout << "Some content in parent class. \n" ;
//    }
//    void agla() {
//      cout << "next\n" ;
//    }
//};
//
//// Child class
//class MyChild: public MyClass {
//    public:
//    void fir() {
//      cout << "hindi\n" ;
//    }
//};
//
//// Grandchild class
//class MyGrandChild: public MyChild {
//    public:
//    void haftha() {
//      cout << "week\n" ;
//    }
//};
//
//int main() {
//
//  MyGrandChild myObj;
//  myObj.agla();
//  myObj.myFunction();
//  myObj.fir();
//   myObj.haftha();
//
//  return 0;
//}
#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class
class MyGrandChild: public MyChild{
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}
