#include<stdio.h>
 
int hcf(int n1,int n2){
    if(n1==n2)
    return n1;
    if(n1>n2)
    hcf(n1-n2,n2);
    else
    hcf(n1,n2-n1);
}

int main() {
    int n1,n2;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("HCF of %d and %d is %d",n1,n2,hcf(n1,n2));

    return 0;
}