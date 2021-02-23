#include<stdio.h>
#include<stdlib.h>
void move(int n,char s,char d,char v)
{
                if(n==1)
                {
                                printf("move from %c to %c\n",s,d);
                                return;
                }
                else
                {
                                move(n-1,s,v,d);
                                move(1,s,d,v);
                                move(n-1,v,d,s);
                }
}
int main()
{
                int n;
                printf("Enter the number of disks:");
                scanf("%d",&n);
                move(n,'A','C','B');
}
