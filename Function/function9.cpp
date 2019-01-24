#include <iostream>	//iostream裡面包含了cout 
#include <string>
#include <cmath>
//#include <stdio.h>

using namespace std;



int factorial(int value); 

int main()
{	
	cout << "6! = " << factorial(6) << endl;
	
	return 0;
}



int factorial(int value)
{
	if (value == 1){
		return value;
	}else {
		return value * factorial(value - 1);
	}
}
