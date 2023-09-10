#include<stdio.h>
 
int main() {
    int i,j,a[4][4],arr[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            arr[j][i]=a[i][j];
        }
    }
    printf("Transpose of a matrix : \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}