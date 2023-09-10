#include<stdio.h>
 
int main() {
    int a,b;
    printf("Enter the 2 numbers : \n");
    scanf("%d %d",&a,&b);
    while(a!=b){
        if(a>b)
        a-=b;
        else 
        b-=a;
    }
    printf("HCF is %d ",a);

    return 0;
}