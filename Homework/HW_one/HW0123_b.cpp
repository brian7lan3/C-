#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. 先創建一個陣列
	
	// 2. 用指標的方式，把結構指入進去
	
	//練習完畢的檔案，準備做作業 
	
	
	struct structure {
		int name_id;
	};
	
	structure structure1, structure2, structure3;
	

	structure1.name_id = 1111;		// 將結構裡面的id賦予值:1111 
	structure2.name_id = 2222;
	structure3.name_id = 3333;
	
	
	int *pointer1 = &structure1.name_id;		//將這個位置的記憶體位置指向 pointer1
	int *values = new int[3];		// 宣告新的陣列 values ，並且陣列大小是3 
	
	values[0] = *pointer1;		// 將陣列裡面元素0的位置，寫入值 pointer1 
	
	
	cout << values[0] << endl;		// 顯示第一個結果答案
	
	
	cout << values[0] + 1 << endl;
	
	
	
	
	
	
	
	return 0;
}

int HW1()
{
	int *values[3];
	
	struct structure {
		int name_id;
	};
	
	structure structure1, structure2, structure3;
	
	structure *pointer = &structure1;	//創建pointer，並綁定 記憶體位置 (一定要這樣子寫) 
	
	values[0] = &(pointer -> name_id);	// 
	
	
	
	pointer -> name_id = 1111;
	cout << *values[0] << endl; 	//一定要加[0]， 
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
	double values[10];		//建立一個陣列，並用指標的方式設定第一個元素為3.14159 
	
	*values = 3.14159;
	
	cout << values[0] << endl;
	
	
	
	//*(values + 1) = 666666;
	//cout << values[1] << endl;
}


int brian3()
{
	double * values = new double[10];		//宣告一個新的指標values，並且分配給他新的記憶體空間[10]	
	
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
	
	structure structure1;		//創建一個結構 ， 名稱是 structure1 
	structure *pointer = &structure1;		//創建一個指標
	//並且 讓 structure1 的記憶體位置指向 pointer
	
	pointer -> text = "Hello from the arrow operator.";
	
	cout << pointer -> text << endl;
	
	// 用結構的型態創建兩個東西，一個是新創的結構、一個是指標的名稱 
}


int brian()
{
	double values[4] = {0.55 , 1.1 , 2.22 , 3.333};
	
	double *pointer = &values[0];		//現在，獲得了一個指向第一個元素的指標!!! 
	
	cout << "指標 指向第一個元素 : " << *pointer << endl; 
	cout << "指標 指向第二個元素 : " << *(pointer + 1) << endl; 
	cout << "指標 指向第三個元素 : " << *(pointer + 2) << endl; 
	cout << "指標 指向第四個元素 : " << *(pointer + 3) << endl; //可以從第一個元素，出發 指向任意一個元素 
}
