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
	cout << union1.double_variable2 << endl;		//�P�줸��:�Ҧ��������@�άۦP����� 
	
	//�����ܪ��ۦP���� 
	
	return 0;
}
