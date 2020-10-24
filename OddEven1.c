/*odd or even check*/
#include<stdio.h>
int main()
{
                int n;
                printf("Enter a positive number:");
                scanf("%d",&n);
                if(n%2==0)
                                printf("%d is an Even number\n",n);
                else
                                printf("%d is an Odd number\n",n);
                return 0;
}
