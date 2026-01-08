#include <iostream>

using namespace std;

int main () {

int num;

cout << "Enter the oven temperature" <<endl;
cin >> num;

if (num >= 100) {
cout << "Warning: High temperature detected." << endl;
} else {
cout << "Temperature is safe, continue." << endl;
}

return 0;
}
