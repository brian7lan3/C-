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
};
int N = 10;


S new_structure(S my);
 
 
int main(){
//	第一步先寫N行的函數
//	第二步寫new新增的方式


//	w[0].next = &w[1];
//	w[1].next = &w[2];
//	w[2].next = &w[3];
//	w[3].next = &w[4];
	S w[N];
	
	for(int i = 0; i < N; i++){
		w[i].next = &w[i + 1];
	}
	

	S new_structure(w[1]);
	

//	S *ptr = new S('c', 0 );
//	
//	S *ptr2 = new S('d', ptr);
	
	w[0].next -> next -> next -> next -> data = 'b';
	cout << w[4].data << endl;

	return 0;
}

S new_structure(S my){
	
	S *newxss = new S;
	
 	my.next = newxss;
 	
 	return my;
}
