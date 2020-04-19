#include <iostream>
#include "calc.h"

int main()
{
    std::printf("%d + %d = %d\n", 1, 2, plus(1, 2));
    std::printf("%d - %d = %d\n", 3, 5, minus(3, 5));
    return 0;
}