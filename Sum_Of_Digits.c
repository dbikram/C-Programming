/*Sum of digits of a Number*/
#include<stdio.h>
int main()
{
                int num,r,sum=0;
                printf("Enter a number:");
                scanf("%d",&num);
                while(num!=0)
                {

                               r=num%10;
                               sum=sum+r;
                               num=num/10;
                }
                printf("The sum of digits:%d\n",sum);
                return 0;
}

