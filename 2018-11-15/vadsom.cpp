#include <iostream>
using namespace std;
int main ()
{
	int a;
	
	cout << "skriv ålder" << endl;
	cin >> a;
	if (a < 65 && a > 15) {
		cout << "kostar 10kr" << endl;
	}
	else if (a < 15 ) {
	cout <<	"taxa 5 kr" << endl;
	}

	else {
		cout << "taxa 5 kr" << endl;
	} 
	
	
	
	
	return 0;
}
