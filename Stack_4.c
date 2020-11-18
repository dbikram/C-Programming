//EVALUATION OF POSTFIX STRING USING STACK
#include<stdio.h>
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
                char pofx[50],*e;
                int num,op1,res,op2;
                printf("Enter a postfix expression:");
                gets(pofx);
                e=pofx;
                while(*e!='\0') //till the end of the postfix string
                {
                                if(isdigit(*e)) //if it is digit
                                {
                                                num=*e-48; //change the character to number
                                                push(num);
                                }
                                else //if it is operators
                                {
                                                op2=pop();
                                                op1=pop();
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
                printf("The evaluation of %s is %d\n",pofx,pop());
                return 0;
}
