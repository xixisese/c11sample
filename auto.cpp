#include <iostream>
/*
 *
 *    auto can automatically detect target type
 * */

/*
 *  Here define a template without implementation
 *  When use it, the compiler will complain immediately
 *  It tells exactly the type of the class template which cannot be instantiated
 */
template <typename T>
class GetType;

int main(int argc, char* argv[]){
  int i{3};
  const int i1 = 1024;
  GetType<decltype(i1)> t1;
  const int& i2 = i1;
  GetType<decltype(i2)> t2;

  /*
   *   
   * */
  auto a1 = i1;
  GetType<decltype(a1)>  t3;
  auto a2 = i2;
  GetType<decltype(a2)>  t4;

  auto&& a3=a1;
  GetType<decltype(a3)>  t5;

  
  return 0;
}
