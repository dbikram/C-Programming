//Sorting the string in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
                char str[100],temp;
                int i,j,n;
                printf("Enter a string:");
                gets(str);
                n=strlen(str);
                for(i=0;i<n;i++)
                {
                                for(j=i+1;j<n;j++)
                                {
                                                if(str[i]>str[j])
                                                {
                                                                temp=str[i];
                                                                str[i]=str[j];
                                                                str[j]=temp;
                                                }
                                }
                }
                printf("After sorting\n");
                printf("The string is:%s\n",str);
                return 0;
}
