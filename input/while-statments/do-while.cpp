#include <iostream>
using namespace std;

int main()
{

    int number;

    while(number < 0){
        cout << "Enter a postive # this time ";
        cin >> number;
    }

    cout << "The number is " << number << endl;

    return 0;
}