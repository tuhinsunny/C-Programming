#include<stdio.h>
 
int main() {
    int aadhar[5];
    //input the values
    int *ptr = &aadhar[0];
    //input
    for(int i = 0; i < 5; i++) {
        printf("%d index : ", i);
        scanf("%d" ,(ptr+i));// we can replace ptr+i with &aadhar[i]
    }
    //output
    for(int i = 0; i < 5 ; i++)
    printf("%d index = %d\n" , i , *(ptr+i));//We can replace *(ptr+i) with aadhar[i]
    return 0;
}