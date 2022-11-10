#include<stdio.h>
#include<string.h>

typedef struct vector {
    int x;
    int y;
}vec;
void calSum(vec v1 , vec v2 , vec sum);

int main() {
    vec v1 = {5,10};
    vec v2 = {3,7};
    vec sum = {0};  
    calSum(v1,v2,sum);
    return 0;
}
void calSum(vec v1 , vec v2 , vec sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is : %d\n",sum.x);
    printf("Sum of y is : %d\n",sum.y);
}