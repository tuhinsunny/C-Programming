#include<stdio.h>
 
int main() {
    int n,i,j,temp;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    //Performing the Insertion Sort
    for(i=1;i<n;i++){
        temp = arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else
            break;
        }
        arr[j+1]=temp;
    }
    //printing the array
    for(i = 0; i < n; i++)
    printf("%d ",arr[i]);

    return 0;
}