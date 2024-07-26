#include <stdio.h>
#include <math.h>

int main() {
    int number, lower_sqrt, upper_sqrt, lower_square, upper_square, closest_square;
    
    // Prompt the user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("The number should be positive.\n");
        return 1;
    }

    // Calculate the lower and upper square roots
    lower_sqrt = (int)sqrt(number);
    upper_sqrt = lower_sqrt + 1;

    // Calculate the corresponding perfect squares
    lower_square = lower_sqrt * lower_sqrt;
    upper_square = upper_sqrt * upper_sqrt;

    // Determine the closest perfect square
    if ((number - lower_square) <= (upper_square - number)) {
        closest_square = lower_square;
    } else {
        closest_square = upper_square;
    }

    // Report the result
    printf("The closest integer having a whole number square root is: %d\n", closest_square);

    return 0;
}
/*
Explanantion:

1.Input: The program prompts the user to enter a positive integer.
2.Validation: The program checks if the entered number is positive. If not, it displays an error message.
3.Square Roots Calculation: It calculates the lower and upper integer square roots surrounding the given number.
4.Perfect Squares Calculation: It calculates the perfect squares of the lower and upper square roots.
5.Closest Perfect Square Determination: The program compares the difference between the given number and the two perfect squares to find which one is closer.
6.Output: It prints the closest perfect square.

How to Compile And Run We Use the Following steps:
Save the program to a file, e.g., closest_square.c.
Open a terminal and navigate to the directory containing the file.

Compile the program using gcc:
copy paste this To the Terminal:
gcc -o closest_square closest_square.c -lm

run the Program
copy paste this to the Terminal to run:
./closest_square

*/