#include <iostream>
#include <cmath>   // for sqrt
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n===== SIMPLE CALCULATOR =====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Square Root\n";
        cout << "6. Factorial (!)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if (choice == 5 || choice == 6) {
            cout << "Enter number: ";
            cin >> num1;
        }

        switch (choice) {
            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero not allowed.\n";
                break;
            case 5:
                if (num1 >= 0)
                    cout << "Result = " << sqrt(num1) << endl;
                else
                    cout << "Negative number ka root nahi nikalta.\n";
                break;
            case 6: {
                int n = (int)num1;
                if (n < 0) {
                    cout << "Negative number ka factorial nahi hota.\n";
                } else {
                    long long fact = 1;
                    for (int i = 1; i <= n; i++) {
                        fact *= i;
                    }
                    cout << "Result = " << fact << endl;
                }
                break;   // ✅ important
            }
            case 7:
                cout << "Thank you for using calculator.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
