#include <iostream>
using namespace std;

class Calculator {
    private:
        int num1, num2;

    public:
        Calculator(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        int add() {
            return num1 + num2;
        }

        int subtract() {
            return num1 - num2;
        }

        int multiply() {
            return num1 * num2;
        }

        int divide() {
            if (num2 != 0) {
                return num1 / num2;
            }
            else {
                cout << "Error: Divide by zero" << endl;
                return 0;
            }
        }
};

int main() {
    int n1, n2;
    char op;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    Calculator calc(n1, n2);

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}
