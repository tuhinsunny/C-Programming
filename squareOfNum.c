#include<stdio.h>
#include<math.h>
int main() {
    printf("Enter the number to be squared : ");
    int num;
    scanf("%d",&num);
    printf("Square of %d is %f \n",num,pow(num,2));
    return 0;
}