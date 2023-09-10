#include<stdio.h>

int fact(int n);
int fact(int n){
    int f=1,i;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main() {
    float sum=0.0;
    int i,n,x=1;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum-=(1.0/fact(x));
            x+=2;
        }
        else {
            sum+=(1.0/fact(x));
            x+=2;
        }
    }
    printf("Sum is %f ",sum);
    }