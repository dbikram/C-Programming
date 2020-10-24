/*Check odd or even without modulus operator*/
#include<stdio.h>
int main()
{
                int n;
                printf("Enter a positive number:");
                scanf("%d",&n);
                /* Every odd number's binary representation has 1 in last bit. 1&1=1 and 1&0=0.*/
                if(n&1)
                                printf("%d is an Odd number\n",n);
                else
                                printf("%d is an Even number\n",n);
                return 0;
}
