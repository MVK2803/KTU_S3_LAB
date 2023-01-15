#include<stdio.h>
int bc[10]={1,2,3,4,5,6,7,8,9,10};
int wc[8]={-1,15,5,20,1,17,10,30};

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
void max_heapify(int a[],int n,int i)
{
    int largest=i;
    int r=i*2+1;
    int l=i*2;
    //printf("%d%d%d%d ",i,r,l,n);
    if(l<=n && (a[largest]<=a[l]))
    {
        largest=l;
    }
    if(r<=n && (a[largest]<=a[r]))
    {
        largest=r;
    }
    //printf("%d",largest);
    
    if(largest!=i)
    {
        swap(a,i,largest);
        max_heapify(a,n,largest);
    }
    for(int i=1;i<=7;++i)

    {
        //printf("%d ",wc[i]);
    }
    printf("\n");

}
void heap_sort(int A[],int n)
{
    for(int i=n/2;i>=1;i--)
    {   //printf("%d",i);
        max_heapify(A,n,i);
    }
    printf("==========");
    for(int i=n;i>=1;--i)
    {   //printf("doinf");
        swap(A,1,i);
        //printf("after swap\n");
        for(int j=1;j<=7;j++)
    {
       // printf("%d ",wc[j]);
    }
    printf("\n");
        max_heapify(A,i-1,1);
    }
}
void main()
{
    heap_sort(wc,7);
    for(int i=1;i<=7;++i)
    {
        printf("%d ",wc[i]);
    }
}