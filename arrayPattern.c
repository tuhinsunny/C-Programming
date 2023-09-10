#include<stdio.h>
 
int main() {
    int i,j,arr[5];
    for(i=0;i<5;i++)
    arr[i]=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        if(i==j)
        arr[i]=1;
        printf("%d ",arr[j]);
        }
        arr[i]=0;
        printf("\n");
        }
    return 0;
}