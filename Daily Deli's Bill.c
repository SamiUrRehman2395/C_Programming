#include <stdio.h>

int main()
{
   int items[3];

   printf("\t\t      DAILY DELI CO.\n");

   printf("---------------------------------------------------------------");

   printf("\nEnter the price of Daily Deli's Sunny Rocket Beef Burger = ");
   scanf("%d", &items[0]);

   printf("\nEnter the price of extra beef patty                      = ");
   scanf("%d", &items[1]);

   printf("\nEnter the price of Meal (Drink+Fries)                    = ");
   scanf("%d", &items[2]);

    printf("---------------------------------------------------------------");

    printf("\nSunny Rocket       = %d\n\nExtra Patty        = %d\n\nMeal(Drink+Fries)  = %d ", items[0], items[1], items[2]);

    float gst;
    printf("\n\nGST                = %f\n", items[0]*0.16+items[1]*0.16+items[2]*0.16);

    printf("---------------------------------------------------------------");

    float Total_Bill;
    printf("\nTotal Bill         = %f\n", items[0]+(items[0]*0.16)+items[1]+(items[1]*0.16)+items[2]+(items[2]*0.16));

    printf("---------------------------------------------------------------\n");

    printf("\t\t      Thanks for coming\n");

    return 0;
}

