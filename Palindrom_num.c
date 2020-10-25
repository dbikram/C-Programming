/*Palindrome or not*/
#include<stdio.h>
int main()
{
                int num,x,r,rev=0;
                printf("Enter a number:");
                scanf("%d",&num);
                x=num;
                while(x!=0)
                {
                                r=x%10;
                                rev=rev*10+r;
                                x=x/10;
                }
                if(rev==num)
                                printf("The number is Palindrome\n");
                else
                                printf("The number is not palindrome\n");
                return 0;
}
