#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    #ifndef Output
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char c[10];
    //int size = sizeof(c)/sizeof(c[1]);
     cin >> c;

    for(int i = 0; i < 10; i++){
        cout << c[i] << "+";
    }

    return 0;
}