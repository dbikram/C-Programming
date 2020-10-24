/*GCD of two numbers using recursion*/
#include<stdio.h>
int gcd(int,int);
int main()
{
                int a,b,G;
                printf("Enter two positive values:");
                scanf("%d%d",&a,&b);
                printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));

}
int gcd(int a,int b)
{
                if(b!=0)
                                return(gcd(b,a%b));
                else
                                return(a);
}
