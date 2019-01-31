#include <iostream>
using namespace std;

class Rectangle{
	
	public:
		
		void setLength(int l);
		void setWidth(int w);
		
		int printArea();
		
	private:
		int length;
		int width;
};

void Rectangle::setLength(int l)
{
	length = l;
}

void Rectangle::setWidth(int w)
{
	width = w;
}

int Rectangle::printArea()
{
	return (length*width);
}

int main(){
	Rectangle r1(10, 20), r2;
	
	int Area;
	Area = r1.printArea();
	cout << "r1 is " << Area << endl;
	Area = r2.printArea();
	cout << "r2 is " << Area << endl;
	
	system("PAUSE");
	return 0;
}
