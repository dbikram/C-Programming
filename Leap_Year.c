/*Leap year or not*/
#include<stdio.h>
int main()
{
                int year;
                printf("Enter year:");
                scanf("%d",&year);
                if(year%100==0) //if century year
                {
                                if(year%400==0)
                                                printf("%d is Leap year\n",year);
                                else
                                                printf("%d is not leap year\n",year);
                }
                else
                {
                                if(year%4==0)
                                                printf("%d is Leap year\n",year);
                                else
                                                printf("%d is not Leap year\n",year);
                }
                return 0;
}
