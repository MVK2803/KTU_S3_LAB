#include<stdio.h>
int bc[10]={1,2,3,4,5,6,7,8,9.10};
int wc[10]={10,9,8,7,6,5,4,3,2,1};

void swap(int A[10] ,int a,int b)
{
    int t= A[a];
    A[a]=A[b];
    A[b]=t;

}
void bubble_sort(int A[10])
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
void main()
{
    bubble_sort(wc);
    for(int i=0;i<10;++i)
    {
        printf("%d",wc[i]);
    }
}