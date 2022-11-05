/*
Find the salted form of a password entered by user
if the salt is "123" & added at the end.
*/
#include<stdio.h>
#include<string.h>

int main() {
    char salt[]="123";
    char pass[100];
    printf("Enter the password : ");
    scanf("%s",&pass);
    strcat(pass,salt);
    puts(pass);

    return 0;
}