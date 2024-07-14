#include<stdio.h>
int main(){
 for (int i; i<=6; i++){
    for (int space=6-i; space>0;space--){
        printf(" ");
    }
    for (int j=1; j<=i; j++){
        printf("* ");}
        printf("\n");


 }



for(int i=5;i>=1;i--){
        for(int space=6-i;space>0;space--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");

        }


        printf("\n");
    }
}

