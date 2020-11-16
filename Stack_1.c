//Stack data structure using array
#include<stdio.h>
#include<stdlib.h>
#define max 5
struct stack
{
                int item[max];
                int top;
}a;
void push(struct stack*,int);
int pop(struct stack*);
int full(struct stack*);
int empty(struct stack*);
void display(struct stack*);
int main()
{
                int choice,x,y;
                a.top=-1;
                while(1)
                {
                                printf("\nStack Menu\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice:");
                                scanf("%d",&choice);
                                switch(choice)
                                {
                                case 1:
                                                printf("Enter a number for insertion:");
                                                scanf("%d",&x);
                                                push(&a,x);
                                                break;
                                case 2:
                                                if(empty(&a))
                                                {
                                                                printf("Underflow condition\n");
                                                                exit(0);
                                                }
                                                y=pop(&a);
                                                printf("The deleted number is:%d\n",y);
                                                break;
                                case 3:
                                                if(a.top==-1)
                                                {
                                                                printf("The stack is Empty\n");
                                                                exit(0);
                                                }
                                                display(&a);
                                                break;
                                case 4:
                                                exit(0);
                                default:
                                                printf("Wrong key\n");
                                }
                }
                return 0;
}
int full(struct stack*a)
{
                if(a->top==max-1)
                {
                                printf("The stack is Full\n");
                                return 1;
                }
                else
                                return 0;
}
int empty(struct stack*a)
{
                if(a->top==-1)
                {
                                printf("The stack is Empty\n");
                                return 1;
                }
                else
                                return 0;
}
void push(struct stack*a,int x)
{
                if(full(a)==1)
                {
                                printf("Overflow condition\n");
                                exit(0);
                }
                else
                {
                                a->top++;
                                a->item[a->top]=x;
                }
}
int pop(struct stack*a)
{
                int x;
                if(empty(a)==1)
                {
                                printf("Underflow condition\n");
                                exit(0);
                }
                else
                {
                                x=a->item[a->top];
                                a->top--;
                                return x;
                }
}
void display(struct stack*a)
{
                int i;
                printf("The recent position of stack is:\n");
                for(i=0;i<=a->top;i++)
                {
                                printf("%d\t",a->item[i]);
                }
}
