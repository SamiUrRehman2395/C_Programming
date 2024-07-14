#include <stdio.h>

int main()
{
    int i;
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=9;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}
