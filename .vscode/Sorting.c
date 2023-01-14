#include<stdio.h>
int bc[10]={1,2,3,4,5,6,7,8,9.10};
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
void main()
{
    selection_sort(wc);
    for(int i=0;i<10;++i)
    {
        printf("%d ",wc[i]);
    }
}