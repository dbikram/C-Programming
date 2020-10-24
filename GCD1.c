/*GCD of two numbers*/
#include<stdio.h>
int main()
{
                int a,b,G;
                printf("Enter two positive values:");
                scanf("%d%d",&a,&b);
                for(G=(a>b?a:b);G>=1;G--)
                {
                                if(a%G==0&&b%G==0)
                                {
                                                printf("GCD of %d and %d is %d\n",a,b,G);
                                                break;
                                }
                }
                return 0;

}
