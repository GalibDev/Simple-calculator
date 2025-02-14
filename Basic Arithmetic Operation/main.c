
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, subtract, multiply;
    float divide;

    // Input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Division not possible (cannot divide by zero)!\n");
        return 0;
    }

    // Calculations
    sum = num1 + num2;
    subtract = num1 - num2;
    multiply = num1 * num2;
    divide = (float) num1 / num2;

    // Displaying the results
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtract);
    printf("Multiplication: %d\n", multiply);
    printf("Division: %.2f\n", divide);

    return 0;
}
