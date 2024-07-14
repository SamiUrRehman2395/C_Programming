#include<stdio.h>
int main(){
int arr[3][3] = {1,2,3,4,5,6,7,8,9}, i, j;
 for( j=0;j<3;j++) {
 arr[j][2] += arr[j][0];
 }
 i=1;
 j=1;
 printf("%d%d%d", arr[i++][j],arr[i][j++],arr[i][j]);
return 0;}
