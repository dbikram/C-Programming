/*Fibonacci series upto n using recursion*/
#include<stdio.h>
int fibo(int);
int main()
{
                int n,i;
                printf("Enter n:");
                scanf("%d",&n);
                printf("Fibonacci series upto %d is:",n);
                for(i=0;i<n;i++)
                                printf("%d ",fibo(i));
                return 0;
}
int fibo(int n)
{
                if(n==0)
                                return 0;
                if(n==1)
                                return 1;
                else
                                return(fibo(n-1)+fibo(n-2));
}
