#include <iostream>

const int ASCII_OFFSET = 32; //to go from a to A, we need a - 32

int main() {
  char lower_char, upper_char;

  std::cout<<"Enter lowercase letter: "; std::cin>>lower_char;

  upper_char = (char)(lower_char - ASCII_OFFSET);
  std::cout<<"Uppercase equivalent is "<<upper_char;
  
  return 0;
}