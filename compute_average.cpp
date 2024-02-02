#include <iostream>

int main() {
  int num_students;
  std::cout<<"Please enter the number of students in the class: "; std::cin>>num_students;
  std::cout<<"Enter the students' grades (separate by a space): ";
  
  int curr, sum = 0;
  for (int count = 1; count <= num_students; count++) {
    std::cin>>curr;
    sum += curr;
  }

  double average = (double)sum / (double)num_students;
  std::cout<<"Average grade of the class is: "<< average << std::endl;

  return 0;
}
