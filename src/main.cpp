#include <iostream>
#include <cmath>

using namespace std;

int main () {

    // Basic variables
    string operation;
    double num1, num2;

    // User enter
    cout << "Calculate: " << endl;
    cin >> num1 >> operation >> num2;

    // Result
    
    if (operation == "+")
            
        cout << "--- Calculator ---" << endl 
             << "Result: " << num1 + num2 << endl;

    else if (operation == "-")
            
        cout << "--- Calculator ---" << endl 
             << "Result: " << num1 - num2 << endl;

    else if (operation == "/")
            
        cout << "--- Calculator ---" << endl 
             << "Result: " << num1 / num2 << endl ;

    else if (operation == "*")
            
        cout << "--- Calculator ---" << endl 
             << "Result: " << num1 * num2 << endl;

    return 0;
}