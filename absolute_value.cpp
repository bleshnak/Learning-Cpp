#include <iostream>

int main() {
  int input_integer, abs_value;
  std::cout<<"Please enter an integer: "; std::cin>>input_integer;

  abs_value = input_integer;
  if(input_integer < 0) {
    abs_value *= (-1);
  }

  std::cout<<"Absolute value: "<< abs_value << std::endl;
  
  return  0;
}