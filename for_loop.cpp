//for (initialization; condition; increment) {}

#include <iostream>

int main() {
  int input_int;
  std::cout<<"Please enter a positive integer: "; std::cin>>input_int;

  for (int i = 1; i <= input_int; i++)
    std::cout<< i <<std::endl;
  
  return 0;
}
