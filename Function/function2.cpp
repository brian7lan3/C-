#include <iostream>
#include <string>
//#include <stdio.h>

using namespace std;

void greeting(void);
long adder(int x, int y);		//ㄓ琌璶ㄧ计Θ 

//狦ㄏノㄧ计ぇ玡﹚竡ウ碞ぃゲㄏノㄧ计絪亩竟镑㊣ㄧ计玡絋粄ウぃ惠璶 
 
int main()
{
	int value1 = 5, value2 = 10;
	
	greeting();
	
	cout << adder(value1, value2) << endl;
	cout << adder(3, 4) << endl;
	
	return 0;
}


void greeting(void)		//ㄧ计抖Τ畉硂ㄧ计璶 (ぃ礛穦岿粇 
{
	cout << "000HI HI HI ! ! ! " << endl;
}


long adder(int x, int y)		//ㄧ计抖Τ畉 
{
	return x + y;
}
