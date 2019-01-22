#include <iostream>
#include <string>
using namespace std;


long adder(int x, int y)
{
	return x + y;
}


int main()
{
	int value1 = 5, value2 = 10;
	
	cout << adder(value1, value2) << endl;
	cout << adder(3, 4) << endl;
	
	return 0;
}

