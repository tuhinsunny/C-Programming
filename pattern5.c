/*
a
bb
ccc
dddd
*/
#include<stdio.h>
 
int main() {
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c",(char)(i+96));
        }
        printf("\n");
    }
    return 0;
}