//Binary search
#include<stdio.h>
int binsrch(int a[],int,int,int);
int main()
{
                int arr[100],n,i,num,lower=0,upper,r;
                printf("Enter the number of element:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Enter %dth Element:",i+1);
                                scanf("%d",&arr[i]);
                }
                upper=n-1;
                printf("Enter a Element to searched:");
                scanf("%d",&num);
                r=binsrch(arr,num,lower,upper);
                if(r==-1)
                                printf("Not found\n");
                else
                                printf("The element is at %dth position\n",r);
                return 0;
}
int binsrch(int a[],int num,int low,int up)
{
                int mid;
                if(low>up)
                                return(-1);
                mid=(low+up)/2;
                if(num==a[mid])
                                return mid;
                else
                {
                                if(num<a[mid])
                                                binsrch(a,num,low,mid-1);
                                else
                                                binsrch(a,num,mid+1,up);
                }
}
