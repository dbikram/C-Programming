#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("The sum of %.2f and %.2f is %.2f\n",a,b,a+b);
	printf("The multiplication of %.2f and %.2f is %.2f\n",a,b,a*b);
	printf("The subtraction of %.2f and %.2f is %.2f\n",a,b,a-b);
	printf("The division of %.2f and %.2f is %.2f\n",a,b,a/b); 
	return 0;
}
