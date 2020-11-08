//Number pattern
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<stdio.h>
int main()
{
                int i,j,n,num=1;
                printf("Enter Rows:");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                                num=1;
                                for(j=1;j<=n;j++)
                                {
                                                if(j<=(n+1)-i)
                                                {
                                                                printf("%d ",num);
                                                                num++;
                                                }
                                }
                                printf("\n");
                }
}
