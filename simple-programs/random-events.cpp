#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: cout << "You win a bumper sticker" << endl; break;
        case 2: cout << "" << endl; break;
        case 3: 
        case 4:
        case 5:
    }

    return 0;
}