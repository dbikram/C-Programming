// CONVERSION INFIX EXPRESSION TO PREFIX EXPRESSION
#include<stdio.h>
#include<ctype.h>
#include<string.h>

char stack[50];
int top=-1;

void push(char ch)
{
                stack[++top]=ch;
}
char pop()
{
                return(stack[top--]);
}

int priority(char ch)
{
                switch(ch)
                {
                                case '#':
                                                return 0;
                                case ')':
                                                return 1;
                                case '+':
                                case '-':
                                                return 2;
                                case '*':
                                case '/':
                                                return 3;
                                case '^':
                                                return 4;
                }
}

int main()
{
                char infx[50],prfx[50],ch,discard;
                int i=0,k=0;
                printf("Enter an infix expression:");
                gets(infx);
                strrev(infx);
                push('#');
                while((ch=infx[i++])!='\0') //till the end of the infix expression
                {
                                if(ch==')') //if it is right parenthesis
                                                push(ch);
                                else if(isalnum(ch)) //if it is number or alphabet
                                                prfx[k++]=ch;
                                else if(ch=='(')
                                {
                                                while(stack[top]!=')') //till we encountered right parenthesis
                                                                prfx[k++]=pop();
                                                discard=pop();
                                }
                                else
                                {
                                                while(priority(stack[top])>priority(ch))
                                                                prfx[k++]=pop();
                                                push(ch);
                                }
                }
                while(stack[top]!='#') //till the end of the stack
                                prfx[k++]=pop();
                prfx[k]='\0';
                strrev(prfx);
                strrev(infx);
                printf("\nInfix expression--->%s\n\nPrefix expression--->%s\n",infx,prfx);
                return 0;
}
