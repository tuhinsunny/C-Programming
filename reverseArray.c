#include<stdio.h>
 
void revArr(int arr[],int size);
int main() {
    int arr[]={1,2,3,4,5,6};
    revArr(arr,6);
    for(int i=0;i<6;i++)
    printf("%d\t",arr[i]);
    return 0;
}
void revArr(int arr[] , int size) {
    int temp;
    for(int i=0;i<size/2;i++) {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}