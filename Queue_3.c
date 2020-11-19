// DOUBLY ENDED QUEUE
#include<stdio.h>
#include<stdlib.h>
#define max 5
struct queue
{
                int item[max];
                int left,right;
}q;
int full(struct queue*);
int empty(struct queue*);
void insertLeft(struct queue*,int);
void insertRight(struct queue*,int);
int deleteLeft(struct queue*);
int deleteRight(struct queue*);
void display(struct queue*);
int main()
{
                int choice,x,y,x1,y1;
                q.left=q.right=-1;
                while(1)
                {
                                printf("\nQUEUE OPERATION\n1.Insertion at Left\n2.Insertion at Right\n3.Display\n4.Deletion from Left\n5.Deletion from Right\n6.Exit\nEnter your choice:");
                                scanf("%d",&choice);
                                switch(choice)
                                {
                                case 1:
                                                printf("Enter a number for insertion at the Left side of the queue:");
                                                scanf("%d",&x);
                                                insertLeft(&q,x);
                                                break;
                                case 2:
                                                printf("Enter a number for insertion at the Right side of the queue:");
                                                scanf("%d",&x1);
                                                insertRight(&q,x1);
                                                break;
                                case 3:
                                                if(empty(&q))
                                                {
                                                                printf("The queue is Empty\n");
                                                }
                                                else
                                                {
                                                                printf("The recent position of queue's Element:\n");
                                                                display(&q);
                                                }
                                                break;
                                case 4:
                                                if(empty(&q))
                                                {
                                                                printf("The queue is Empty\n");
                                                }
                                                else
                                                {
                                                                y=deleteLeft(&q);
                                                                printf("The deleted element is:%d\n",y);
                                                }
                                                break;
                                case 5:
                                                if(empty(&q))
                                                {
                                                                printf("The queue is Empty\n");
                                                }
                                                else
                                                {
                                                                y1=deleteRight(&q);
                                                                printf("The deleted element is:%d\n",y1);
                                                }
                                                break;
                                case 6:
                                                exit(0);
                                default:
                                                printf("Wrong key\n");
                                }
                }
                return 0;
}
int full(struct queue *q)
{
                if((q->left-q->right==1)||((q->left==0)&&(q->right==max-1)))
                                return 1;
                else
                                return 0;
}
int empty(struct queue *q)
{
                if((q->left==-1)&&(q->right==-1))
                                return 1;
                else
                                return 0;
}
void insertLeft(struct queue *q,int x)
{
                if(full(q))
                {
                                printf("The queue is full\n");
                                exit(0);
                }
                else
                {
                                if(q->left==-1) //If empty
                                {
                                                q->left=0;
                                                q->right=0;
                                }
                                else if(q->left==0)
                                                q->left=max-1;
                                else
                                                q->left--;
                                q->item[q->left]=x;
                }
}
void insertRight(struct queue *q,int y)
{
                if(full(q))
                {
                                printf("The queue is Full\n");
                                exit(0);
                }
                else
                {
                                if(q->right==-1)//If empty
                                {
                                                q->right=0;
                                                q->left=0;
                                }
                                else if(q->right==max-1)
                                                q->right=0;
                                else
                                                q->right++;
                                q->item[q->right]=y;
                }
}
int deleteLeft(struct queue *q)
{
                int y;
                if(empty(q))
                {
                                printf("The queue is Empty\n");
                                exit(0);
                }
                else
                {
                                y=q->item[q->left];
                                if(q->left==q->right) //single element
                                                q->left=q->right=-1;
                                else if(q->left==max-1)
                                                q->left=0;
                                else
                                                q->left++;
                                return y;
                }
}
int deleteRight(struct queue *q)
{
                int y;
                if(empty(q))
                {
                                printf("The queue is Empty\n");
                                exit(0);
                }
                else
                {
                                y=q->item[q->right];
                                if(q->right==q->left)//single element
                                                q->right=q->left=-1;
                                else if(q->right==0)
                                                q->right=max-1;
                                else
                                                q->right--;
                                return y;
                }
}
void display(struct queue *q)
{
                int i,j;
                if(q->left<=q->right)
                {
                                for(i=q->left;i<=q->right;i++)
                                                printf("%d ",q->item[i]);
                }
                else
                {
                                for(j=q->right;j<=q->left;j++)
                                                printf("%d ",q->item[j]);
                }
}
