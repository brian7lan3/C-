#include <iostream>
using namespace std;

class Rectangle{

	public:
		
		Rectangle &setLength(int);
		Rectangle &setWidth(int);
		int getLength();
		int getWidth();
		int printArea();
		
	private:
		
		int length;
		int width;
};

Rectangle &Rectangle::setLength(int l)
{
	length = l;
	return *this;
}

Rectangle &Rectangle::setWidth(int w)
{
	width = w;
	return *this;
}

int Rectangle::getLength()
{
	return length;
}

int Rectangle::getWidth()
{
	return width;
}

int Rectangle::printArea()
{
	return (length * width);
}

int main()
{
	Rectangle r;
	
	r.setLength(60).setWidth(70);
	
	cout << "r's length is " << r.getLength() << endl;
	cout << "r's width is " << r.getWidth() << endl;
	
	
	system("PAUSE");
	return 0;
	
}
