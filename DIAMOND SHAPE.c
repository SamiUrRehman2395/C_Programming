#include <stdio.h>

int main() {
    int n = 5; // number of rows
    int i, j, k;

    // upper half
    for (i = 0; i < n / 2 + 1; i++) {
        // print spaces
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        // print stars
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // lower half
    for (i = n / 2 - 1; i >= 0; i--) {
        // print spaces
        for (j = 0; j < n / 2 - i; j++) {
            printf(" ");
        }
        // print stars
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
