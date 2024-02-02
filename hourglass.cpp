#include <iostream>
#include <string>

int main() {
  int n;
  std::cout<<"Please enter a positive integer: "; std::cin>>n;

  //n = (2 * n) - 1;

  //Print upper half of the hourglass
  for (int i = 1; i <= n; i++) {
    //Print spaces
    for (int j = 1; j < i; j++)
      std::cout<<" ";
    //Print *s
    for (int k = 1; k <= (2 * (n - i)) + 1; k++)
      std::cout<<"*";

    std::cout<<std::endl;
  }

  //Print lower half of the hourglass
  for (int i = n - 1; i >= 1; i--) {
    //Print spaces
    for (int j = i - 1; j > 0; j--)
      std::cout<<" ";
    //Print *s
    for (int k = 1; k <= (2 * (n - i)) + 1; k++)
      std::cout<<"*";
    
    std::cout<<std::endl;
  }
  
  return 0;
}
