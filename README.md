# Marne C MathLib

Marne C MathLib is a simple mathematical library implemented in C. This library provides basic arithmetic operations and functions, including:

- **Addition** (**sum**): Adds two floating-point numbers.

- **Subtraction** (**minus**): Subtracts one floating-point number from another.

- **Multiplication** (**times**): Multiplies two floating-point numbers using iterative addition.

- **Division** (**division**): Divides one floating-point number by another using iterative subtraction.

- **Exponentiation** (**poww**): Computes de power of a number, both for positive and negative exponents.

- **Square Root** (**sqroot**): Calculates the square root of a number using the iterative method of averaging.

- **Fibonacci** (**fibo**): Calculates a Fibonacii from two numbers, and inserts all numbers into an array with specified size.

# Examples

```c
#include <stdio.h>
#include "mathematics.h"

int main() {
    // Addition:
    float addition = sum(7, 10);
    printf("%f\n", addition);

    // Subtraction:
    float subtraction = minus(49, 7);
    printf("%f\n", subtraction);

    // Multiplication:
    float multiply = times(9, 5);
    printf("%f\n", multiply);

    // Division:
    float divide = division(144, 12);
    printf("%f\n", divide);

    // Exponentiation:
    float exponentiate = poww(7, 2);
    printf("%f\n", exponentiate);

    // Square Root:
    float root = sqroot(81);
    printf("%f\n", root);

    // Fibonacci:
    float array[100];
    float a = 0;
    float b = 1;
    float size = 100;
    fibo(a, b, array, size);
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
```

# Compilation

After creating the coding using the library, make sure that the header file is in the same directory as your project.

#### Compile:

```
gcc your_project.c -o project_name mathematics.h
```

Make sure to put "mathematics.h" at the end of the command, to compile and include the header file functions.
