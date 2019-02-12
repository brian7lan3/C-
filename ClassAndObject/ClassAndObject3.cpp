#include <iostream>
#include <string>
using namespace std;

class bird_class
{
	public:
		string name;
		void increment_count(){
			number_seen++;
		}
};

int main()
{
	bird_class orioles;
	
	orioles.name = "oriole";
	orioles.number_seen = 0;
	
	orioles.increment_count();
	
	cout << "number of " << orioles.name << "s seen: " << orioles.number_seen << endl;
	
	return 0;
}
