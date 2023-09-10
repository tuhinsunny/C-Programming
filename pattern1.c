/*
  1
 232
34543
*/
#include<stdio.h>
 
int main() {
    int i,j,k=1;
    for(i=1;i<=3;i++){
        for(j=2;j>=i;j--)
        printf(" ");
        for(j=i;j<=k;j++)
        printf("%d",j);
        if(i!=1)
        for(j=k-1;j>=i;j--)
        printf("%d",j);
        k+=2;
        printf("\n");
    }

    return 0;
}