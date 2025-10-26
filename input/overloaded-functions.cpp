#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);

int main()
{

  string topping1;

  cout << "What topping pizza do you want? ";
  cin >> topping1;

  bakePizza(topping1);

  return 0;
}

void bakePizza()
{
  cout << "Here is your pizza!\n";
}
void bakePizza(string topping1)
{
  cout << "Here is your " << topping1 << " pizza\n";
}
