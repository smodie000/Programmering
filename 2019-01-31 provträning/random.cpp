#include <iostream>
#include <cstdlib> 
#include <unistd.h>
#include <string>
using namespace std;
int main () 
{
	
	//while (true == true) {
	//int i;
	//i = (rand()%10)+1;
	//cout << i << endl;
	//sleep(1);
//}

string s = "januari";

int pos = s.find('a',0);
cout << pos << endl;

string s2 = s.substr(3,2);
cout << s2;
int a, b;
cin >> a ;
cout << a;
getline(cin ,s2);



	
	
	
	
	
	
	
	return 0;
}
