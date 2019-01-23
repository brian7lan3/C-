#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. 先創建一個陣列
	
	// 2. 用指標的方式，把結構指入進去
	
	
	double values[4] = {0.55 , 1.1 , 2.22 , 3.333};
	
	double *pointer = &values[0];		//現在，獲得了一個指向第一個元素的指標!!! 
	
	cout << "指標 指向第一個元素 : " << *pointer << endl; 
	cout << "指標 指向第二個元素 : " << *(pointer + 1) << endl; 
	cout << "指標 指向第三個元素 : " << *(pointer + 2) << endl; 
	cout << "指標 指向第四個元素 : " << *(pointer + 3) << endl; //可以從第一個元素，出發 指向任意一個元素 
	 
	 
	

	return 0;
}
