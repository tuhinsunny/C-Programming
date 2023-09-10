#include<stdio.h>
#include<string.h>
int main() {
    char a[1000];
    printf("Enter a String : ");
    gets(a);
    int flag=0;
    int start=0, end=strlen(a)-1;
    while(start<=end){
        if(a[start]!=a[end]){
            flag=1;
            break;
        }
        start++;
        end--;
    }
    if(flag==1)
    printf("Not Palindrome");
    else
    printf("Palindrome");

    return 0;
}