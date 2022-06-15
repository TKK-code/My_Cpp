#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	vector<int> vp;
	vp = {1,2,3,4,5};
	cout << *vp.begin() << endl;
	cout << "Message" << endl;
	cout << "Print this line" << endl;
	return 0;
}

// Vector in used to implement a dynamic array.
// dynamic array means the size array increase automatically
//
