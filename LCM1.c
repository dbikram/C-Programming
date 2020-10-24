/*LCM of two numbers*/
#include<stdio.h>
int main()
{
                int a,b,L,i;
                printf("Enter two positive values:");
                scanf("%d%d",&a,&b);
                for(L=(a>b?a:b);L<=a*b;L++)
                {
                                if(L%a==0&&L%b==0)
                                {
                                                printf("LCM of %d and %d is %d\n",a,b,L);
                                                break;
                                }
                }
                return 0;

}
