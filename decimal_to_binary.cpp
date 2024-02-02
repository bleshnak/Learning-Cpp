#include <iostream>
#include <string>

int main() {
  int input_int;
  std::string binary_string = "";
  std::cout<<"Please enter a positive integer: "; std::cin>>input_int;

  int remainder;
  while (input_int > 0) {
    remainder = input_int % 2;
    binary_string = std::to_string(remainder) + binary_string;
    input_int /= 2;
  }

  std::cout<<binary_string<<std::endl;

  return 0;
}
