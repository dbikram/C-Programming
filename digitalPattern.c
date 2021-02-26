#include<stdio.h>
int main()
{
                int n;
                printf("Enter a number:");
                scanf("%d",&n);
                for(int i=1;i<=n+1;i++)
                {
                                printf("%d ",i);
                                if(i%2!=0) //odd
                                {
                                                i=2+i;
                                                continue;
                                }
                }
                printf("\n");
                for(int j=2;j<=n;j++)
                {
                                printf("%d ",j);
                                if(j%2!=0) //odd
                                {
                                                j=2+j;
                                                continue;
                                }
                }

}
