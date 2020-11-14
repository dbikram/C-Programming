//String is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
                char str[100],str1[100];
                printf("Enter a string:");
                gets(str);
                strcpy(str1,str);//copy the content of str to str1
                strrev(str);
                if(strcmp(str,str1)==0)
                                printf("The '%s' is Palindrome string\n",str1);
                else
                                printf("The '%s' is not Palindrome string\n",str1);
                return 0;
}
