#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i <= 5; ++i) {
    cout << "Multiplication table of " << i << ":" << endl;
    for (int j = 0; j <= 10; ++j) {
      cout << i << " x " << j << " = " << i * j << endl;
    }
    cout << endl; // Add a blank line between tables
  }
  return 0;
}