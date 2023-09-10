#include<stdio.h>
 
int main() {
    int arr[11];
    int i ,pos, element;
    for(i=0;i<=9;i++)
    scanf("%d",&arr[i]);
    printf("\n");

    printf("Enter the element and the position \n");
    scanf("%d",&element);
    scanf("%d",&pos);
    for(i=9;i>=pos;i--)
    arr[i+1]=arr[i];
    arr[pos] = element;

    for(i=0;i<11;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}