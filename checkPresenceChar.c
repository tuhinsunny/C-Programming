#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    char ch;
    int k=0;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character to be searched : ");
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            k=1;
            break;
        }
    }
    if(k==1){
        printf("Yes");
    }
    else
    printf("No");
    return 0;
}