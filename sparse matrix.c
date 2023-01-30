// c program to do sparse matrix operation
#include<stdio.h>
void main()
{
    int a[4][5]={{1,2,3,4,0},{0,2,0,4,0},{0,2,0,4,0},{0,2,0,0,0}};
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<5;++j)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}