// LINEAR QUEUE
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
int qremove(struct queue*);
void display(struct queue*);

int main()
{
                int choice,x,y;
                q.rear=-1;
                q.front=0;
                while(1)
                {
                                printf("\nQUEUE OPERATIONS\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\nEnter your choice:");
                                scanf("%d",&choice);
                                switch(choice)
                                {
                                case 1:
                                                printf("\nEnter a number for insertion:");
                                                scanf("%d",&x);
                                                qinsert(&q,x);
                                                break;
                                case 2:
                                                if(empty(&q)==1)
                                                                printf("\nThe queue is empty\n");
                                                else
                                                {
                                                                y=qremove(&q);
                                                                printf("The deleted element is:%d\n",y);
                                                }
                                                break;
                                case 3:
                                                if(empty(&q)==1)
                                                                printf("\nThe queue is empty\n");
                                                else
                                                {
                                                                printf("\nThe Recent Position of Queue's Element--->\n");
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
                if(q->rear==max-1)
                                return 1;
                else
                                return 0;
}
int empty(struct queue *q)
{
                if(q->front-q->rear==1)
                                return 1;
                else
                                return 0;
}
void qinsert(struct queue *q,int x)
{
                if(full(q)==1)
                {
                                printf("The queue is full\n");
                                exit(0);
                }
                else
                {
                                q->rear++;
                                q->item[q->rear]=x;
                }
}
int qremove(struct queue *q)
{
                int y;
                if(empty(q)==1)
                {
                                printf("The queue is empty\n");
                                exit(0);
                }
                else
                {
                                y=q->item[q->front];
                                q->front++;
                                return y;
                }
}
void display(struct queue *q)
{
                int i;
                for(i=q->front;i<=q->rear;i++)
                                printf("%d\t",q->item[i]);

}
