#include <stdio.h>

int main() {
    int x;
    int y;
    int output;

    do {
        printf("Enter the first number : ");
        scanf("%d", &x);
        printf("Enter the second number : ");
        scanf("%d", &y);

        output = x - y;

        printf("Output of %d - %d = %d\n", x, y, output);
    }
    while (output >= 10);

    return 0;
}

