#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	string s;
	getline(cin, s);
	int mark = 0;

	for(int i =1; i <= s.length(); i++){
		if(s[i] == s[i+1]){
			mark++;
		}
	}
	if(mark >= 7 ){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	
	return 0;
}

