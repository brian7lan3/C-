#include <iostream>	//iostream裡面包含了cout 
#include <string>
#include <cmath>
//#include <stdio.h>

using namespace std;

//從函數傳回結構 
struct complex_number
{
	int real;
	int imaginary;
};

double magnitude(complex_number * c);


int main()
{
	complex_number complex { 3 , 4};
	
	cout << "Maginitude of the complex number: " << magnitude(&complex) << endl;
	
	return 0;
}


double magnitude(complex_number * c)
{
	return aqrt(c->real * c->real + c->imaginary * c->imaginary);
}
