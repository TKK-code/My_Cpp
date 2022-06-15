#include <iostream>
#include "HeaderGuard1.h"

using namespace std;

int a (int a, int b){
	return a * b;
}

int main(int argc, char *argv[])
{
	cout << a(3,4) << endl;
	cout << "Message" << endl;
	return 0;
}

