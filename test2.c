#include<stdio.h>
int main() {
    int arr[5][2]={1,2,3,4,5,6,7,8,9,10};
    printf("%u\n",arr[0]);
    printf("%u\n",*arr);
    printf("%u\n",**arr);
    printf("%u\n",*arr+1);
    printf("%u\n",*(*arr+1));
    return 0;
}