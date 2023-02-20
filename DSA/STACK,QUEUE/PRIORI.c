#include<stdio.h>
#define size 5;
int q[5][5],f[5],r[5];
void enq(int x,int ele)
{  int front=f[x],rear=r[x];
   if (front==((rear+1) % 5))
    {
        printf("OVERFLOW");
    }
    else
    {
        if (front==-1 && rear==-1)
        {
            front=0;
        }
        rear=(rear+1)%size;
        q[x][rear]=ele;
    }
    f[x]=front;
    r[x]=rear;
}

int deq()
{
    int flag=-1;
    int x=0;
    
    while(flag==-1){
        printf("DONE");
        int front=f[x],rear=r[x];
        if ((rear==-1 && front==-1)||(front==rear+1))
        { front=-1;rear=-1;
            x++;
        }
        else
        {   q[x][front] =-1;
            front=(front+1);
             flag=0;
             f[x]=front;
             r[x]=rear;
            
            
        }
        

    }
}
void main()
{   int x,y;
    for(int i=0;i<5;++i)
    {
        f[i]=-1;
        r[i]=-1;
    }
    for(int i=0;i<10;++i)
    {
        scanf("%d-%d",&x,&y);
        enq(x,y);
    }
    
    for(int i=0;i<5;++i)
    { //printf("DOING");

        deq();
    }
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            printf("%d ",q[i][j]);
        }
        printf("\n");    }
}