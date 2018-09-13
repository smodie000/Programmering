#include <iostream>
using namespace std;
int main ()
{
	int tal1;
	
	cout << "storlek på long int " << sizeof (long int) << endl;
	tal1 = 8;
	cout <<tal1 << endl;
	tal1 = 4.9; 
	cout << tal1 << endl;
	//float f1;
	//f1 = 4.9;
	//cout << f1 << endl;
	//f1 = f1 + 4;
	//cout << f1 << endl;
	//f1 = f1 + tal1;
	//cout << f1 << endl;
	//tal1 = tal1 * f1;
	//cout << tal1 << endl;
	//cout << "tal1 = " << f1 << endl;
	//cout << "" << endl;
	//int a = 10;
	//int b = 20-a;
	//b = b-a;
	//a=a*a;
	//cout << "b = " << b << endl;
	//cout << "a = " << a << endl;
	//cout << " B är 0 hahahahahahah" << endl;
	int heltal1;
    int heltal2;
    int g1;
    int g2;
    int g3;
    int g4;
    int g5;
    int g6;
    cout << "skriv ett tal" << endl; 
	cin >> heltal1; 
	cout << "skriv in ett tal" << endl;
	cin >> heltal2;
	cout << "PLUS!"<< endl;
	cout << heltal1 + heltal2 << endl;
	cout << "skriv två tal samtidigt" << endl;
	cin >> g1 >> g2; 
	cout << g1 + g2 << endl;
	cout << "multiplikation denna gången" << endl; 
	cin >> g3 >> g4;
	cout << g3*g4 << endl;
	cout << "nu försöker vi division" << endl;
	cin >> g5 >> g6;
	cout << g5/g6;
	
	
	
	
	
	return 0;
}
