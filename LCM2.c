/*LCM of two numbers using recursion*/
#include<stdio.h>
int lcm(int,int);
int main()
{
                int a,b;
                printf("Enter two positive values:");
                scanf("%d%d",&a,&b);
                printf("LCM of %d and %d is %d\n",a,b,lcm(a,b));
                return 0;
}
int lcm(int a,int b)
{
                static int temp=1;
                if(temp%a==0&&temp%b==0)
                {
                                return temp;
                }
                else
                {
                                temp++;
                                lcm(a,b);
                                return temp;
                }
}
