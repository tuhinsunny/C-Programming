#include<stdio.h>
 
int main() {
    printf("Enter 3 Numbers : \n");
    int a,b,c,l;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b && b>c)||(c>b && b>a))
    l=b;
    else if((b>a && a> c)||(c>a && a>b))
    l=a;
    else
    l=c;
    printf("%d is the 2nd largest element.",l);

    return 0;
}