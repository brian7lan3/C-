#include <iostream>
#include <string>
//#include <stdio.h>

using namespace std;
 void function(void);

 
int main()
{
	string color ("red");
	
	cout << "In main the color is " << color << endl; 
	function();
	
	return 0;
}


void function (void)
{
	string color ("green");
	
	cout << "in the function the color is " << color << endl;
}
