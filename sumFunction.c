#include<stdio.h>

int sum(int a , int b);
int main() {
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("%d",sum(a,b));
    return 0;
}
int sum(int a, int b) {
    return(a+b);
}