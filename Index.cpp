#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "--- Bireena Info Tech Calculator ---" << endl;

    // Step 1: Input the two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Step 2: Choose the operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Step 3: Perform calculation based on choice
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation selected." << endl;
            break;
    }

    return 0;
}
