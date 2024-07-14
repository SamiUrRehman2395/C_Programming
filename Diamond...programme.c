//NAME: Muhammad Sami ur Rehman___Roll No: 086

//shape 01___(diamond)

/*# include<stdio.h>
int main (){
    //pyramid
    for(int i=1;i<=6;i++){
        for (int space=6-i;space>0;space--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
             printf("* "); }
            printf("\n");}
            //reverse pyramid
     for(int i=5;i>=1;i--){
        for(int space=6-i;space>0;space--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");

        }


        printf("\n");
    }
}*/

//SHAPE 05
/*#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

//SHAPE 06
/*#include <stdio.h>

int main() {
    int rows, i, j, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }
        // Print stars
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/
 //Shape 02

 /*#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Print the top row of asterisks
    for (j = 1; j <= cols; j++) {
        printf("*");
    }
    printf("\n");

    // Print the middle rows with spaces inside
    for (i = 2; i <= rows - 1; i++) {
        printf("*");
        for (j = 2; j <= cols - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Print the bottom row of asterisks
    for (j = 1; j <= cols; j++) {
        printf("*");
    }
    printf("\n");

    return 0;
}*/

//Shape 03
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= rows - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

