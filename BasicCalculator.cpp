//A C++ program to perform all basic arithmetic operations at once
#include <iostream>

using namespace std;

int main() {
    //Variable declaration
    double num1, num2;

    //Prompt the user for input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    //Perform and display all operations
    cout << "Addition: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    //Check for division by zero before performing division
    if (num2 != 0) {
        cout << "Division: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    return 0;
}

