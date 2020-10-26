/*power of a number*/
#include<stdio.h>
int main()
{
                int n,i,p=1,m;
                printf("Enter a number and its power:");
                scanf("%d%d",&m,&n);
                for(i=1;i<=n;i++)
                {
                                p=p*m;
                }
                printf("The result is:%d\n",p);
                return 0;
}
