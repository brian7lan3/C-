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

    structure1.next = &structure2;
    structure2.next = &structure3;

    structure *pointer1 = &structure2;
    pointer1 -> integer1 = 7;

    cout << pointer1 -> integer1 << endl;

    return 0;
}

