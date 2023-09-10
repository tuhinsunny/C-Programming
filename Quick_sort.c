#include <stdio.h>
void printArray(int A[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
void swap(int A[],int i, int j){
    int temp;
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}
int partition(int A[], int low, int high){
    int pivot = A[low],i = low + 1,j = high,temp;
    do{
        while (A[i] <= pivot)
        i++;
        while (A[j] > pivot)
        j--;
        if (i < j)
        swap(A,i,j);
    } while (i < j);
    swap(A,low,j);
    return j;
}
void quicksort(int A[], int low, int high){
    int partitionIndex; // Index of pivot after partition
    if (low < high){
        partitionIndex = partition(A, low, high);
        quicksort(A, low, partitionIndex - 1);  // sort left subarray
        quicksort(A, partitionIndex + 1, high); // sort right subarray
    }
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the array elements : \n");
    int arr[n];
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    quicksort(arr, 0, n-1);
    printArray(arr , n);
    return 0;
}