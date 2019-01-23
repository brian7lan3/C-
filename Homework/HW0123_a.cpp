#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



int main()
{
	// 1. 先創建一個陣列
	
	// 2. 用指標的方式，把結構指入進去
	
	
	int integer, *pointer;
	
	integer = 1;
	
	pointer = &integer;		// 設定 integer 的記憶體位置為 pointer
	
	
	//不能宣告一個。一定要宣告兩個: 一個是記憶體的位置、一個是 放在這個記憶體的值 
	double *pi = new double;
	
	*pi = 3.14159;
	
	cout << pi << endl;
	
	 
	 
	

	return 0;
}
