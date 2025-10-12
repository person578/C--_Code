#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double number;
    double x;

    cout << "What number do you want to find the square of? ";
    cin >> number;

    x = number;
    number = pow(number, 2);

    cout << "The square of " << x << " is " << number << '\n';

    return 0;
}
