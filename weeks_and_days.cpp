#include <iostream>

const int DAYS_IN_WEEK = 7;
int main() {
  int days_traveled;
  std::cout<<"Enter number of days traveled: "<<std::endl;
  std::cin>>days_traveled;

  int weeks_traveled, days_remaining;
  weeks_traveled = days_traveled / DAYS_IN_WEEK;
  days_remaining = days_traveled % DAYS_IN_WEEK;

  std::cout<<"You traveled "<<weeks_traveled<<" weeks and "<<days_remaining<<" days";
  std::cout<<std::endl;

  return 0;
}