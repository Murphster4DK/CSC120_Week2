#include <iostream>

int main() {
    // declareing and initializing variables
    int number1{0}; //first integer to add (initialized to 0)
    int number2{0}; //second integer to add (initialized to 0)
    int sum{0}; // sum of the number1 and number2 (initialized to 0)

    std::cout << "Enter first integer: "; //prompt user for data
    std::cin >> number1; //read fist integer form user into number1

    std::cout << "Enter second integer: "; //prompt user for data
    std::cin >> number2; //read second integer from user into number2

    sum = number1 + number2; //add the numbers; store results in

    std::cout << "Sum is " << sum <<std::endl; //display sum :
    return 0;
}