#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    char option;
    float resultado;

    cout << "Enter the first number: " << endl;
    cin >> a;

    cout << "Enter the second number: " << endl;
    cin >> b;

    cout << "Choose an operation from the following: " << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;

    cin >> option;

    switch (option){
        case '1':
                    resultado = a+b;
                    cout << "The addition result is: " <<resultado<<endl;
        break;
        case '2':
                    resultado = a-b;
                    cout << "The subtraction result is: " <<resultado<<endl;
        break;
        case '3':
                    resultado = a*b;
                    cout << "The multiplication result is: " <<resultado<<endl;
        break;
        case '4':
                    resultado = a/b;
                    cout << "The division result is: " <<resultado<<endl;
        break;
        default:
                    cout << "Choose an eligible option." <<endl;
        break;
}
}
