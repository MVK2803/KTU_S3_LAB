#include<stdio.h>

#define size 50
int top=-1;
char stack[50];

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
            return 5;
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
            return 6;
    }
}

void toPost(char str[])
{
    char post[50], ch;
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
    char infix[50];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    toPost(infix);
    printf("%d",strlen(infix));
    return 0;
}
