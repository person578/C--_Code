#include <iostream>
using namespace std;

int main()
{

    double num1, num2, total;
    char op;

    cout << "*****************CALCULATOR*****************\n";

    cout << "What operator are you using? ";
    cin >> op;

    cout << "What's the first number? ";
    cin >> num1;

    cout << "What's the second number? ";
    cin >> num2;


    switch(op){
        case '+':
            total = num1 + num2;
            cout << num1 << " plus " << num2 << " is " << total << '\n';
            break;
        case '-':
            total = num1 - num2;
            cout << num1 << " minus " << num2 << " is " << total << '\n';
            break;
        case '*':
            total = num1 * num2;
            cout << num1 << " times " << num2 << " is " << total << '\n';
            break;
        case '/':
            total = num1 / num2;
            cout << num1 << " divided by " << num2 << " is " << total << '\n';
            break;
        default:
            cout << "select a valid operator (+ - * /)";

    }

    cout << "********************************************";

    return 0;
}