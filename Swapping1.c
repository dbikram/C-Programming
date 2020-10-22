#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("After swapping--->\n");
	c=a;
	a=b;
	b=c;
	printf("A is:%d\n",a);
	printf("B is:%d\n",b);
	return 0;
}
