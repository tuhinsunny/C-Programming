//Swap the values of two variables using function. 
//(Assume that the two variables are defined as global variables)
#include<stdio.h>
int m,n;

void swap();
void swap(){
    int t;
    t=m;
    m=n;
    n=t;
    printf("After Swap : m = %d and n = %d \n",m,n);
}

int main() {
    printf("Enter 2 numbers : ");
    scanf("%d %d",&m,&n);
    printf("Before Swap : m = %d and n = %d \n",m,n);
    swap();
    return 0;
}