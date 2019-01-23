#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. 先創建一個陣列
	
	// 2. 用指標的方式，把結構指入進去
	
	double * values = new double[10];		//宣告一個新的指標values，並且分配給他新的記憶體空間[10]	
	
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
