//Write a program to print 1 to 100 without using loop
#include<stdio.h>
int main()
{
                static int n=1;
                while(n<=100)
                {
                printf("%d\n",n);
                n++;
                }
}
