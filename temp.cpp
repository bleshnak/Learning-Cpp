#include <iostream>

int main() {
  
  double tempf;
  std::cout << "Enter Temperature in Fahrenheit: ";
  std::cin >> tempf;

  double tempc;
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}