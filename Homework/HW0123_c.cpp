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


int HW1()
{
	int *values[3];
	
	struct structure {
		int name_id;
	};
	
	structure structure1, structure2, structure3;
	
	structure *pointer = &structure1;	//�Ы�pointer�A�øj�w �O�����m (�@�w�n�o�ˤl�g) 
	
	values[0] = &(pointer -> name_id);	// 
	
	
	
	pointer -> name_id = 1111;
	cout << *values[0] << endl; 	//�@�w�n�[[0]�A 
}

int brian6()
{
	const char *message = "Hello from C++. ";	
	cout << message << endl;
}


int brian5()
{
	double values[4] = {0.0 , 1.0 , 2.0 , 3.0};
	
	double *pointer = &values[0];
	
	cout << *(pointer + 3) << endl;
}


int brian4()
{
	double values[10];		//�إߤ@�Ӱ}�C�A�åΫ��Ъ��覡�]�w�Ĥ@�Ӥ�����3.14159 
	
	*values = 3.14159;
	
	cout << values[0] << endl;
	
	
	
	//*(values + 1) = 666666;
	//cout << values[1] << endl;
}


int brian3()
{
	double * values = new double[10];		//�ŧi�@�ӷs������values�A�åB���t���L�s���O����Ŷ�[10]	
	
	if(values == NULL) exit(1); 
	
	values[5] = 3.14159;
	
	cout << "The stored value = " << values[5] << endl;
}


int brian2()
{
	
	
		struct structure{
		string text;
		int numbers[100];
	};
	
	structure structure1;		//�Ыؤ@�ӵ��c �A �W�٬O structure1 
	structure *pointer = &structure1;		//�Ыؤ@�ӫ���
	//�åB �� structure1 ���O�����m���V pointer
	
	pointer -> text = "Hello from the arrow operator.";
	
	cout << pointer -> text << endl;
	
	// �ε��c�����A�Ыب�ӪF��A�@�ӬO�s�Ъ����c�B�@�ӬO���Ъ��W�� 
}


int brian()
{
	double values[4] = {0.55 , 1.1 , 2.22 , 3.333};
	
	double *pointer = &values[0];		//�{�b�A��o�F�@�ӫ��V�Ĥ@�Ӥ���������!!! 
	
	cout << "���� ���V�Ĥ@�Ӥ��� : " << *pointer << endl; 
	cout << "���� ���V�ĤG�Ӥ��� : " << *(pointer + 1) << endl; 
	cout << "���� ���V�ĤT�Ӥ��� : " << *(pointer + 2) << endl; 
	cout << "���� ���V�ĥ|�Ӥ��� : " << *(pointer + 3) << endl; //�i�H�q�Ĥ@�Ӥ����A�X�o ���V��N�@�Ӥ��� 
}
