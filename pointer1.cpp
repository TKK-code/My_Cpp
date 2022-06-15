#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  int a = 45;
  int* p;
  p = &a;

  cout  << "The value of a " << a << endl;
  cout << "The address of a " << &a << endl;
  cout << "The value of pointer " << p << endl;
  cout << "The value of *pointer " << *p << endl;

  // the pointer has been incresed for 1
  cout << "The pointer has been has incresed "  << ++p << endl;

  for (size_t i = 0; i < 5; i++) {
    cout << "The pointer has been has incresed "  << ++p << endl;
  }
  return 0;
}
