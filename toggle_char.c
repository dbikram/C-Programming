//program to toggle each character in a string
#include<stdio.h>
int main()
{
                char str[100],*e;
                printf("Enter a string:");
                gets(str);
                e=str;
                while(*e)
                {
                                if(*e>='a'&& *e<='z')
                                                *e=*e-32;
                                else if(*e>='A'&& *e<='Z')
                                                *e=*e+32;
                                *e++;
                }
                printf("After toggling--->\n");
                printf("String is:%s\n",str);
                return 0;
}
