#include <cstdint>
#include <iostream>

using namespace std;

/*
        byte
        short
        int
        long
        float
        double

        char
        bool
*/

int main(int argc, char *argv[]) {

  cout << "Implict Type Casting" << endl;
  int a = 15;
  char c = 'c';
  int b = a + c;
  cout << a << endl << c << endl << b << endl;
  cout << "Explict Type Casting" << endl;
  double d = 45.64;
  int i = 90;
  cout << d + i << endl;
  int j = (int)d + i;
  cout << j << endl;

  cout << "Example 2: " << endl;
  int n = 9;
  char f = 'd';
  cout << n << endl << f << endl;
  char z = (char)n + f;
  cout << z << endl;

  return 0;
}
