/*Greatest of two numbers*/
#include<stdio.h>
int main()
{
                int a,b,max;
                printf("Enter two numbers:");
                scanf("%d%d",&a,&b);
                max=a>b?a:b;
                printf("The greatest number of %d and %d is %d\n",a,b,max);
                return 0;
}

