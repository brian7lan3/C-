#include <iostream>	//iostream裡面包含了cout 
#include <string>
//#include <stdio.h>

using namespace std;

int* create_array(void);

long adder(const int array[], int number_elements);
 
int main()
{
	int *new_array;
	
	new_array = create_array();
	
	cout << "First element is " << new_array[0] << endl;
	
	delete[] new_array;
	
	return 0;
}



int* create_array(void)
{
	int *array = new int[3];
	
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	
	return array;
}
