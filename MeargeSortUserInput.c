#include<stdio.h>

int main()
    {
        int a[]={12,3,25,8,32,17,40,42};
        int n= sizeof(a)/sizeof(a[0]);
        printf("before sorting array elments are:- ");
        printArray(a,n);
        mergesort(a,0,n-1);
        printf("after sorting elemts are:-\n");
        printArray(a,n);
    return 0;
    }
    void printArray(int a[],int n)
    {
        for(int i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
    }
    
    void merge(int a[],int beg,int mid,int end)
    {
        int i,j,k;
        int n1=mid-beg+1;
        int n2=end-mid;
        int leftArray[n1],rightArray[n2]; 
        for(int i=0;i<n1;i++)
            leftArray[i]=a[beg+i];
            for(int j=0;j<n2;j++)
            rightArray[j]=a[mid+1+j];
            i=0;
            j=0;
            k=beg;
            while(i<n1 && j<n2)
            {
                if(leftArray[i]<= rightArray[j])
                {
                    a[k]=leftArray[i];
                    i++;
                }
                else {
                    a[k] = rightArray[j];
                    j++;
                 }
                 k++;
            }
            while(i<n1)
            {
                a[k]=leftArray[i];
                i++;
                k++;
            }
            while(j<n2)
            {
                a[k]=rightArray[j];
                j++;
                k++;
            }
  
    }
    void mergesort(int a[],int beg,int end)
    {
        if(beg<end)
        {
            int mid=(beg+end)/2;
            mergesort(a,beg,mid);
            mergesort(a,mid+1,end);
            merge(a,beg,mid,end);
        }
    }