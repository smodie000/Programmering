#include <iostream>
#include <string> 
using namespace std;
int main ()
{
	string s;
	cout << "skriv lite text" << endl;
	getline(cin, s);
	int antal = s.length();
	
	cout << antal << endl;
	return 0;
}
