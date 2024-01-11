#include <iostream>
#include <vector>
#include <ctime>     //for time()
#include <cstdlib>   //for rand() and srand()

int main() {

  std::vector<int> parent_numbers, odd_numbers, even_numbers;

  //seed the RNG with the current time
  srand(static_cast<unsigned>(time(0)));
  /*
  - time(0): The time function returns the current time in seconds since the epoch 
  (January 1, 1970, 00:00:00 UTC). time(0) is a common way to get a changing value 
  that can be used as a seed for a random number generator.
  - static_cast<unsigned>(time(0)): The static_cast<unsigned> part is a type cast that 
  converts the result of time(0) into an unsigned integer. The srand function typically 
  takes an unsigned integer as a seed.
  - srand(static_cast<unsigned>(time(0)));: This line sets the seed for the random number 
  generator using the current time. By using the current time as a seed, you ensure that 
  each time you run the program, you get a different sequence of random numbers, making the 
  results less predictable.
  */

  int vector_size = 5; //rand() % 100;
  for (int i = 0; i < vector_size; i++) {
    int random_number = rand() % 100; //generate random number
    parent_numbers.push_back(random_number); //slap random_number into parent vector
    if (random_number % 2 == 1) {
      odd_numbers.push_back(random_number); //if random_number is odd, put in odd_numbers vector
    } else {
      even_numbers.push_back(random_number); //if random_number is even, put it in even_numbers vector
    }
  }

  int even_sum = 0;
  for (int i = 0; i < even_numbers.size(); i++) {
    even_sum = even_sum + even_numbers[i];
  }

  int odd_product = 1;
  for (int i = 0; i < odd_numbers.size(); i++) {
    odd_product = odd_product * odd_numbers[i];
  }

  std::cout<<"Parent vector: ";
  for (int i = 0; i < parent_numbers.size(); i++) {
    std::cout<< parent_numbers[i] <<" ";
  }
  std::cout<<"\nEven sum: "<<even_sum<<"\nOdd product: "<<odd_product<<std::endl;

  return 0;
}