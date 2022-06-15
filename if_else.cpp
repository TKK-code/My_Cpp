#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    #ifndef Output
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a{5};
    if (a == 5)
    {
        cout << a << endl;
        a++;
    }else if(a == 6){
        cout << a << endl;
        a++;
        }
    else if (a == 6)
    {
        cout << a << endl;
        a++;
    }else {
        cout << 7 << endl;
    }

    cout << "Hello world" << endl;
    return 0;
}