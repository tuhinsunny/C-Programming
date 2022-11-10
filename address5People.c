#include<stdio.h>
#include<string.h>

typedef struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;

int main() {
    add s[5];
    printf("Enter the House number , Block , City , State of 5 people :\n");
    for(int i=0;i<5;i++) {
        scanf("%d",&s[i].houseNo);
        scanf("%d",&s[i].block);
        scanf("%s",s[i].city);
        scanf("%s",s[i].state);
    }
    printf("Addresses are : \n");
    for(int i=0;i<5;i++) {
        printf("%d , %d , %s , %s\n",s[i].houseNo,s[i].block,s[i].city,s[i].state);
    }
    return 0;
}