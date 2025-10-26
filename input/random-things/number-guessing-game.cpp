#include <iostream>
using namespace std;

int main()
{

  int number, guesses;
  int tries = 0;

  srand(time(NULL));
  number = (rand() % 100) + 1;

  do{
    cout << "Enter a guess between 1 and 100 ";
    cin  >> guesses;
    tries++;

    if(guesses > number){
      cout << "Your guess is to high" << endl;
    }
    else if(guesses < number){
      cout << "Your guess is to low" << endl;
    }
    else{
      cout << "YOU GUESSED RIGHT (it took " << tries << " tries)" << endl;
    }
  }while(number != guesses);

  return 0;
}
