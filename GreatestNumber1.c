/*Greatest of three numbers*/
#include<stdio.h>
int main()
{
                int a,b,c,max;
                printf("Enter three numbers:");
                scanf("%d%d%d",&a,&b,&c);
                max=(a>b)?a:((b>c)?b:c);
                printf("The greatest number of %d, %d and %d is %d\n",a,b,c,max);
                return 0;
}

