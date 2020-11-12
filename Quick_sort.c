//Quick sort
#include<stdio.h>
void quicksort(int a[],int lower,int upper);
int split(int a[],int lower,int upper);
int a[100];
int main()
{
                int n,lower=0,upper,i;
                printf("Enter the number of elements:");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                printf("Supply the %d th elements:",i+1);
                                scanf("%d",&a[i]);
                }
                upper=n-1;
                quicksort(a,lower,upper);
                printf("After sorting,The elements are:\n");
                for(i=0;i<n;i++)
                                printf("%d ",a[i]);
                return 0;
}
void quicksort(int a[],int lower,int upper)
{
                int i;
                if(lower<upper)
                {
                                i=split(a,lower,upper);
                                quicksort(a,lower,i-1);
                                quicksort(a,i+1,upper);
                }
}
int split(int a[],int lower,int upper)
{
                int l,u,pivot,temp;
                l=lower+1;
                u=upper;
                pivot=a[lower];
                while(u>l)
                {
                                while(a[l]<=pivot)
                                                l++;
                                while(a[u]>pivot)
                                                u--;
                                if(u>l)
                                {
                                                temp=a[u];
                                                a[u]=a[l];
                                                a[l]=temp;
                                }
                }
                temp=a[lower];
                a[lower]=a[u];
                a[u]=temp;
                return u;
}

