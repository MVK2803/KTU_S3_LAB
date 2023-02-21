#include<stdio.h>
#define size 5
int top=-1;
int stack[5];
void push(int ele)
{ 
    if (top==size-1)
    printf("STACK OVERFLOW\n");
    else
    {
        stack[++top]=ele;
    }
  
}
int pop()
{
    if (top==-1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        return stack[top--];
    }
}
void display()
{
    int x;
    x=pop();
    if (top!=-1)
    {
        display();
    }
    printf("%d",x);
}

void main()
{ int ele;
  for (int i=0;i<6;++i)
  {
    
    scanf("%d",&ele);
    push(ele);
  }
  for(int i=0;i<size;++i)
  {
    printf("%d",stack[i]);
  }
  display();
}