#include <iostream>
#include <string>

int main() {
  int hour24, minutes24;
  char delim;
  std::cout<<"Please enter a time in a 24-hour format: "; std::cin>>hour24>>delim>>minutes24;

  int hour12;
  std::string period;
  if(hour24 <= 11) {
    period = " am";
    if(hour24 == 0) {
      hour12 = 12;
    }
    else {
      hour12 = hour24;
    }
  }
  else {
    period = " pm";
    if(hour24 >= 13) {
      hour12 = hour24 - 12;
    }
  }

  std::cout<<"                         12-hour format: "<< hour12 << delim << minutes24 << period <<std::endl;

  return 0;
}
