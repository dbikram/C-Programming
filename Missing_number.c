//Suppose you are given 5, so numbers would be 1 to 5 but the number of elements would be 5-1
#include<stdio.h>
int main()
{
                int n,i,arr[100],sum=0,sum1=0;
                printf("Enter a number:");
                scanf("%d",&n);
                printf("Enter some numbers upto %d:\n",n);
                for(i=0;i<n-1;i++)
                {
                                scanf("%d",&arr[i]);
                                sum=sum+arr[i];
                }
                for(i=1;i<=n;i++)
                {
                                sum1=sum1+i;
                }
                printf("The missing number is:%d\n",(sum1-sum));
                return 0;
}
