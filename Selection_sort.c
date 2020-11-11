//Selection sort
#include<stdio.h>
int main()
{
                int arr[100],i,j,n,temp;
                printf("Enter the number of elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Enter the %d th element:",i+1);
                                scanf("%d",&arr[i]);
                }
                for(i=0;i<n-1;i++)
                {
                                for(j=i+1;j<n;j++)
                                {
                                                if(arr[i]>arr[j])
                                                {
                                                                temp=arr[i];
                                                                arr[i]=arr[j];
                                                                arr[j]=temp;
                                                }
                                }
                }
                printf("After sorting,The elements are:\n");
                for(i=0;i<n;i++)
                {
                                printf("%d ",arr[i]);
                }
                return 0;
}

