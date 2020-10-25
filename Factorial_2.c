/*Factorial of a number using recursion*/
#include<stdio.h>
int fact(int);
int main()
{
                int n,i;
                int f;
                printf("Enter a number:");
                scanf("%d",&n);
                f=fact(n);
                printf("Factorial of %d is %d\n",n,f);
                return 0;
}
int fact(int n)
{
                if(n==1)
                                return 1;
                else
                                return(n*fact(n-1));
}

