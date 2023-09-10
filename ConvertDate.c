#include<stdio.h>
 
int main() {
    printf("Enter the Number of Days : ");
    int days;
    scanf("%d",&days);
    printf("%d months and %d days",days/30,days%30);
    return 0;
}