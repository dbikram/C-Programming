//Find the largest number in the array
#include<stdio.h>
int main()
{
                int arr[60];
                int n,i,max;
                printf("How many values you want to store?\n");
                scanf("%d",&n);
                printf("Supply the values:\n");
                for(i=0;i<n;i++)
                {
                                scanf("%d",&arr[i]);
                }
                max=arr[0];
                for(i=1;i<n;i++)
                {
                                if(max<arr[i])
                                                max=arr[i];
                }
                printf("Maximum value in the array:%d\n",max);
                return 0;
}
