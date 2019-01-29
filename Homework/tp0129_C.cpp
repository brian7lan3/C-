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
	
	S *ptr3 = new S('e', ptr2);
	
	S *ptr4 = new S('f', ptr3);
	
	cout << ptr -> data << endl;
	cout << ptr -> next << endl;
	


	cout << ptr2 -> next -> data << endl;
	cout << ptr2 -> next -> next << endl;
	
	
	cout << ptr3 -> next -> next -> data << endl;
	cout << ptr3 -> next -> next -> next << endl;
	
	cout << ptr4 -> next -> next -> next -> data << endl;
	cout << ptr4 -> next -> next -> next -> next << endl;
	return 0;
}
