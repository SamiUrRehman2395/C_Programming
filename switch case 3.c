#include<stdio.h>
void main()
{
    int counter;
    printf("Enter number:");
    scanf("%d",&counter);
    while(counter>5)
        {
        printf("Limit is 5\n");
        break;
    }
    while (counter<=5)
    {
      printf("%d  ",counter);
      counter=counter++;
      counter=++counter;
      printf("%d ",counter);
    }
}
