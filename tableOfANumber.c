#include<stdio.h>
 
int main() {
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    printf("%d multiplied by %d is %d\n",n,i,n*i);
    return 0;
}