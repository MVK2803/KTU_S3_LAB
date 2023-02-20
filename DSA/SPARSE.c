#include <stdio.h>

#define ROW 5
#define COL 4
int tran[20][3];
int tuple[20][3];

void create(int arr[5][4])
{   tuple[0][0]=ROW;
    tuple[0][1]=COL;
    int k=1;

    for(int i=0;i<ROW;++i)
    {
        for(int j=0;j<COL;++j)
        {
            if (arr[i][j]!=0)
            {
                tuple[k][0]=i;
                tuple[k][1]=j;
                tuple[k][2]=arr[i][j];
                tuple[0][2]+=1;
                k++;
                            
            }
        }
    }
}
void trans()
{ int k=1;
printf("%d",tuple[0][2]);
  for( int i=0;i<4;++i)
  {  
    for( int j=1;j<=tuple[0][2];++j)
    {
        if (tuple[j][1]==i)
        {
            tran[k][0]=i;
            tran[k][1]=tuple[j][0];
            tran[k][2]=tuple[j][2];
            k++;
        }
    }
  }
}
int main() {
    int arr[ROW][COL]={{0, 0, 0, 0},{0, 0, 3, 0},{4, 0, 0, 0},{0, 2, 0, 0},{0, 0, 0, 1}};
    create(arr);
    printf("Sparse Matrix:\n");
    int k=tuple[0][2];
    //printf("%d",k);
    
    for (int i = 0; i < k+1; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tuple[i][j]);
        }
        printf("\n");
    }
    printf("-----\n");
    trans();
    for (int i = 0; i < k+1; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tran[i][j]);
        }
        printf("\n");
    }

    
}
