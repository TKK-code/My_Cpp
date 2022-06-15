#include <iostream>

int main(int argc, char const *argv[]) {
  #ifndef output
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif

  std::cout << "The size of short " << sizeof(short) << '\n';
  std::cout << "The size of int " << sizeof(int) << '\n';
  std::cout << "The size of long " << sizeof(long) << '\n';
  std::cout << "The size of long long " << sizeof(long long) << '\n';
  std::cout << "The size of short long " << sizeof(short int) << '\n';
  std::cout << "The size of long int " << sizeof(long int) << '\n';
  std::cout << "The size of unsigned long int " << sizeof(unsigned long int) << '\n';
  std::cout << "The size of signed long int " << sizeof(signed long int) << '\n';
  //std::cout << "The size of char8_t" << sizeof(char8_t)<< '\n';
  return 0;
}
