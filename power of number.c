#include <stdio.h>

// Function to calculate power
double power(double base, int exponent) {
    double result = 1;
    int i;

    // For positive exponent
    if (exponent >= 0) {
        for (i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    // For negative exponent
    else {
        exponent = -exponent;
        for (i = 0; i < exponent; i++) {
            result *= base;
        }
        result = 1 / result;
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate power using the function
    result = power(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}
