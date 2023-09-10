#include<stdio.h>

int ackermanFunc(int m,int n);
int ackermanFunc(int m,int n){
    if(m==0)
    return n+1;
    else if(m>0 && n==0)
    return ackermanFunc(m-1,1);
    else if(m>0 && n>0)\
    return ackermanFunc(m-1,ackermanFunc(m,n-1));
}

int main() {
    int m,n;
    printf("Enter two numbers : ");
    scanf("%d %d",&m,&n);
    printf("Value of Ackerman Function is %d",ackermanFunc(m,n));
    return 0;
}