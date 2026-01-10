#include <iostream>

using namespace std;

int main (){
  
int repeat;

cout << "How many times the message should repeat?" << endl;
cin >> repeat;

for (int i = 1; i <= repeat; ++i) {
cout << "You done well, if you can read this." << endl;
}

return 0;
}
