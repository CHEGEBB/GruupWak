#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char num_str[100];
    float num;
    int sum = 0;
    int decimal_point_count = 0;

    printf("Welcome to number summation\n");
    printf("Please enter any number: ");
    scanf("%s", num_str);

    // Check if the input is a valid float number
    int is_valid = 1;
    for (int i = 0; i < strlen(num_str); i++) {
        if (!isdigit(num_str[i])) {
            if (num_str[i] == '.') {
                decimal_point_count++;
                if (decimal_point_count > 1) {
                    is_valid = 0;
                    break;
                }
            } else {
                is_valid = 0;
                break;
            }
        }
    }

    if (is_valid && strlen(num_str) > 0) {
        num = atof(num_str);
        if (num > 0) {
            printf("Digits: ");
            for (int i = 0; i < strlen(num_str); i++) {
                if (num_str[i] != '.') {
                    int digit = num_str[i] - '0'; // Convert char to int
                    printf("%d ", digit);
                    sum += digit;
                }
            }
            printf("\nSum: %d\n", sum);
        } else {
            printf("Sorry, but you can only enter numbers greater than 0.\n");
        }
    } else {
        printf("Please enter a valid number.\n");
    }

    return 0;
}
// I have updated the code so that it can be able to handle decimal entries,
//The 'decimal_point_count' keeps count of decimal position
//The loop checks for the input value and accepts only one decimal point
