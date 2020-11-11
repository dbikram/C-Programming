//1)Bubble sort
#include<stdio.h>
int main()
{
                int arr[100],n,i,n1,j,temp;
                printf("Enter the number of elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Supply the %d th element:",i+1);
                                scanf("%d",&arr[i]);
                }
                n1=n-1;
                for(i=0;i<n1;i++)
                {
                                for(j=0;j<n1-i;j++)
                                {
                                                if(arr[j]>arr[j+1])
                                                {
                                                                temp=arr[j];
                                                                arr[j]=arr[j+1];
                                                                arr[j+1]=temp;
                                                }
                                }
                }
                printf("\nAfter sorting,the elements are:\n");
                for(i=0;i<n;i++)
                                printf("%d ",arr[i]);
                return 0;
}

