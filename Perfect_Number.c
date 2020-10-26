/*Perfect number or not*/
#include<stdio.h>
int main()
{
                int num,i,sum=0;
                printf("Enter a number:");
                scanf("%d",&num);
                for(i=1;i<num;i++)
                {
                                if(num%i==0)
                                {
                                                sum += i;
                                }
                }
                if(sum==num)
                                printf("%d is Perfect number\n",num);
                else
                                printf("%d is not Perfect number\n",num);
                return 0;
}
