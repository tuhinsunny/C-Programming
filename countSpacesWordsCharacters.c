#include<stdio.h>
#include<string.h>
int main() {
    char ch[1000];
    int c=0;
    printf("Enter the String : ");
    gets(ch);
    int len=strlen(ch);
    for(int i=0;i<len;i++){
        if(ch[i]==' ')
        c++;
    }
    printf("No. of Spaces : %d\n",c);
    printf("No. of Words : %d\n",c+1);
    printf("No. of Characters : %d\n",len);
    return 0;
}