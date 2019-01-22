#include <iostream>
#include <string>
using namespace std;

int main()
{
	union one_union
	{
		double double_variable;
		double double_variable2;
	};
	
	one_union union1;
	
	union1.double_variable = 3.14159;
	
	cout << union1.double_variable << endl;
	cout << union1.double_variable2 << endl;		//同位元組:所有的成員共用相同的資料 
	
	//兩個顯示的相同的值 
	
	return 0;
}
