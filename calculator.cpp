#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    char option;
    float result;

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
    
    while ( option >= '1' && option <= '4') { 
        
        switch (option){
            case '1':
                        result = a+b;
                        cout << "The addition result is: " <<result<<endl;
            break;
            case '2':
                        result = a-b;
                        cout << "The subtraction result is: " <<result<<endl;
            break;
            case '3':
                        result = a*b;
                        cout << "The multiplication result is: " <<result<<endl;                      
            break;
            case '4':
                        if ( b == 0){
                            cout << "You cannot divide by 0. "<<endl;
                            cin >> b;
                        } 
                        result = (float)a/b;
                        cout << "The division result is: " <<result<<endl;
            break;
            default:
                        cout << "Choose an eligible option." <<endl;
            break;
        }

        // Menú repetido dentro del while 
        cout << "\nChoose an operation from the following: " << endl; 
        cout << "1. Addition (+)" << endl; 
        cout << "2. Subtraction (-)" << endl; 
        cout << "3. Multiplication (*)" << endl; 
        cout << "4. Division (/)" << endl; 
        cout << "Press any other key to exit." << endl;
        
        cin >> option;
    }
    cout << "Exiting calculator." << endl;
}
