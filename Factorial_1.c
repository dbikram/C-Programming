/*Factorial of a number*/
#include<stdio.h>
int main()
{
                int n,i,fact=1;
                printf("Enter a number:");
                scanf("%d",&n);
                printf("Factorial of %d is:",n);
                for(i=n;i>=1;i--)
                {
                                fact=fact*i;
                }
                printf("%d\n",fact);
                return 0;

}

