#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string:");
    gets(str);
    int c=0;
    for(int i=0; str[i]!='\0'; i++){
        c+=1;
    }
    printf("the length of the string is %d",c);
    
    return 0;

}
