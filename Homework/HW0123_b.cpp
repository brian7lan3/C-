#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. ���Ыؤ@�Ӱ}�C
	
	// 2. �Ϋ��Ъ��覡�A�⵲�c���J�i�h
	
	double * values = new double[10];		//�ŧi�@�ӷs������values�A�åB���t���L�s���O����Ŷ�[10]	
	
	if(values == NULL) exit(1); 
	
	values[5] = 3.14159;
	
	cout << "The stored value = " << values[5] << endl;
	


	return 0;
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
	cout << "���� ���V�ĥ|�Ӥ��� : " << *(pointer + 3) << endl; //�i�H�q�Ĥ@�Ӥ����A�X�o ���V���N�@�Ӥ��� 
}
