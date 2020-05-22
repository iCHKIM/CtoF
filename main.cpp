#include <iostream>

int main() {

    double tempc;
    double tempf;
    //Diaglogue for user input
    std::cout << "Enter the temperature in Celcius:\n";
    //Input from user
    std::cin >> tempc;

    //Celcius to Fahrenheit formula C * 9/5 + 32
    tempf = (tempc * 9/5) + 32;
}
