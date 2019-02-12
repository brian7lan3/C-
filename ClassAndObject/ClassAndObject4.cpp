#include <iostream>
#include <string>
using namespace std;

class bird_class
{
	private:
		int number_seen;
	public:
		string name;
		void increment_count(){
			number_seen++;
		}
		int get_count(){return number_seen;}
		bird_class (string text);
};

bird_class::bird_class(string text)
{
	name = text;
	number_seen = 0;
}

int main()
{
	bird_class orioles("oriole");
	
	orioles.increment_count();
	
	cout << "number of " << orioles.name << "s seen: " << orioles.get_count() << endl;
	
	return 0;
}
