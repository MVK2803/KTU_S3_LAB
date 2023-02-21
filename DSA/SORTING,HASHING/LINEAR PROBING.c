#include<stdio.h>
int arr[10];
void insert(int ele)
{
    int x;
    x=ele%10;
    if (arr[x]==-1)
    {
        arr[x]=ele;
    }
    else
    {   int i;
        for( i=x+1; arr[i]!=-1;i=(i+1)%10)
        {
           continue; 
        }
        arr[i]=ele;
    }
}

void main()
{
    printf("ELEMENST?");
    int n;
    scanf("%d",&n);
    for(int i=0;i<10;++i)
    {
        arr[i]=-1;
    }
    for( int i=0;i<n;++i)
    {   printf("ENTER ");
        int ele;
        scanf("%d",&ele);
        insert(ele);
    }
    for(int i=0;i<10;++i)
    {
        printf("%d\n",arr[i]);
    }
}