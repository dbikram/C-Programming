//Hollow rectangular pattern
#include<stdio.h>
int main()
{
                int i,j;
                for(i=0;i<=2;i++)
                {
                                for(j=0;j<=4;j++)
                                {
                                                if(i==0||i==2||j==0||j==4)
                                                                printf("*");
                                                else
                                                                printf(" ");
                                }
                                printf("\n");
                }
                return 0;
}
