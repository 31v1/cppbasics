#include <iostream>

using namespace std;

int main () {

  int weight1;
  int weight2;

  cout << "Enter the first piece weight" << endl;
  cin >> weight1;

  cout << "Enter the second piece weight" << endl;
  cin >> weight2;

  if ( weight1 > weight2 ){
    cout << "Piece 1 is heavier than the second." << endl;
  }
  else if (weight1 < weight2){
    cout << "Piece 2 is heavier" << endl;
  }
  else {
    cout << "Both pieces weigh the same" << endl;
  }

  return 0;
}
