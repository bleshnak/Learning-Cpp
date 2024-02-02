#include <iostream>

int main() {
  double arg1, arg2;
  char op;
  std::cout<<"Please enter an expression of the form arg1 op arg2: "; std::cin>>arg1>>op>>arg2;

  double result;
  switch(op) {
    case '+':
      result = arg1 + arg2;
      break;
    case '-':
      result = arg1 - arg2;
      break;
    case '*':
      result = arg1 * arg2;
      break;
    case '/':
      if(arg2 == 0) {
        std::cout<<"Please don't make me divide by zero :("<<std::endl;
        return 0;
      }
      result = arg1 / arg2;
      break;
    case '%':
      result = (int)arg1 % (int)arg2;
      break;
    default:
      std::cout<<"Invalid input. Please try again :)"<<std::endl;
      return 0;
  }

  std::cout<<"Result: "<< arg1 << " " << op << " " << arg2 << " = " << result <<std::endl;

  return 0;
}
