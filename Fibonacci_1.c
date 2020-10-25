/*Fibonacci series upto n*/
#include<stdio.h>
int main()
{
                int n,a=-1,b=1,c,i;
                printf("Enter n:");
                scanf("%d",&n);
                printf("Fibonacci series upto %d is:",n);
                for(i=1;i<=n;i++)
                {
                                c=a+b;
                                a=b;
                                b=c;
                                printf("%d ",c);
                }
                return 0;
}

