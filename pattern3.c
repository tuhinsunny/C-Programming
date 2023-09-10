/*
      *
    * * * 
  * * * * * 
* * * * * * *
*/
#include<stdio.h>
 
int main() {
    int i,j;
    for(i=1;i<=4;i++){
        for(j=(4-i)*2;j>=1;j--)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");//1 space after *
        for(j=i-1;j>=1;j--)
        printf("* ");//1 space after *
        printf("\n");
    }
    return 0;
}