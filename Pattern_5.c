//Star pattern
#include<stdio.h>
int main()
{
                int i,j,n;
                printf("Enter the number of rows:");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                                for(j=1;j<=n;j++)
                                {
                                                if(j<=6-i)
                                                                printf("*");
                                                else
                                                                printf(" ");
                                }
                                printf("\n");
                }
                return 0;
}
