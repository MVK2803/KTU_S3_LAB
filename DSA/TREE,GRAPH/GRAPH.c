#include<stdio.h>
#define size 100
int vert[10];
int adj[10][10];

int q[100];
int front=-1;
int rear=-1;
int top=-1;
int stack[100];
 void enq(int ele)
 {
   if (front == -1 && rear == -1)
    {
        front=0;
    }
    q[++rear]=ele;

}
int deq()
{
    int x=q[front];
    
        front ++;

    return x;
}
void push(int ele)
{ 
    
        stack[++top]=ele;
    
  
}
int pop()
{
    
        return stack[top--];
    
}


void add_neigh(int x,int len)
{
    printf("NO OFNEIGH of %d",vert[x]);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("ENTER NEIGHBOUR:");
        int neigh;
        scanf("%d",&neigh);
        int j=0;
        while(j<len && vert[j]!=neigh)
        {
            j++;
        }
        if (j!=x)
        {
            adj[x][j]=1;
        }
    }
}
void DFS(int n)
{  int g;
    int i;
    int v[10];
    for ( i = 0; i < n; ++i) {
    v[i] = -1;}

printf("ENTER STARTING NODE");

scanf("%d", &g);
for( i=0;i<n;++i){
    if (vert[i]==g)
    break;
}

push(i);

while (top != -1) {
    int x=pop();
    if (v[x]==-1)
    {
        printf("%d",vert[x]);
        v[x]=1;
        
        for(  i=0;i<n;++i)
        {
            if (adj[x][i]==1 && v[i]==-1)
            {
                push(i);
            }
        }
    }
}
}
void BFS(int n)
{  int g;
    int i;
    int v[10];
    for ( i = 0; i < n; ++i) {
    v[i] = -1;}

printf("ENTER STARTING NODE");

scanf("%d", &g);
for( i=0;i<n;++i){
    if (vert[i]==g)
    break;
}

enq(i);

while (front <= rear) {
    int x=deq();
    if (v[x]==-1)
    {
        printf("%d",vert[x]);
        v[x]=1;
        
        for(  i=0;i<n;++i)
        {
            if (adj[x][i]==1 && v[i]==-1)
            {
                enq(i);
                printf("ENUQED %d",vert[i]);
            }
        }
    }
}
}
void main()
{   int n;
    printf("VERTICES?: ");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        printf("ENTER");
        int ele;
        scanf("%d",&ele);
        vert[i]=ele;
    }
    for(int i=0;i<n;++i)
    {   printf("%d",i);
        add_neigh(i,n);
       
    }
    for( int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    BFS(n);
}