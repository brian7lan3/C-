#include <iostream>	//iostream�̭��]�t�Fcout 
#include <string>
#include <cmath>
//#include <stdio.h>

using namespace std;


void printem(string text);
void caller_function(string text, void (*pointer_to_function)(string));

//�ϥΫ��V��ƪ����� 

int main()
{	
	caller_function("Hello from C++", printem); 
	
	return 0;
}



void caller_function(string text, void (*pointer_to_function)(string))
{
	(*pointer_to_function)(text);
}

void printem(string text)
{
	cout << text << endl;
}
