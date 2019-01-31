#include <iostream>  
using namespace std;

class TwoDim{
	int x, y;
	
	public:
		void set(int a, int b){x = a; y = b;}
		void show(){cout << x << " " << y;}
		
};

class ThreeDim: public TwoDim{
	
};

int main(){
	ThreeDim point3D;
	point3D.set(1, 2);
	point3D.show();
	return 0;
}
