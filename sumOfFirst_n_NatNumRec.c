#include<stdio.h>

int sum(int count);
int main() {
    printf("%d",sum(10));
    return 0;
}
int sum(int count) {
    if(count==0)
    return 0;
    return(count+ sum(count-1));
}