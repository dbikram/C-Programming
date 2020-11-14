//Remove the space from a string
#include<stdio.h>
int main()
{
                char str[100];
                int i;
                printf("Enter a string:");
                gets(str);
                printf("After removing space,the string is:\n");
                for(i=0;str[i]!='\0';i++)
                {
                                if(str[i]==' ')
                                                continue;
                                printf("%c",str[i]);
                }
}
