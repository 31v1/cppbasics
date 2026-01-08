#include <iostream>

using namespace std;

int main () {

  int speed;

  cout << "Enter the conveyor belt speed." << endl;
  cin >> speed;

  if ( speed > 80 ) {
  cout << "Warning: Overspeed. Lower it." << endl;
  } else if (speed < 30) {
      cout << "Warning: Speed too low." << endl;
  } else {
    cout << "Normal speed." << endl;
    }
  return 0;
}
