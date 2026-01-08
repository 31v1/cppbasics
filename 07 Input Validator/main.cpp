#include <iostream>

using namespace std;

int main () {

int number;

  do {
      cout << "Enter a number between 1 and 5." << endl;
      cin >> number;
      if (number < 1 || number > 5) {
      cout << "Number outside range." << endl;
      }
  } while (number < 1 || number > 5);

return 0;
}
