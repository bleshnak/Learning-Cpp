#include <iostream>

int main() {
  int input_int;
  std::cout<<"Please enter a positive integer: "; std::cin>>input_int;

  int mod, digit_count = 0, digit_sum = 0;
  while (input_int > 0) {
    mod = input_int % 10;
    input_int /= 10;
    digit_count++;
    digit_sum += mod;
  }

  std::cout<<"digit sum: "<<digit_sum<<", digit count: "<<digit_count<<std::endl;

  return 0;
}
