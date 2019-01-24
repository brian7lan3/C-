#include <iostream>	//iostream裡面包含了cout 
#include <string>
//#include <stdio.h>

using namespace std;

void greeting(void);
long adder(int x, int y);

 
int main()
{
	int value1 = 5, value2 = 10;
	
	greeting();
	cout << value1 << " + " << value2 << " = " << adder(value1, value2) << endl; 

	
	return 0;
}


void greeting (void)
{
	
	cout << "Hello from the greeting function. " << endl;
}


long adder(int x, int y)
{
	return x + y;
}
