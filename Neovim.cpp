#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	#ifndef Output
	 freopen("in.txt", "r", stdin);
	 freopen("out.txt", "w", stdout);
	#endif
	
	cout << "Message" << endl;
	return 0;
}
