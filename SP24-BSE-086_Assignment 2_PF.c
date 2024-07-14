//Name : Muhammad Sami-ur-Rehman
//Roll No : SP24-BSE-086
//Assignment No: 02 (Programming Fundamentals)

//PROBLEM _ 01


/*#include <stdio.h>

int nthTerm(int n) {
    int term = 0;
    for (int i = 0; i < n; i++) {
        term = term * 10 + 9;
    }
    return term;
}

int main() {
    int n, sum = 0;


    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (int i = 1; i <= n; i++) {
        int term = nthTerm(i);
        printf("%d ", term);
        sum += term;
    }


    printf("\nThe sum of the series = %d\n", sum);

    return 0;
}*/

//PROBLEM_2

#include <stdio.h>


void printTopBottom(int length) {
    for (int i = 0; i < length; i++) {
        printf("*");
    }
    printf("\n");
}


void printMiddle(int length) {
    printf("*");
    for (int i = 0; i < length - 2; i++) {
        printf(" ");
    }
    printf("*\n");
}


void printSquare(int size) {
    printTopBottom(size);
    for (int i = 0; i < size - 2; i++) {
        printMiddle(size);
    }
    printTopBottom(size);
}

int main() {
    int size;


    printf("Enter the size of the square: ");
    scanf("%d", &size);


    printf("Square with size %d:\n", size);
    printSquare(size);

}


