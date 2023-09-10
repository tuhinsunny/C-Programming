#include<stdio.h>
void printArray(int A[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void merge(int A[],int mid, int low, int high){//Merging in a single array
    int i,j,k,B[high+1];
    i=low,j=mid+1,k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while(i<=mid){
        B[k++]=A[i++];
    }
    while(j<=high){
        B[k++]=A[j++];
    }
    for(i=low;i<=high;i++){
        A[i]=B[i];
    }
} 
void mergesort(int A[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(A, low, mid);
        mergesort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the array elements : \n");
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, n-1);
    printArray(arr , n);
    return 0;
}