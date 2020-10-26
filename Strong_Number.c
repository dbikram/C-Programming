/*Strong number or not*/
#include<stdio.h>
int fact(int);
int main()
{
                int num,x,r=0,sum=0;
                printf("Enter a number:");
                scanf("%d",&num);
                x=num;
                while(x!=0)
                {
                                r=x%10;
                                sum += fact(r);
                                x=x/10;
                }
                if(sum==num)
                                printf("%d is strong number\n",num);
                else
                                printf("%d is not strong number\n",num);
                return 0;
}
int fact(int n)
{
                if(n==0||n==1)
                                return 1;
                else
                                return(n*fact(n-1));
}
