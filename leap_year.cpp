#include <iostream>

/*
bool detect_leap_year(int year) {

  if (year % 4 == 0) {

    if (year % 100 == 0) {

      if (year % 400 == 0) {
        return true;
      }
      else {
        return false;
      }

    }

    return true;

  }
  else {
    return false;
  }

}
*/

/*
bool detect_leap_year(int year) {
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
    return true;
  }
  else {
    return false;
  }
}
*/


bool detect_leap_year(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int main() {

  int year;
  std::cout << "Input year: ";
  std::cin >> year;

  if (year < 1000) {
    std::cout << "Invalid input. Year must be a 4-digit number.";
    return 0;
  }

  if (detect_leap_year(year)) {
    std::cout << year << " is a leap year";
  }
  else {
    std::cout << year << " is not a leap year";
  }

}