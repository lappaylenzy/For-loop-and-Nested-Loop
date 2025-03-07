#include <iostream>

int main() {
  int sum = 0;
  for (int i = 5; i <= 50; i += 3) {
    sum += i;
  }
  std::cout << "The sum of the series is: " << sum << std::endl;
  return 0;
}