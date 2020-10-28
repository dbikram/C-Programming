//String pattern
#include<stdio.h>
#include<string.h>
int main()
{
                char str[100];
                int i,j,k;
                printf("Enter a string:");
                gets(str);
                k=strlen(str);
                for(i=0;i<k;i++)
                {
                                for(j=0;j<k;j++)
                                {
                                                if(j<=k-(k-i))
                                                                printf("%c",str[j]);
                                                else
                                                                printf(" ");
                                }
                                printf("\n");
                }
                return 0;
}
