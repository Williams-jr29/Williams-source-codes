#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Prompt the user for input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Perform the operation
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) { // Avoid division by zero
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 1; // Exit the program with an error code
            }
            break;
        default:
            cout << "Invalid operator!\n";
            return 1; // Exit the program with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
