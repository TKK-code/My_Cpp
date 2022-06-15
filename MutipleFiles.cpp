#include <iostream>

using namespace std;

int age(int a);

int main(int argc, char *argv[])
{
	#ifndef Output
	 freopen("in.txt", "r", stdin);
	 freopen("out.txt", "w", stdout);
	#endif

	cout << age(19) << endl;

	
	cout << "Message" << endl;
	return 0;
}

