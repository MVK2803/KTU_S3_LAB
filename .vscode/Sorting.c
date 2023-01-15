#include<stdio.h>
int bc[10]={1,2,3,4,5,6,7,8,9,10};
int wc[10]={1,2,0,3,-1,7,8,0,1,2};

void swap(int A[] ,int a,int b)
{
    int t= A[a];
    A[a]=A[b];
    A[b]=t;

}
void bubble_sort(int A[])
{
    int l=10;
    for(int i=0;i<l;++i)
    {
        for (int j=0;j<l-i-1;++j)
        {
            if (A[j]>A[j+1])
            {
                swap(A,j,j+1);
            }
        }
        
    }
}
void selection_sort(int A[])
{
    for(int i=0;i<9;++i)
    {   int min=i;
        for(int j=i+1;j<10;++j)
        {
            if (A[j]<A[min])
            {
                min=j;
            }
        }
        swap(A,min,i);
    }
}
void insertion_sort(int A[])
{
    for(int i=1;i<10;i++)
    {
        int key=A[i];
        int j;
        for(j=i-1;j>=0 && A[j]>key;--j)
        {
            A[j+1]=A[j];
        }
        A[j+1]=key;
    }
}
void quick_sort(int A[],int lb,int ub)

{
    if (lb<ub)
    {
        int i=lb;
        int j=ub;
        int pivot=lb;
        printf("%d %d %d",i,j,pivot);
        while(i<j)
        {   //printf("true");
            while(A[i]<=A[pivot])
                {
                    i++;
                }
            while (A[j]>A[pivot])
                {
                    j--;
                }
            if (i<j)
                {
                    swap(A,i,j);
                }
            
            
        }
        if(i>j)
        {
            swap(A,pivot,j);
            quick_sort(A,lb,j-1);
            quick_sort(A,j+1,ub);
        }

    }    
}
void merge_array(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int b[100];
    
    int k=lb;
    while(i<=mid&&j<=ub)
    {
        if (a[i]>=a[j])
        {
            b[k]=a[j];k++;j++;
        }
        else if (a[i]<=a[j])
        {
            b[k]=a[i];k++;i++;
        }
        else
        {
            
            b[k]=a[j];k++;j++;i++;
        }
    }
    while(i<=mid){b[k]=a[i];k++;i++;}
    while(j<=ub){b[k]=a[j];k++;j++;}
    for (int i = lb; i <= ub; i++)
    {
        a[i] =b[i];
    }
    
}
void merge_sort(int a[],int lb,int ub)
{
    if (lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge_array(a,lb,mid,ub);
    }
}

void main()
{
    merge_sort(wc,0,9);
    for(int i=0;i<10;++i)
    {
        printf("%d ",wc[i]);
    }
}