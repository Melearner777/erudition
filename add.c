#include <stdio.h>

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers separated by a space
    printf("Enter two numbers separated by a space: ");

    // Read both numbers in one line
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    int sum = num1 + num2;

    // Print the sum
    printf("Sum: %d\n", sum);

    return 0;
}

