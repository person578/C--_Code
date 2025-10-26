#include <iostream>
using namespace std;

double square(double length)
{
  return length * length;
}
double cube(double length)
{
  return length * length * length;
}

int main()
{

  double length;
  double area;
  double volume;

  cout << "What is the length of one side? ";
  cin >> length;

  area = square(length);
  volume = cube(length);

  cout << '\n' << "The area is " << area << '\n';
  cout << "The volume is " << volume << '\n';

  return 0;
}
