#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;


struct S
{
	S(char cData,S *pNext)
    {
       data = cData;
       next = pNext;
    }
    char data;
    S *next;
};


//S *ptr = new S('c', 0 );


int main(){
	
	S *ptr = new S('c', 0 );
	
	cout << ptr -> data << endl;
	cout << ptr -> next << endl;


	return 0;
}
