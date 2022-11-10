#include<stdio.h>
 
int factorial(int count);
int main() {
    printf("%d",factorial(6));
    return 0;
}
int factorial(int count) {
    if(count == 1)
    return 1;
    return count*factorial(count-1);
}