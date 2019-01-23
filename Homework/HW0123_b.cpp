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
	cout << "指標 指向第二個元素 : " << *(++pointer) << endl; 
	 
	 
	

	return 0;
}
