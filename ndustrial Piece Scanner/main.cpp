#include <iostream>

using namespace std;

int main () {

int num;

  cout << "Enter the piece serial number" << endl;
  cin >> num;
  
  if ((num % 2) == 0) {
    cout << "Accepted" << endl;
  } else {
    cout << "Rejected, odd number" << endl;
  }
  return 0;
}
