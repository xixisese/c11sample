#include <iostream>
#include <vector>
#include <initializer_list>
 
class Point {
  int mX;
  int mY;
  int mZ;
public:
  // Constructor with 3 ints as argument
  Point(int a, int b, int c) :
      mX(a), mY(b), mZ(c) {
    std::cout << "Point:: Parameterized Constructor\n";
  }
  // Constructor with initializer_list as an argument
  Point(std::initializer_list<int> list)
  {
    if(list.size() == 3)
    {
      std::initializer_list<int>::iterator it = list.begin();
      mX = *it++;
      mY = *it++;
      mZ = *it;
    }
    std::cout << "Point:: Initializer_list<int>Constructor\n";
  }
 
  void display() {
    std::cout << "(" << mX << "," << mY << "," << mZ << ")\n";
  }
};
 
int main() {
  // Calling Point's constructor with initializer_list
  // It will call the parameterized constructor with 3 arguments, because number of
  // elements in initializer_list is also three.
  Point pointobj1( { 1, 2, 3 });
 
  // Will call the constructor with 3 ints
  Point pointobj2(4,5,6);
 
  pointobj1.display();
  pointobj2.display();
 
  return 0;
}
