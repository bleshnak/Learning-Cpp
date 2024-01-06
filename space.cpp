#include <iostream>

int main() {

  double earth_weight;
  std::cout << "Enter your earth weight: ";
  std::cin >> earth_weight;

  std::cout << "\n1. Mercury\n2. Venus\n3. Mars\n4. Jupiter\n5. Saturn\n6. Uranus\n7. Neptune\n";

  int planet;
  std::cout << "What planet would you like to fight on? (1-7): ";
  std::cin >> planet;

  double gravity;
  std::string planet_str;
  switch (planet) {

    case 1:
      planet_str = "Mercury";
      gravity = 0.38;
      break;
    case 2:
      planet_str = "Venus";
      gravity = 0.91;
      break;
    case 3:
      planet_str = "Mars";
      gravity = 0.38;
      break;
    case 4:
      planet_str = "Jupiter";
      gravity = 2.34;
      break;
    case 5:
      planet_str = "Saturn";
      gravity = 1.06;
      break;
    case 6:
      planet_str = "Uranus";
      gravity = 0.92;
      break;
    case 7:
      planet_str = "Neptune";
      gravity = 1.19;
      break;
    default:
      std::cout << "Incorrect input planet. Please use numbers 1-7";
      return 0;

  }

  std::cout << planet_str << " Selected. Relative weight is: " << earth_weight * gravity;

}