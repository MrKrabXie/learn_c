#include <iostream>

// main.c
#include "addition.h"

int main() {
    int num1 = 5;
    int num2 = 7;
    int result = add(num1, num2);

    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}
