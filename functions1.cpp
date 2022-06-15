#include <iostream>

int printMethod(){
  int a;
  std::cin >> a;
  return a;
}

void someMethod(int n){
  std::cout << "The value of n is " << n * n;
}

int main(int argc, char const *argv[]) {
  #ifndef output
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif

  someMethod(printMethod());
  return 0;
}
