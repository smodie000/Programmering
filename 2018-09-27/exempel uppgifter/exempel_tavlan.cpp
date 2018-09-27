#include <iostream>
using namespace std;
int main ()
{
	char cf[] = {'A','B','C'};
	cout << cf[0] << cf[1] << cf[2] << endl;
	char temp = cf[0];
	cf[0] = cf[2];
	
	cf[2] = temp;
	cout << cf[0] << cf[1] << cf[2] << endl;
	
	
	
	
	
	

	
	
	
	
	return 0;
}
