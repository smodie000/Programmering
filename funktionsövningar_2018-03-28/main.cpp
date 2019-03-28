#include <iostream>
using namespace std;
double multiplikation(double tal);
int main()
{
	int tal; 
	cout << "skriv talet du vill gångra med -1" << endl;
	cin >> tal;
	
	double nytal = multiplikation(tal);
	cout << "talet blir " << nytal;
	
	return 0;
}
double multiplikation(double tal)
{
	double nytal = tal * -1 ;
	return nytal;
}
