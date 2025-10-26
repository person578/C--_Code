#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int numRolls;
    cout << "How many times do you want to roll? ";
    cin >> numRolls;

    int sides;
    cout << "What sided die are you using? ";
    cin >> sides;

    int rolls[numRolls];
    int total = 0;

    for (int i = 0; i < numRolls; i++) {
        rolls[i] = rand() % sides + 1;
        total += rolls[i];
    }

    for (int j = 0; j < numRolls; j++) {
        cout << "Roll " << (j + 1) << ": " << rolls[j] << endl;
    }

    cout << "\nThe total is " << total << endl;

    return 0;
}