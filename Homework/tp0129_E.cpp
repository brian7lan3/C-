#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int count = 0;

struct S
{
	S(void){};
	
	
//	S(char cData,S *pNext)
//    {
//       data = cData;
//       next = pNext;
//    }
    
    char data;
    S *next;
    
}w[10];


int main(){
	
//	S *ptr = new S('c', 0 );
//	
//	S *ptr2 = new S('d', ptr);

//	w[0].next = &w[1];
//	
	w[0].next = &w[1];
	w[1].next = &w[2];
	w[2].next = &w[3];
	w[3].next = &w[4];
	
	w[0].next -> next -> next -> next -> data = 'y';

	cout << w[4].data << endl;

	return 0;
}
