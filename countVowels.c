#include<stdio.h>
#include<string.h> 

int count(char st[]);
int main() {
    printf("Enter a string : ");
    char st[100];
    gets(st);
    printf("%d",count(st));
    return 0;
}
int count(char st[]) {
    int c=0;
    for(int i=0;st[i]!='\0';i++) {
        if(st[i]=='A'|| st[i]=='E' || st[i]=='I'|| st[i]=='O'|| st[i]=='U')
        c++;
    }

    return c;
}