#include <iostream>

int main()
{
  int number;
  std::cout << "Enter an integer: ";

  //recieve input from the user (equal scanf() in C)
  std::cin >> number;
  std::cout << "You entered " << number;
  return 0;
}