#include<stdio.h>
 
int main() {
    int n,rev=0,c=0;
    printf("Enter a 5 digit number : ");
    scanf("%d",&n);
    while(n!=0){
        rev=(rev*10)+(n%10);
        n/=10;
        c++;
    }
    if(c==5)
    printf("Reversed Number is %d",rev);
    else
    printf("Entered Number is not a 5 digit number ");

    return 0;
}