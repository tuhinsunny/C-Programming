#include<stdio.h>

int sum(int num);
int main() {
    printf("Enter a Number : ");
    int num;
    scanf("%d",&num);
    printf("Sum of the digits of %d is %d\n",num,sum(num));
    return 0;
}
int sum(int num) {
    int s = 0;
    while(num>0) {
        s+=num%10;
        num/=10;
    }
    return s;
}