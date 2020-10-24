/*number of digits in integer*/
#include<stdio.h>
int main()
{
                int num,r,count=0;
                printf("Enter a number:");
                scanf("%d",&num);
                while(num!=0)
                {

                               r=num%10;
                               count++;
                               num=num/10;
                }
                printf("The number of digit:%d\n",count);
                return 0;
}

