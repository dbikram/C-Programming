//Merge sort
#include<stdio.h>
void mergesort(int a[],int lower,int upper);
void merge(int a[],int lower1,int upper1,int lower2,int upper2);
int main()
{
                int arr[100],n,i,lower=0,upper;
                printf("Enter the number of Elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Enter the %d th element:",i+1);
                                scanf("%d",&arr[i]);
                }
                upper=n-1;
                mergesort(arr,lower,upper);
                printf("After sorting,The elements are:\n");
                for(i=0;i<n;i++)
                {
                                printf("%d ",arr[i]);
                }
                return 0;
}
void mergesort(int a[],int lower,int upper)
{
                int mid;
                if(upper>lower)
                {
                                mid=(lower+upper)/2;
                                mergesort(a,lower,mid);
                                mergesort(a,mid+1,upper);
                                merge(a,lower,mid,mid+1,upper);
                }
}
void merge(int a[],int lower1,int upper1,int lower2,int upper2)
{
                int p,q,d[100],n=0,i,j;
                p=lower1;
                q=lower2;
                while((p<=upper1)&&(q<=upper2))
                {
                                d[n++]=(a[p]<a[q])?a[p++]:a[q++];
                }
                while(p<=upper1)
                                d[n++]=a[p++];
                while(q<=upper2)
                                d[n++]=a[q++];
                for(i=lower1,n=0;i<=upper1;i++,n++)
                                a[i]=d[n];
                for(i=lower2,j=n;i<=upper2;i++,j++)
                                a[i]=d[j];
}

