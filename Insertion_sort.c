//Insertion sort
#include<stdio.h>
int main()
{
                int arr[100],i,j,temp,n;
                printf("Enter the number of elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Enter the %d th element:",i+1);
                                scanf("%d",&arr[i]);
                }
                for(i=1;i<n;i++)
                {
                                temp=arr[i];
                                j=i-1;
                                while(arr[j]>temp&&j>=0)
                                {
                                                arr[j+1]=arr[j];
                                                j--;
                                }
                                arr[j+1]=temp;
                }
                printf("After sorting,The elements are:\n");
                for(i=0;i<n;i++)
                                printf("%d ",arr[i]);
                return 0;
}

