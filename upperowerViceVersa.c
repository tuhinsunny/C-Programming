#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char str[100];
    printf("Enter a string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++) {
        if(isupper(str[i]))
        str[i]=tolower(str[i]);
        else
        str[i]=toupper(str[i]);
    }
    puts(str);
    return 0;
}