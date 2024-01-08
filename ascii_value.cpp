#include <iostream>

int main() {
  char input_character;
  std::cout<<"Enter character: "; std::cin>>input_character;

  int ascii_value;
  ascii_value = (int)input_character; //numerical ascii value is stored in 
                                      //input_character's memory
  std::cout<<"The ASCII value is "<<ascii_value;

  return 0;
}