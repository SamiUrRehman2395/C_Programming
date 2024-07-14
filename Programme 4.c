#include <stdio.h>
# include <stdlib.h>
int main()
{
int number;
// Input – Take Input (an Integer Number) as Input from User
printf(“7:“);
scanf(“%d”, &number);
if(number % 2 == 0)
printf(“%d is an Even number”, number);
else(number % 2 == 1)
printf(“%d is an Odd number”, number);
}
