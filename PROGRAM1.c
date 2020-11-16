// WRITE A PROGRAM TO CALCULATE SUM OF ALL EVEN NUMBERS AND SUM OF ALL ODD NUMBERS.NUMBERS ARE ENTERED THROUGH KEYBOARD AND STORED IN AN ARRAY
#include<stdio.h>
int main()
{
                int arr[100];
                int n,i,sum=0,sum1=0;
                printf("Enter the number of elements:");
                scanf("%d",&n);
                printf("Enter the numbers:");
                for(i=0;i<n;i++)
                {
                                scanf("%d",&arr[i]);
                }
                for(i=0;i<n;i++)
                {
                                if(arr[i]%2==0)
                                                sum=sum+arr[i];
                                else
                                                sum1=sum1+arr[i];
                }
                printf("The sum of Even numbers:%d\n",sum);
                printf("The sum of Odd numbers:%d\n",sum1);
                return 0;
}

