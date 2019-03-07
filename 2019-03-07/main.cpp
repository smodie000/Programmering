#include <iostream>
using namespace std;
double area(double radie);
double volymcylinder(double radie, double hojd);
int main()
{
	double radie;
	double hojd;
	
	cout << "vad är radien" << endl;
	cin >> radie;
	cout << "vad är höjden" << endl;
	
	cin >> hojd;
	
	double basyta = area(radie);
	cout << basyta;	
	
	
	double volym = volymcylinder(radie, hojd);
	cout << volym;
	
	
	
	
	
	return 0;
}
double area(double radie) 
{
	
	double basyta = radie * radie * 3.14;
	return basyta;
	
}
double volymcylinder(double hojd , double basyta)
{
	double volym = basyta * hojd;
	
	
	return volym;
	
	
	
}




