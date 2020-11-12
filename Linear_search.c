//Linear search
#include<stdio.h>
int main()
{
                int arr[100],n,i,num;
                printf("Enter the number of Elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Enter %d th number:",i+1);
                                scanf("%d",&arr[i]);
                }
                printf("Enter the number,you want to search:");
                scanf("%d",&num);
                for(i=0;i<n;i++)
                {
                                if(arr[i]==num)
                                                break;
                }
                if(i==n)
                                printf("The element is not found\n");
                else
                                printf("The element is at %dth position in given array\n",i);
                return 0;
}

