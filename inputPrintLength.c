#include<stdio.h>
#include<string.h>

int countLength(char arr[]);
int main() {
    char name[100];
    printf("Enter a a name :");
    fgets(name , 100 , stdin);
    printf("Length is = %d\n",countLength(name));
    return 0;
}
int countLength(char arr[]) {
    int c=0;
    for(int i = 0; arr[i]!='\0' ;i++) {
        c++;
    }
    return c-1;
}