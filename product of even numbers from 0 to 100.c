#include <stdio.h>

int main() {
    double product = 1.0;
    for (int i = 2; i <= 100; i = i+2) {
        product = product*i;
    }
    printf("Product of even numbers from 1 to 100: %.2e\n", product);
}
