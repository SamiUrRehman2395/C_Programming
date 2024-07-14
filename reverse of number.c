#include<stdio.h>
void main()
{
    int number,first_digit,second_digit;
    printf("enter a two digit number");
    scanf("%d",&number);
    first_digit=number/10;
    second_digit=number%10;
    printf("number in reverse order%d%d",second_digit,first_digit);
}
