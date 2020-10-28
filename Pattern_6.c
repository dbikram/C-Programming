//Star pattern
#include<stdio.h>
int main()
{
                int i,j,n,k;
                printf("Enter the number of rows:");
                scanf("%d",&n);
                k=n*2-1;
                for(i=1;i<=n;i++)
                {
                                for(j=1;j<=k;j++)
                                {
                                                if(j>=6-i && j<=4+i)
                                                                printf("*");
                                                else
                                                                printf(" ");
                                }
                                printf("\n");
                }
                return 0;
}
