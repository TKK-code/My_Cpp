#include <iostream>

using namespace std;

#define test1

int main(int argc, char *argv[])
{

	#ifndef test // it this macro is not defined excute this
		 cout << "Print this line" << endl;
	#endif
	
	#ifdef test1
		  cout <<"Don't print this line" << endl;
	#endif

	cout << "Message" << endl;
	return 0;
}

