#include<stdio.h>
 
int main() {
    printf("Enter n : ");
    int n, pro=1;
    scanf("%d",&n);
    if(n==0)
        printf("%d",1);
        else{
            for(int i=1;i<=n;i++)
            pro=pro*i;
            printf("%d",pro);
        }

    return 0;
}