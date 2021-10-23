#include <iostream>
using namespace std;

int main()
{
  int intA = 10001;
  int input;
  int result;

  cout << "Type a number: ";
  cin >> input;

  result = intA - input;
  cout << result;
  return 0;
}
