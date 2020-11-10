//Write a recursive function to calculate sum of digits of a number
#include<stdio.h>
int sum(int n);
int main()
{
                int num,s;
                printf("Enter a number:");
                scanf("%d",&num);
                s=sum(num);
                printf("The Sum of the digit of the given number:%d\n",s);
}
int sum(int n)
{
                if(n==0)
                                return 0;
                else
                                return(n%10+sum(n/10));

}

