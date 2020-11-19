//CIRCULAR QUEUE
#include<stdio.h>
#include<stdlib.h>
#define max 5

struct queue
{
                int item[max];
                int rear,front;
}q;

int full(struct queue*);
int empty(struct queue*);
void qinsert(struct queue*,int);
int qdelete(struct queue*);
void display(struct queue*);

int main()
{
                int choice,x,y;
                q.rear=q.front=-1;
                while(1)
                {
                                printf("\nQUEUE OPERATIONS\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice:");
                                scanf("%d",&choice);
                                switch(choice)
                                {
                                case 1:
                                                printf("Enter a number for insertion:");
                                                scanf("%d",&x);
                                                qinsert(&q,x);
                                                break;
                                case 2:
                                                if(empty(&q)==1)
                                                                printf("The queue is empty\n");
                                                else
                                                {
                                                                y=qdelete(&q);
                                                                printf("\nThe Deleted element is:%d\n",y);
                                                }
                                                break;
                                case 3:
                                                if(empty(&q)==1)
                                                                printf("\nThe queue is empty\n");
                                                else
                                                {
                                                                printf("\nThe recent position of queue:\n");
                                                                display(&q);
                                                }
                                                break;
                                case 4:
                                                exit(0);
                                default:
                                                printf("Wrong key\n");
                                }
                }
                return 0;
}
int full(struct queue *q)
{
                if((q->rear+1)%max==q->front)
                                return 1;
                else
                                return 0;
}
int empty(struct queue *q)
{
                if(q->front==-1)
                                return 1;
                else
                                return 0;
}
void qinsert(struct queue *q,int x)
{
                if(full(q)==1)
                {
                                printf("\nThe queue is full\n");
                                exit(0);
                }
                else
                {
                                q->rear=(q->rear+1)%max;
                                q->item[q->rear]=x;
                                if(q->rear==q->front)
                                                q->front=q->rear;
                }
}
int qdelete(struct queue *q)
{
                int y;
                if(empty(q)==1)
                {
                                printf("\nThe Queue is Empty\n");
                                exit(0);
                }
                else
                {
                                y=q->item[q->front];
                                if(q->front==q->rear)
                                                q->front=q->rear=-1;
                                else
                                                q->front=(q->front+1)%max;
                                return y;
                }
}
void display(struct queue *q)
{
                int i,j;
                if(q->front<=q->rear)
                {
                                for(i=q->front;i<=q->rear;i++)
                                                printf("%d ",q->item[i]);
                }
                else
                {
                                for(i=0;i<=q->rear;i++)
                                                printf("%d ",q->item[i]);
                                for(j=q->front;j<=max-1;j++)
                                                printf("%d ",q->item[j]);
                }
}
