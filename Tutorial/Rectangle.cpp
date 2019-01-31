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
	Rectangle r;
	
	int mylength;
	cout << "Please input lebgth:";
	cin >> mylength;
	r.setLength(mylength);
	
	int mywidth;
	cout << "Please input width:";
	cin >> mywidth;
	r.setWidth(mywidth);
	
	int Area;
	Area = r.printArea();
	cout << "Area: " << Area << endl;
	
	system("PAUSE");
	return 0;
}
