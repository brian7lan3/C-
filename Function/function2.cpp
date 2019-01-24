#include <iostream>
#include <string>
//#include <stdio.h>

using namespace std;



void greeting(void)		//函數的順序有差別，這個函數要在上面 (不然會錯誤 
{
	cout << "000HI HI HI ! ! ! " << endl;
}


long adder(int x, int y)
{
	return x + y;
}


int main()
{
	int value1 = 5, value2 = 10;
	
	greeting();
	
	cout << adder(value1, value2) << endl;
	cout << adder(3, 4) << endl;
	
	return 0;
}


