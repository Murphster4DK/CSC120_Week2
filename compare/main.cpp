#include <iostream>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

// function main begains program execution
int main() {
    int number1{0}; // first integer to compare (initialized to 0)
    int number2{0}; // second integer to compare (initialized to 0)

    cout << "Enter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user

    if (number1 == number2) {
        cout << number1 << "==" << number2 << endl;
    }

    if (number1 != number2) {
        cout << number1 << " !7" = " << number2 << endl;
    }

    if (number1 < number2) {
        cout << number1 << " < " << number2 << endl;
    }

    if (number1 > number2) {
        cout << number1 << " > " << number2 << endl;
    }

    if (number1 <= number2) {
        cout << number1 << " <= " << number2 << endl;
    }

    if (number1 >= number2) {
        cout << number1 << " >= " << number2 << endl;
    } // end function main
    return 0;
}
