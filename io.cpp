#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: ";

    int input{0};         // we need a variable to store the user input
    std::cin >> input;    // getting the input from user

    return input;
}

void writeAnswer(int answer)
{
    std::cout << "The output is: " << answer << '\n';
}
