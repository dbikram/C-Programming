/*Abundant number(friendly pair)or not abundant number*/
/* if (sum of divisor of num1)/num1 = (sum of divisor of num2)/num2 then num1 and num2 are abundant numbers.*/
#include<stdio.h>
int main()
{
                int num1,num2,i,sum1=0,sum2=0;
                printf("Enter two numbers:");
                scanf("%d%d",&num1,&num2);
                for(i=1;i<num1;i++)
                {
                                if(num1%i==0)
                                {
                                                sum1 += i;
                                }
                }
                for(i=1;i<num2;i++)
                {
                                if(num2%i==0)
                                {
                                                sum2 += i;
                                }
                }
                if((sum1==num1)&&(sum2==num2))
                                printf("%d and %d are Friendly pair\n",num1,num2);
                else
                                printf("%d and %d are not Friendly pair\n",num1,num2);
                return 0;
}
