//Reverse The string without strrev function
#include<stdio.h>
#include<string.h>
int main()
{
                char str[100],temp;
                int i,j;
                printf("Enter a string:");
                gets(str);
                j=strlen(str);
                printf("After reversing--->\n");
                for(i=0;i<j/2;i++)
                {
                                temp=str[j-i-1];
                                str[j-i-1]=str[i];
                                str[i]=temp;
                }
                printf("%s\n",str);
                return 0;
}
