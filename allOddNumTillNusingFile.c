#include<stdio.h>
 
int main() {
    FILE *fptr;
    fptr = fopen("OddNumbersTillN.txt","w");

    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i+=2) {
        fprintf(fptr,"%d\n" , i);
    }
    fclose(fptr);
    return 0;
}