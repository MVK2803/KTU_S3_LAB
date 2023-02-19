#include<stdio.h>

#define size 5
int rear=-1;
int front=-1;
int q[5];

void enq(int ele)
{
    if (front==-1 && rear==-1)
    {   
        rear=0;
        front=0;
        q[front]=ele;
    }
    else if(rear==size-1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        q[++rear]=ele;
    }
}
void display()
{
    for(int i=front;i<rear+1;++i)
    {
        printf("%d ",q[i]);
    }
}

int deq()
{
    if ((rear==-1 && front==-1)||(front==rear+1))
    {
        printf("UNDERFLOW");
    }
    else
    {
         return q[front++];
    }
}


 void main()
 {
    for(int i=0;i<6;++i)
    {
        int x;
        scanf("%d",&x);
        enq(x);

    }
    display();
   
    for(int i=0;i<5;++i)
    {
        printf("%d",deq());
    }
    display();
 }