#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout << "skriv ålder" << endl;
	cin >> a;
	if (a < 15 || a > 65 ) {
		cout << "kostar 5kr" << endl;
	}
	else {
		cout << "kostar 10kr" << endl;
	}
	
	return 0;
}
