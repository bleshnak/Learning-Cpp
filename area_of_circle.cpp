#include <iostream>
#include <cmath>

//const double PI = 3.14;

int main() {
  double radius, area;
  std::cout<<"Enter circle radius: "; std::cin>>radius;

  //area = PI * (radius * radius);
  area = M_PI * (radius * radius);
  std::cout<<"Area of the circle is "<<area<<std::endl;

  return 0;
}