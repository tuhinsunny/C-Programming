#include<stdio.h>
#include<string.h>
int main() {
    char ch[1000],chr[1000];
    printf("Enter the String 1 : ");
    gets(ch);
    printf("Enter the String 2 : ");
    gets(chr);
    int k=0;
    for(int i=strlen(ch);i<strlen(ch)+strlen(chr);i++){
        ch[i]=chr[k];
        k++;
    }
    chr[k]='\0';
    printf("%s",ch);
    return 0;
}