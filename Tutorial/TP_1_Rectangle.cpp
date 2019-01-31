#include <iostream>
using namespace std;

class Rectancle{	
	public:
		void setLength(int l);
		void setWidth(int w);
		int printArea();
	private:
		int length;
		int width;
};

void Rectancle::setLength(int l){
	length = l;
}

void Rectancle::setWidth(int w){
	width = w;
}

int Rectancle::printArea(){
	return (length * width); 
}

int main(){
	int l;
	cout << "Please input length:" ;
	cin >> l;
	
	int w;
	cout << "Please input width:";
	cin >> w;
	
	Rectancle r1;
	r1.setLength(l);
	r1.setWidth(w);
	
	int area;
	area = r1.printArea() ;
	cout << "Area: " << area << endl;

	
	system("PAUSE");
	return 0;
}
