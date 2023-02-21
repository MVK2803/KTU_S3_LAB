#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct node * link;
}*new,*temp,* h[5];
void insert(int ele)
{
    int x;
    x=ele%5;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=ele;
    new->link=NULL;
    if (h[x]==NULL)
    {
        h[x]=new;
    }
    else
    {
        temp=h[x];
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=new;
    }
}
void main()
{
   printf("ELEMENST?");
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;++i)
   {
        printf("ENTER ");
        int ele;
        scanf("%d",&ele);
        insert(ele);
   }
   for(int i=0;i<5;++i)
   {
    printf("%d ",i);
    temp=h[i];
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("-->");
        temp=temp->link;
    }
    printf("NULL");
    printf("\n");
   }
}
