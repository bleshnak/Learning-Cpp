#include <iostream>

int main() {
  std::cout<<"Enter the grades separated by a space. End your sequence by typing -1"<<std::endl;
  
  int sum = 0, count = 0, current_input;
  while (true) {
    std::cin>>current_input;
    if (current_input == -1)
      break;
    sum += current_input;
    count++;
  }

  double average = (double)sum / (double)count;
  std::cout<<"The average of the class: "<< average <<std::endl;

  return 0;
}
