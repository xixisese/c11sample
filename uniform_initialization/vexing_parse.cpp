#include <iostream>
struct MyStruct{
  int i;
  MyStruct(int i):i(i){};
  MyStruct():i(0){};
};


/*
 *  Uniformed Initialization prevent vexing parse
 * */
int main(int argc, char* argv[]){
  MyStruct s1(10);
  MyStruct s2();
  //Solution:
  //MyStruct s2{};
  
  std::cout<<s1.i<<std::endl;
  std::cout<<s2.i<<std::endl;
  return 0;
};
