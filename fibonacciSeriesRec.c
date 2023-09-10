#include<stdio.h>
void fibo(int n);
void fibo(int n){
    static int a=0,b=1,sum;//static variables preserve their values
    if(n>0){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
        fibo(n-1);
    }
}
int main() {
    int n;
    printf("Enter the number of terms of fibonacci series : ");
    scanf("%d",&n);
    if(n==1)
    printf("0");
    else if(n==2)
    printf("0 1");
    else{
        printf("0 1 ");
        fibo(n-2);
    }

    return 0;
}