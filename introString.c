#include<stdio.h>

void printString(char arr[]);
int main() {
    char firstName[]="TUHIN";
    char lastName[]= "CHANDRA";
    
    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[]) {
    for(int i = 0 ; arr[i] != '\0'; i++) {//important
        printf("%c",arr[i]);
    }
    printf("\n");
}