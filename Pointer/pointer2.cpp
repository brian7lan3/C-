#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    struct structure
    {
        int integer1;
        int integer2;
        struct structure *next;
        struct structure *previous;
    } structure1, structure2, structure3;

    structure3.previous = &structure2;
    structure2.previous = &structure1;

	structure3.previous -> previous -> integer1 = 30;

    cout << structure1.integer1 << endl;

    return 0;
}

