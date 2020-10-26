/*Armstrong or not*/
#include<stdio.h>
#include<math.h>
int main()
{
                int num,x,count=0,r=0,sum=0;
                printf("Enter a number:");
                scanf("%d",&num);
                x=num;
                while(x!=0)
                {
                                x=x/10;
                                count++;  //count the digit
                }
                x=num;
                while(x!=0)
                {
                                r=x%10;
                                sum=sum+pow(r,count);
                                x=x/10;
                }
                if(num==sum)
                                printf("%d is an Armstrong number\n",num);
                else
                                printf("%d is not an Armstrong number\n",num);
                return 0;

}
