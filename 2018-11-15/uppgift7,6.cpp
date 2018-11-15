#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	      const double pris = 9.9;
	      int antal;
	      double rea;
	      cout << " hur mycket ska köpas?" << endl;
	      cin >> antal;
	      if (antal < 10) {
			  
			  rea= 0;
		  }
		  else if (antal < 50 ) {
			  rea = 5; 
		  }
		  else if ( antal < 100 ){
			  rea = 10; 
		  }
		  else {
			  rea = 15;
		  }
		  cout << "kostnaden för" << antal << " skivor blir ";
		  cout << fixed << setprecision(2);
		  cout << antal*pris*(1-rea/100);                                
	return 0;
}
