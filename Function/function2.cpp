#include <iostream>
#include <string>
//#include <stdio.h>

using namespace std;

void greeting(void);
long adder(int x, int y);		//��ӬO�n�ŧi��ƭ쫬�r�A���\�F 

//�p�G�b�ϥΨ�Ƥ��e�w�q���N�i�H�����A�ϥΨ�ƭ쫬�A���ɽsĶ������b�I�s��ƫe�T�{���A���A�ݭn�쫬�F 
 
int main()
{
	int value1 = 5, value2 = 10;
	
	greeting();
	
	cout << adder(value1, value2) << endl;
	cout << adder(3, 4) << endl;
	
	return 0;
}


void greeting(void)		//��ƪ����Ǧ��t�O�A�o�Ө�ƭn�b�W�� (���M�|���~ 
{
	cout << "000HI HI HI ! ! ! " << endl;
}


long adder(int x, int y)		//��ƶ��Ǧ��t�O 
{
	return x + y;
}
