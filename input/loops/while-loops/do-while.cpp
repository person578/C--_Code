#include <iostream>
using namespace std;

int main()
{

    int number;

    do {
        cout << "Enter a postive # ";
        cin >> number;
    }while(number < 0);

    cout << "The number is " << number << endl;

    return 0;
}