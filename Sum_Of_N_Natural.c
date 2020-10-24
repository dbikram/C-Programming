/*Sum of N natural number*/
#include<stdio.h>
int main()
{
                int n,i,sum=0;
                printf("Enter N:");
                scanf("%d",&n);
                printf("Sum of first %d Natural numbers:",n);
                for(i=1;i<=n;i++)
                {
                                sum=sum+i;
                }
                printf("%d ",sum);
                return 0;
}

