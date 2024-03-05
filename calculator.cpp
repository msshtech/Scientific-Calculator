#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate factorial
double factorial(double n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    char choice; // Variable to store user's choice
    double x, y; // Variables for input numbers
    bool radiansMode = true; // Default mode is radians for trigonometric functions

    // Main loop to display menu and handle user's choice
    do {
        // Display menu
        cout << "Calculator Selection\n";
        cout << "1. Basic Calculator\n";
        cout << "2. Scientific Calculator\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Switch case to handle user's choice
        switch (choice) {
            case '1': { // Basic Calculator
                char operation; // Variable to store arithmetic operation
                // Display basic calculator menu
                cout << "Basic Calculator\n";
                cout << "Enter operation (+, -, *, /): ";
                cin >> operation;
                cout << "Enter two numbers: ";
                cin >> x >> y;
                // Perform arithmetic operation based on user's choice
                switch (operation) {
                    case '+':
                        cout << "Result: " << (x + y) << endl;
                        break;
                    case '-':
                        cout << "Result: " << (x - y) << endl;
                        break;
                    case '*':
                        cout << "Result: " << (x * y) << endl;
                        break;
                    case '/':
                        if (y != 0)
                            cout << "Result: " << (x / y) << endl;
                        else
                            cout << "Error! Division by zero.\n";
                        break;
                    default:
                        cout << "Invalid operation!\n";
                }
                break;
            }
            case '2': { // Scientific Calculator
                // Loop to display scientific calculator menu
                do {
                    // Display scientific calculator menu
                    cout << "Scientific Calculator\n";
                    cout << "1. Sine\n";
                    cout << "2. Cosine\n";
                    cout << "3. Tangent\n";
                    cout << "4. Hyperbolic Sine\n";
                    cout << "5. Hyperbolic Cosine\n";
                    cout << "6. Hyperbolic Tangent\n";
                    cout << "7. Logarithm (base e)\n";
                    cout << "8. Exponential\n";
                    cout << "9. Factorial\n";
                    cout << "10. Power\n";
                    cout << "11. Square Root\n";
                    cout << "12. N-th Root\n";
                    cout << "13. Switch Mode (Degrees/Radians)\n";
                    cout << "14. Exit\n";
                    cout << "Enter your choice: ";
                    cin >> choice;

                    // Switch case to handle scientific calculator operations
                    switch (choice) {
                        case '1':
                            cout << "Enter angle: ";
                            cin >> x;
                            cout << "Result: " << (radiansMode ? sin(x) : sin(x * M_PI / 180.0)) << endl;
                            break;
                        case '2':
                            cout << "Enter angle: ";
                            cin >> x;
                            cout << "Result: " << (radiansMode ? cos(x) : cos(x * M_PI / 180.0)) << endl;
                            break;
                        case '3':
                            cout << "Enter angle: ";
                            cin >> x;
                            cout << "Result: " << (radiansMode ? tan(x) : tan(x * M_PI / 180.0)) << endl;
                            break;
                        case '4':
                            cout << "Enter angle: ";
                            cin >> x;
                            cout << "Result: " << sinh(x) << endl;
                            break;
                        case '5':
                            cout << "Enter angle: ";
                            cin >> x;
                            cout << "Result: " << cosh(x) << endl;
                            break;
                        case '6':
                            cout << "Enter angle: ";
                            cin >> x;
                            cout << "Result: " << tanh(x) << endl;
                            break;
                        case '7':
                            cout << "Enter number: ";
                            cin >> x;
                            if (x > 0)
                                cout << "Result: " << log(x) << endl;
                            else
                                cout << "Error! Input must be greater than 0.\n";
                            break;
                        case '8':
                            cout << "Enter number: ";
                            cin >> x;
                            cout << "Result: " << exp(x) << endl;
                            break;
                        case '9':
                            cout << "Enter a number: ";
                            cin >> x;
                            if (x >= 0 && x == (int)x)
                                cout << "Result: " << factorial(x) << endl;
                            else
                                cout << "Error! Factorial is not defined for negative numbers or non-integer numbers.\n";
                            break;
                        case '10':
                            cout << "Enter base and exponent: ";
                            cin >> x >> y;
                            cout << "Result: " << pow(x, y) << endl;
                            break;
                        case '11':
                            cout << "Enter number: ";
                            cin >> x;
                            if (x >= 0)
                                cout << "Result: " << sqrt(x) << endl;
                            else
                                cout << "Error! Cannot take square root of a negative number.\n";
                            break;
                        case '12':
                            cout << "Enter number and root index: ";
                            cin >> x >> y;
                            if (x >= 0)
                                cout << "Result: " << pow(x, 1.0/y) << endl;
                            else
                                cout << "Error! Cannot take root of a negative number.\n";
                            break;
                        case '13':
                            radiansMode = !radiansMode; // Switch between degrees and radians mode
                            cout << "Switched to " << (radiansMode ? "Radians" : "Degrees") << " mode.\n";
                            break;
                        case '14':
                            cout << "Exiting the calculator.\n";
                            break;
                        default:
                            cout << "Invalid choice!\n";
                    }
                } while (choice != '14'); // Loop until user chooses to exit scientific calculator
                break;
            }
            case '3':
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != '3'); // Loop until user chooses to exit the program

    return 0;
}
