#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum, sub, mul, div;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    sum = a + b + c;
    sub = a - b - c;
    mul = a * b * c;

    if (b != 0 && c != 0) {
        div = a / b / c;
        cout << "Division: " << div << endl;
    } else {
        cout << "Division: Error (division by zero)" << endl;
    }

    cout << "Summation: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;

    return 0;
}
