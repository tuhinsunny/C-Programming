#include<stdio.h>
 
 void namaste();
 void bonjour();
int main() {
    printf("Enter f for French and i for Indian : ");
    char ch;
    scanf("%c",&ch);
    if(ch=='i')
    namaste();
    else
    bonjour();
    return 0;
}
void namaste() {
    printf("I have changed it\n");
}
void bonjour() {
    printf("Bonjour\n");
}