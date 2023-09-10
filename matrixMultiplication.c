#include<stdio.h>
 
int main() {
    int r1,c1,r2,c2,i,j,k;
    printf("Enter the number of rows and columns for 1st matrix : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns for 2nd matrix : ");
    scanf("%d %d",&r2,&c2);
    int arr1[r1][c1],arr2[r2][c2],ans[r1][c2];
    for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                ans[i][j]=0;
    if(c1==r2){
        printf("Enter the elements of the 1st matrix : \n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&arr1[i][j]);
        printf("Enter the elements of the 2nd matrix : \n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&arr2[i][j]);
        printf("Matrix after Multiplication : \n");
        for(i=0;i<r1;i++)
            for(j=0;j<c2;j++)
                for(k=0;k<r2;k++)
                    ans[i][j]+=arr1[i][k]*arr2[k][j];
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d\t",ans[i][j]);
            }
            printf("\n");
        }
        }
    else
    printf("Multiplication not possible !");

    return 0;
}