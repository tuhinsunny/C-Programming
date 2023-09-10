#include<stdio.h>
#include<string.h>

int main() {
    char ch[1000];
    printf("Enter the String : ");
    gets(ch);
    char t;
    int start=0,end=strlen(ch)-1;
    while(start<=end){
        t=ch[start];
        ch[start]=ch[end];
        ch[end]=t;
        start++;
        end--;
    }
    printf("Reversed String : %s",ch);
        return 0;
}