// CONVERSION INFIX EXPRESSION TO POSTFIX EXPRESSION
#include<stdio.h>
#include<ctype.h>

#define SIZE 50

char stack[SIZE];       //stack by char array
int top=-1;             //initializes top by -1

void push(char elem)     //push function
{
                stack[++top]=elem;

}

char pop()               //pop function
{
                return(stack[top--]);
}

int priority(char elem)    //check priority of operator
{
                switch(elem)
                {
                                case '#':return 0;
                                case '(':return 1;
                                case '+':
                                case '-':return 2;
                                case '/':
                                case '*':return 3;
                                case '^':return 4;
                }
}

int main()
{
                char infx[SIZE],pofx[SIZE],ch,discard;
                int i=0,k=0;
                printf("Take infix expression--->");
                scanf("%s",infx);
                push('#');

                while((ch=infx[i++])!='\0')
                {
                                if(ch=='(')
                                                push(ch);
                                else if(isalnum(ch))     //isalnum is function to check it is alphanumeric
                                                pofx[k++]=ch;
                                else if(ch==')')
                                {
                                                while(stack[top]!='(')
                                                                pofx[k++]=pop();
                                                discard=pop();
                                }
                                else
                                {
                                                while(priority(stack[top])>=priority(ch))
                                                                pofx[k++]=pop();
                                                push(ch);
                                }

                }
                while(stack[top]!='#')
                                pofx[k++]=pop();
                pofx[k]='\0';

                printf("\nInfix expression--->%s\n\nPostfix expression--->%s\n",infx,pofx);
                return 0;

}
