#include <iostream>
#include <string>
//#include <stdio.h>

using namespace std;



void greeting(void)		//��ƪ����Ǧ��t�O�A�o�Ө�ƭn�b�W�� (���M�|���~ 
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


