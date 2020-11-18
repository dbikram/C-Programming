// EVALUATION OF PREFIX EXPRESSION USING STACK
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int stack[50];
int top=-1;

void push(int ch)
{
                stack[++top]=ch;
}
int pop()
{
                return(stack[top--]);
}

int main()
{
                char prfx[50],*e;
                int num,op1,res,op2;
                printf("Enter a prefix expression:");
                gets(prfx);
                strrev(prfx);
                e=prfx;
                while(*e!='\0') //till the end of the prefix string
                {
                                if(isdigit(*e)) //if the character is digit
                                {
                                                num=*e-48; //change the character to its corresponding value
                                                push(num);
                                }
                                else //if it is operators
                                {
                                                op1=pop();
                                                op2=pop();
                                                switch(*e)
                                                {
                                                case '+':
                                                                res=op1+op2;
                                                                break;
                                                case '-':
                                                                res=op1-op2;
                                                                break;
                                                case '*':
                                                                res=op1*op2;
                                                                break;
                                                case '/':
                                                                res=op1/op2;
                                                                break;
                                                case '^':
                                                                res=pow(op1,op2);
                                                                break;
                                                }
                                                push(res);
                                }
                                *e++;
                }
                strrev(prfx);
                printf("The evaluation of %s is %d\n",prfx,pop());
                return 0;
}
