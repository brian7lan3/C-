#include <iostream>	//iostream裡面包含了cout 
#include <string>
//#include <stdio.h>

using namespace std;


struct complex_number
{
	int real;
	int imaginary;
};

complex_number add_complex(complex_number c1, complex_number c2);


int main()
{
	complex_number c1 = {1, 2};
	complex_number c2 = {3, 4};
	
	complex_number total = add_complex(c1, c2);
	cout << "Complex number sum = " << total.real;
	cout << " + " << total.imaginary << "i" << endl; 
	
	return 0;
}


complex_number add_complex(complex_number c1, complex_number c2)
{
	complex_number sum;
	
	sum.real = c1.real + c2.real;
	sum.imaginary = c1.imaginary + c2.imaginary;
	
	return sum;
	
}
