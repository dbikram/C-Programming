/*Swapping without third variable*/
#include<stdio.h>
int main()
{
                int a,b;
                printf("Enter A:");
                scanf("%d",&a);
                printf("Enter B:");
                scanf("%d",&b);
                printf("After Swapping--->\n");
                a=a^b;
                b=a^b;
                a=a^b;
                printf("A is :%d\n",a);
                printf("B is :%d\n",b);
                return 0;
}
