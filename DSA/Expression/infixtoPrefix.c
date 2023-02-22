#include<stdio.h>
#include<string.h>
#define size 50
int top=-1;
char stack[50];char post[50];
char infix[50];
void condition(char a[])
{
  int i,j;
  char temp;
  for(i=0,j=strlen(a)-1;i<j;++i,--j)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
  i=0;
  while(a[i]!='\0')
  {
    if (a[i]=='(')
    {
        a[i]=')';
    }
    else if (a[i]==')')
    {
        a[i]='(';
    }
    i++;
  }
}
void push(char ele)
{ 
   
    
        stack[++top]=ele;
    
}

char pop()
{
    
        return stack[top--];
    
}

int inPrec(char input)
{
    switch (input) {
        case '+':
        case '-':
            return 2;
        case '*':
        case '%':
        case '/':
            return 4;
        case '^':
            return 6;
        case '(':
           return 0;
    }
}
 
int outPrec(char input)
{
    switch (input) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '%':
        case '/':
            return 3;
        case '^':
            return 5;
    }
}

void toPost(char str[])
{
    char ch;
    int i = 0, ptr = 0;

    while(str[i] != '\0')
    {
        ch = str[i];
        if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while(top != -1 && stack[top] != '(')
            {
                post[ptr++] = pop();
            }
            if (stack[top] == '(')
            {
                pop();
            }
        }
        else if (ch == '*' || ch == '+' || ch == '-' || ch == '/' || ch == '%' || ch == '^')
        {
            if (top == -1 && outPrec(ch) > inPrec(stack[top]))
            {
                push(ch);
            }
            else
            {
                while (top != -1 && outPrec(ch) <= inPrec(stack[top]))
                {
                    post[ptr++] = pop();
                }
                push(ch);
            }
        }
        else
        {
            post[ptr++] = ch;
        }
        i++; // move to the next character in the infix expression
    }

    while (top != -1)
    {
        post[ptr++] = pop();
    }
    post[ptr] = '\0'; // null terminate the postfix expression string
    printf("%s", post);
}


int main()
{
    
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    condition(infix);
    toPost(infix);
    //printf("%d",strlen(infix));
    return 0;
}
