#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. ���Ыؤ@�Ӱ}�C
	
	// 2. �Ϋ��Ъ��覡�A�⵲�c���J�i�h
	
	
	int integer, *pointer;
	
	integer = 1;
	
	pointer = &integer;		// �]�w integer ���O�����m�� pointer
	
	
	//����ŧi�@�ӡC�@�w�n�ŧi���: �@�ӬO�O���骺��m�B�@�ӬO ��b�o�ӰO���骺�� 
	double *pi = new double;
	
	*pi = 3.14159;
	
	cout << pi << endl;
	
	 
	 
	

	return 0;
}
