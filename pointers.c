#include<stdio.h>
 
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d",_age);
    printf("\n%p" , ptr);
    printf("\n%u" , ptr);
    return 0;
}