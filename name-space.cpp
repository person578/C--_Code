#include <iostream>

namespace first 
{
    int x = 1;
}

int main()
{
    using std::cout;

    int x = 0;

    cout << first::x << '\n';

    return 0;
}