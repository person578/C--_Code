#include <iostream>
using namespace std;

int main()
{

    string name;
    int age;
    
    cout << "What's your age? ";
    cin >> age;

    cout << "What's your full name? ";
    getline(cin >> ws, name);

    cout << '\n' << "Hello, " << name << "!" << '\n';
    cout << "You are " << age << " years old!" << '\n';

    return 0;
}