#include<stdio.h>

#define size 5
int rear=-1;
int front=-1;
int q[5];

void enq(int ele)
{
    if ((front==-1 && rear==-1))
    {   
        rear=0;
        front=0;
        q[rear]=ele;
    }
    else if(front==(rear+1)%size)
    {
        printf("OVERFLOW\n");
    }
    else
    {   
        rear=(rear+1)%size;
        q[rear]=ele;
    }
}
void display()
{
    for (int i = front; i != rear; i = (i + 1) % size)
    {
        printf("%d ", q[i]);
    }
    printf("%d\n", q[rear]);
}


int deq()
{
    if ((rear==-1 && front==-1)||(front==rear))
    {   front=-1;
         rear=-1;
        printf("UNDERFLOW");
        return -1;
    }
    else
    {    front=(front+1)%size;
         return q[front];
    }

}



void main()
 {  printf("MATHEW");
    for(int i=0;i<6;++i)
    {
        int x;
        scanf("%d",&x);
        printf("%d",x);
        enq(x);

    }
    display();
    deq();
    deq();
    enq(20);
    display();
    
    
   
    
 }