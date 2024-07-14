#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");

        char gender;

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

        if (gender == 'M') {
            printf("Move to room-1 for voting.\n");
        }
        else if (gender == 'F') {
            printf("Move to room-2 for voting.\n");
        }
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

