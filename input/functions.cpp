#include <iostream>
using namespace std;

void happyBirthday(string name);

int main()
{

  string name;

  cout << "What's your name? ";
  cin >> name;

  happyBirthday(name);
  happyBirthday(name);
  happyBirthday(name);

  return 0;
}


void happyBirthday(string name)
{

  cout << "Happy Birthday to You\n";
  cout << "Happy Birthday to You\n";
  cout << "Happy Birthday dear " << name << "!\n";
  cout << "Happy Birthday to You\n\n";

}
