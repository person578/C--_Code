#include <iostream>

int main()
{
    using std::cout;

    // this is here to show that you can add multible operators in one line
    int students = 40 + 10 - 5 * 6; // this just does the same as 'students = 20' but it uses multiple arithmetic operators to show it uses PEMDAS with this

    // students = students + 1;
    // students+=1;
    // students++;
    // students--;


    cout << students << '\n';

    return 0;
}