#include<stdio.h>
#include<string.h>
int main() {
    char ch[100];
    int i,c=0;
    printf("Enter a string : ");
    gets(ch);
    int s=0,e=strlen(ch)-1;
    char t;
    while(s<e){
        t=ch[s];
        ch[s]=ch[e];
        ch[e]=t;
        s++;
        e--;
    }
    printf("Reverse String : %s",ch);
    return 0;
}
