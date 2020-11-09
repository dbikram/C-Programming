//Write a program to convert temperature from degree centigrade to Fahrenheit.
#include<stdio.h>
int main()
{
                float tc,tf;
                printf("Enter the temperature in Centigrade:");
                scanf("%f",&tc);
                tf=(tc*(9.0/5))+32.00;
                printf("%.2f Centigrade=%.2f Fahrenheit\n",tc,tf);
                return 0;
}
