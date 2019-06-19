#include "io.h"
#include <iostream>

int main()
{
    int firstNumber{readNumber()};
    int secondNumber{readNumber()};

    int answer{firstNumber + secondNumber};

    writeAnswer(answer);

    return 0;
}
