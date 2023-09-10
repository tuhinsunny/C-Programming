#include<stdio.h>
 
int main() {
    printf("enter the Marks : ");
    int marks;
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 10 :
        printf("O");
        break;
        case 9:
        printf("O");
        break;
        case 8:
        printf("E");
        break;
        case 7:
        printf("A");
        break;
        case 6:
        printf("B");
        break;
        case 5:
        printf("C");
        break;
        case 4:
        printf("D");
        break;
        default:
        printf("F");
        break;
    }
    return 0;
}