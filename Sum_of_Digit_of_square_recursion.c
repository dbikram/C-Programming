//Write a recursive function to calculate sum of square of digits of a number
#include<stdio.h>
#include<math.h>
int squareSum(int n);
int main()
{
                int num,s;
                printf("Enter a number:");
                scanf("%d",&num);
                s=squareSum(num);
                printf("The Sum of the square of digit of the given number:%d\n",s);
}
int squareSum(int n)
{
                if(n==0)
                                return 0;
                else
                                return(pow((n%10),2)+squareSum(n/10));
}

