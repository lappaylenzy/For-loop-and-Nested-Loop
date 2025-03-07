#include <iostream>
#include <cctype> //for tolower()

using namespace std;

int main() {
  char input;

  for (int i = 0; i < 5; ++i) {
    cout << "Enter a character (or 'n' to exit): ";
    cin >> input;

    // Convert input to lowercase for case-insensitive comparison
    input = tolower(input);

    if (input == 'n') {
      cout << "Loop exited early." << endl;
      break; // Exit the loop
    } else {
      cout << "You entered: " << input << endl;
    }
  }

  return 0;
}