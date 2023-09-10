#include<stdio.h>
 
int main() {
    printf("Enter two numbers : \n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swapping : \n a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping : \n a=%d and b=%d",a,b);

    return 0;
}