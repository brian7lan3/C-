#include <iostream>	//iostream裡面包含了cout 
#include <string>
//#include <stdio.h>

using namespace std;


long adder(const int array[], int number_elements);
 
int main()
{
	int data[] = {1, 2, 3, 4};
	
	
	int total = adder(data, sizeof(data) / sizeof(int));	//要計算出 number_elements 的數目，必須用 16/4 = 4 
	
	cout << "The sizeof(data) is " << sizeof(data) << endl;
	cout << "The sizeof(int) is " << sizeof(int) << endl;
	cout << "The total is " << total << endl;
	
	return 0;
}



long adder(const int array[], int number_elements)
{
	long sum = 0;
	
	for (int loop_index = 0; loop_index < number_elements; loop_index++)
		sum = sum + array[loop_index];
		
	return sum;
}
