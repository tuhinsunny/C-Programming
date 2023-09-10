#include<stdio.h>
#include<string.h>

int main() {
    char a[100],b[100];
    printf("Enter a string : \n");
    gets(a);
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b)==0)
    printf("Palindrome ");
    else
    printf("Not Palindrome");

    return 0;
}