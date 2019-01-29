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
	
	S *ptr2 = new S('d', ptr);
	
	cout << ptr -> data << endl;
	cout << ptr -> next << endl;
	


	cout << ptr2 -> next -> data << endl;
	cout << ptr2 -> next -> next << endl;

	return 0;
}
