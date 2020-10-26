/*Find Sum of elements in a given array*/
#include<stdio.h>
int main()
{
                int arr[30],i,n,sum=0;
                printf("Supply the number of elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Supply %d th element:",i+1);
                                scanf("%d",&arr[i]);
                                sum += arr[i];
                }
                printf("Sum of elements of given array is %d\n",sum);
                return 0;
}
