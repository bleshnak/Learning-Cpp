#include <iostream>

int main() {
  int user_input;
  std::cout<<"Please enter a positive integer: "; std::cin>>user_input;
  
  if (user_input % 2 == 0) {
    std::cout<< user_input << " is even"<<std::endl;
  } else {
    std::cout<< user_input << " is odd"<<std::endl;
  }
  
  return 0;
}