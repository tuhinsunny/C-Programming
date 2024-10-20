#include<stdio.h>
 
int main() {
    int arr[11];
    int i, pos;

    printf("enter the elements of the array:");
    for(i=0; i<=9; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("before insertion: \n");
    for(i=0; i<=9; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("enter the index position to be deleted: ");
    scanf("%d", &pos);

   
    for(i=pos; i<=8; i++){
        arr[i] = arr[i+1];
    }

   
    printf("after deletion:");
    for(i=0; i<9; i++){
        printf("%d ",arr[i]);
    }



    return 0;
}
