#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	int a, b, c;
	int total=0, sum = 0;
	cin >> a >> b >> c;

	for(int i = 1; i <= c; i++){
		total = i * a;
		sum = sum + total;
	}

	if(sum > b){
		cout << sum -b <<endl;
	}else cout << 0 << endl;

	return 0;
}

