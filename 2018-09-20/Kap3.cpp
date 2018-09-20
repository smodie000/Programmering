#include <iostream>
using namespace std;
int main ()
{
	//double tid [] = {9.98, 10.15, 10.04};
	//cout << "Följade tider innehålls" << endl;
	//cout << tid [0] << "\t" << tid [2] << endl;
	
	
	int tid = 1000;
	int min = tid / 60;
	int sek = tid % 60;
	cout << tid << " s = " << min << " min och " << sek << " s" << endl;
	
	return 0;
}
