#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. ���Ыؤ@�Ӱ}�C
	
	// 2. �Ϋ��Ъ��覡�A�⵲�c���J�i�h
	
	
	double values[4] = {0.55 , 1.1 , 2.22 , 3.333};
	
	double *pointer = &values[0];		//�{�b�A��o�F�@�ӫ��V�Ĥ@�Ӥ���������!!! 
	
	cout << "���� ���V�Ĥ@�Ӥ��� : " << *pointer << endl; 
	cout << "���� ���V�ĤG�Ӥ��� : " << *(++pointer) << endl; 
	 
	 
	

	return 0;
}
