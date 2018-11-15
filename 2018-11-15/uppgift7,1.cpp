#include <iostream>
using namespace std;
int main ()
{
	int a;
	
	cout << "vart vill du" << endl;
	cout << "1.Höger  2. vänster" << endl;
	cin >> a;
	if (a==1) {
		cout << "du valde höger" << endl;
	}
	else {
		cout << "du valde vänster " << endl;
	}
	
	
	return 0;
}
