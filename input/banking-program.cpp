#include <iostream>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    cout << "******************\n";
    cout << "Enter your choice\n";
    cout << "******************\n";
    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n\n";
    cout << "What is your choice? ";
    cin >> choice;

    return 0;
}