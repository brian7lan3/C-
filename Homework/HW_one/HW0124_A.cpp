#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. ���Ыؤ@�Ӱ}�C
	
	// 2. �Ϋ��Ъ��覡�A�⵲�c���J�i�h
	
	//�m�ߧ������ɮסA�ǳư��@�~ 
	
	
	struct structure {
		int name_id;
	};
	
	structure structure1, structure2, structure3;
	

	structure1.name_id = 1111;		// �N���c�̭���id�ᤩ��:1111 
	structure2.name_id = 2222;
	structure3.name_id = 3333;
	
	
	int *pointer1 = &structure1.name_id;		//�N�o�Ӧ�m���O�����m���V pointer1
	int *pointer2 = &structure2.name_id;
	int *pointer3 = &structure3.name_id;
	
	int *values = new int[3];		// �ŧi�s���}�C values �A�åB�}�C�j�p�O3 
	
	*values = *pointer1;		// �N�}�C�̭�����0����m�A�g�J�� pointer1 
	*(values + 1) = *pointer2;
	*(values + 2) = *pointer3;
	
	
	
	cout << values[0] << endl;		// ��ܲĤ@�ӵ��G���� 
	cout << values[1] << endl;
	cout << values[2] << endl;
	
	
	
	
	
	return 0;
}


