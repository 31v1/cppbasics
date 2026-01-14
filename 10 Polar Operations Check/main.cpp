#include <iostream>

using namespace std;

int main (){
  int number;

do { 
    cout << "Enter the sequence of the numeric reading" <<endl;
    cin >> number;

    if (number < 0){
        
        cout << "Invalid reading – negative value" << endl;
        
    } else if ((number % 2) == 0){
        
        cout << "OK – even reading." << endl;
        
    } else if ((number % 2) == 1) {
        
        cout << "Attention – odd reading." << endl;
    }
} while (number != 0);
  cout << "Review complete. System ready for shutdown." << endl;
  
  return 0;
}
