#include<stdio.h>
 //Swapping by call by value
// int main() {
//     int a= 5, b= 1, c;
//     c=a;
//     a=b;
//     b=c;
//     printf("a = %d and b = %d\n",a,b);
//     return 0;
// }

//Swapping by call by reference
void swap(int *a, int*b);
int main() {
    int a= 5 , b= 6;
    swap(&a,&b);
    return 0;
}
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d and b = %d\n",*a,*b);
}