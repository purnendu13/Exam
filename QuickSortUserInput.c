#include<stdio.h>
void main(){
int i, n, arr[25];
   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);
   printf("Enter %d elements of the array: ", n);
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   printf("before sortig the array is:-\n");
   printArray(arr,n);
   Quicksort(arr,0,n-1);
//print sorted array
printf("After sorting the array is :-\n");
printArray(arr,n);
}
void printArray(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
        printf("\n");
    }
void Quicksort(int arr[],int low,int high){
    if(low<high){
        int pid=partition(arr,low,high);
        Quicksort(arr,low,pid-1);
        Quicksort(arr,pid+1,high);
    }
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j = low; j < high; j++)
    {
        if(arr[j]<pivot){
            i++;
            // swap
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    //to swap pivot element into its appropiate place
    i++;
    int temp=arr[i];
    arr[i]=pivot;
    arr[high]=temp;
    return i;
}