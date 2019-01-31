#include <iostream>
#include <stdlib.h>
using namespace std;

class OneDim{
	int x;
	
	public:
		void setx(int n){x = n;}
		void showx(){cout << x << endl;}
		
};

class TwoDim: public OneDim{
	int y;
	
	public:
		void sety(int n){y = n;}
		void showy(){cout << y << endl;}

};

int main(){
	TwoDim td;
	
	td.setx(5);
	td.sety(10);
	td.showx();
	td.showy();
	
	td.x = 1001;
	td.y = 1002;
	
}
