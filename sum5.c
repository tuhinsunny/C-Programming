#include<stdio.h>
 
int main() {
    int n,sum=0,c=0;
    printf("Enter a 5 digit number : ");
    scanf("%d",&n);
    while(n!=0){
        sum+=(n%10);
        n/=10;
        c++;
    }
    if(c==5)
    printf("Sum is %d",sum);
    else
    printf("Entered number is not a 5 digit number");

    return 0;
}