/*Reverse a given number*/
#include<stdio.h>
int main()
{
                int num,r,rev=0,x;
                printf("Enter a number:");
                scanf("%d",&num);
                x=num;
                while(x!=0)
                {

                                r=x%10;
                                rev=rev*10+r;
                                x=x/10;
                }
                printf("Reverse of %d is %d\n",num,rev);
                return 0;
}

