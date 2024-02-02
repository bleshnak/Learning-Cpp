#include <iostream>

int main() {
  int input_integer;
  std::cout<<"Please enter a positive integer: "; std::cin>>input_integer;

  int placeholder = 1;
  while (placeholder <= input_integer) {
    std::cout<<placeholder<<std::endl;
    placeholder++;
  }

  return 0;
}
