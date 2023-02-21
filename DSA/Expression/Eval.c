#include<stdio.h>
#include<string.h>
char post[50];
int top=-1;
int stack[50];
int eval(char a[])
{
    
    for(int i=0;a[i]!='\0';++i)
    {
        if (a[i]>='0'&& a[i]<='9')
        {
            stack[++top]=(a[i]-48);
        }
        else  //it is operator
        {
            int x=stack[top--];
            int y=stack[top--];
            switch (a[i])
            {
            case '+':
               {stack[++top]=(x+y);
               break;}
            case '-':
               {stack[++top]=(y-x);
               break;}
            case '/':
               {stack[++top]=(y/x);
               break;}
            case '%':
               {stack[++top]=(y%x);
               break;}
            case '*':
               {stack[++top]=(y*x);
               break;}
            case '^':
               {stack[++top]=(y^x);
               break;}
            }
        }
    }
    return stack[top];
}
 void main()
 {
    printf("ENTER POSTFIX");
    scanf("%s",post);
    int ans=eval(post);
    printf("%d",ans);
 }