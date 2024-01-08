#include <iostream>
using namespace std; //don't have to write std::cout now, just cout (bad practice)

int main() {
  int num1;
  int num2;
  int sum;

  cout<<"Enter two space-delimited numbers: ";
  cin>>num1>>num2;

  //above could be rewritten as:
  // cout<<"Enter two space-delimited numbers: "<<endl;cin>>num1>>num2;

  sum = num1 + num2;
  cout<<num1<<" + "<<num2<<" = "<<sum<<endl; //std::endl ends line

  return 0;
}