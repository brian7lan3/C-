#include <iostream>
#include <string>
//#include <stdio.h>

using namespace std;

void greeting(void);
long adder(int x, int y);		//原來是要宣告函數原型呀，成功了 



int main()
{
	int value1 = 5, value2 = 10;
	
	greeting();
	
	cout << adder(value1, value2) << endl;
	cout << adder(3, 4) << endl;
	
	return 0;
}


void greeting(void)		//函數的順序有差別，這個函數要在上面 (不然會錯誤 
{
	cout << "000HI HI HI ! ! ! " << endl;
}


long adder(int x, int y)		//函數順序有差別 
{
	return x + y;
}
