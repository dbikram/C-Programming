//Write a recursive function to calculate sum of cubes of digits of a number.
#include<stdio.h>
#include<math.h>
int sumCubes(int);
int main()
{
                int num,s;
                printf("Enter a number:");
                scanf("%d",&num);
                s=sumCubes(num);
                printf("The sum of cubes of digits of a number=%d\n",s);
                return 0;
}
int sumCubes(int n)
{
                if(n==0)
                                return 0;
                else
                                return(pow((n%10),3)+sumCubes(n/10));
}

