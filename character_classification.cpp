#include <iostream>

int main() {
  char input_character;
  std::cout<<"Please enter a character: "; std::cin>>input_character;

  //determine case and if alpha or numeric
  if(input_character >= 'a' && input_character <= 'z') {
    std::cout<< input_character << " is a lowercase letter"<<std::endl;
  }else if(input_character >= 'A' && input_character <= 'Z') {
    std::cout<< input_character << " is an uppercase letter"<<std::endl;
  }else if(input_character >= '0' && input_character <= '9') {
    std::cout<< input_character << " is a digit"<<std::endl;
  }else {
    std::cout<< input_character << " is not an alpha-numeric character"<<std::endl;
  }

  return 0;
}