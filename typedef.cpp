#include <iostream>
#include <vector>

// typedef std::string text_t;
// typedef int number_t;
using text = std::string;
using number = int;

int main()
{
    using std::cout;

    text firstname = "Ethan";
    number x = 5;

    cout << "Hello, " << firstname << '\n';
    cout << x << '\n';

    return 0;
}