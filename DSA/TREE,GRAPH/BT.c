#include<stdio.h>
#include<stdlib.h>
int flag=0;
struct node
{
    int data;
    struct node *l;
    struct node *r;

} *new, *temp,*root,*ptr1;

void inorder(struct node * ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->l);
        printf("%d ", ptr->data);
        inorder(ptr->r);
    }
}

void create(struct node * ptr)
{
    if (ptr != NULL)
    {
        printf("ENTER DATA: ");
        int x;
        scanf("%d",&x);
        ptr->data=x;
        int ch;
        printf("LEFT NODE? for %d (1/0): ",ptr->data);
        scanf("%d",&ch);
        if (ch == 1)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->l=NULL;new->r=NULL;
            ptr->l=new;
            create(new);
        }
        else
        {
            ptr->l=NULL;
        }
        printf("RIGHT NODE? %d (1/0): ",ptr->data);
        scanf("%d",&ch);
        if (ch == 1)
        {
            new=(struct node *)malloc(sizeof(struct node));
            new->l=NULL;new->r=NULL;
            ptr->r=new;
            create(new);
        }
        else
        {
            ptr->r=NULL;
        }
    }
}
void search(int ele,struct node * ptr)
{ printf("%d %d \n",ptr->data,flag);
  if (ptr->data==ele)
  {
    flag=1;
    return ;
  }
  if (ptr->l!=NULL && flag ==0)
  {
    search(ele,ptr->l);
  }
  if (ptr->r!=NULL && flag ==0)
  {
    search(ele,ptr->r);
  }
}
void succ(struct node * ptr)
{
    ptr1=ptr->r;
    while(ptr1->l!=NULL)
    {
        ptr1=ptr1->l;
    }
}
delete()
int main()
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->l=NULL;temp->r=NULL;
    root=temp;
    create(temp);
    
    
    search(4,root);
    if (flag==0)
    {
        printf(" NOT FOUND");
    }
    else
    {
        printf("FOUND");
    }
    printf("%d",root->data);
    succ(root);
    printf("%d",ptr1->data);
  
    
}
