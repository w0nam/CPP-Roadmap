//Simple square root calculator using double & cmath lib.
#include <iostream>
#include <cmath>
#include <cstdio>

int main()
{
  double _numberA;
  double _result;

  std::cout << "Enter a value you want to find the square root of: \n";
  std::cin >> _numberA;
  std::cin.ignore();
  _result = sqrt(_numberA);
  std::cout << "The square root of " << _numberA << " is: " << _result << std::endl;
  std::cout << "Press any key to exit..." << std::endl;
  std::getchar();
  return 0;
}
