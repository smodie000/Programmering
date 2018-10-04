#include <iostream>
#include <string> 
using namespace std;
int main ()
{
	cout << "skriv ett klockslag" << endl;
	string klocka;
	getline(cin,klocka);
	string timma = klocka.substr(0,2);
	cout << timma << endl;
	string minut = klocka.substr(3,2);
	cout << minut << endl;
	
	
	
	
	return 0;
}
