#include <iostream>
#include <string>
using namespace std;

class bird_class
{
	public:
		string name;
		int number_seen;
		void increment_count(){
			number_seen++;
		}
		bird_class (string text);
};

bird_class::bird_class(string text)
{
	name = text;
	number_seen = 0;
}

int main()
{
	bird_class orioles("oriole1231504");
	
	orioles.increment_count();
	
	cout << "number of " << orioles.name << "s seen: " << orioles.number_seen << endl;
	
	return 0;
}
